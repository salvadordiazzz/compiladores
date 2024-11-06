#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "CobraLexer.h"
#include "CobraParser.h"
#include "Driver.h"

using namespace antlr4;
using namespace std;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        cerr << "Uso: " << argv[0] << " <archivo fuente>" << endl;
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream.is_open()) {
        cerr << "Error al abrir el archivo " << argv[1] << endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    CobraLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CobraParser parser(&tokens);

    tree::ParseTree* tree = parser.program();
    
    CobraDriver driver;  // Creación del driver para manejar el Visitor
    driver.visit(tree);

    return 0;
}

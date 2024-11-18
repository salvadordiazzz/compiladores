#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "CobraLexer.h"
#include "CobraParser.h"
#include "Driver.h"
#include <string>
#include "llvm/IR/Module.h"
#include "llvm/Analysis/CallGraph.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/GraphWriter.h"
#include "llvm/Support/CommandLine.h"

using namespace antlr4;
using namespace std;
using namespace llvm;


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
    LLVMContext Context;
    SMDiagnostic Err;
    tree::ParseTree* tree = parser.program();

    // Generar el archivo DOT con el árbol de análisis
    {
        std::ofstream outFile("parse_tree.dot");
        outFile << "digraph G {\n";
        DotTreeVisitor dotVisitor(outFile);
        dotVisitor.visit(tree);
        outFile << "}\n";
        outFile.close();
    }

    // Generar IR usando tu Visitor de IR
    {
        CobraDriver driver; // Asumo que CobraDriver genera el IR
        driver.visit(tree);
    }

    return 0;
}

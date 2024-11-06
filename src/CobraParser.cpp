
// Generated from ../src/Cobra.g4 by ANTLR 4.13.2


#include "CobraListener.h"
#include "CobraVisitor.h"

#include "CobraParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CobraParserStaticData final {
  CobraParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CobraParserStaticData(const CobraParserStaticData&) = delete;
  CobraParserStaticData(CobraParserStaticData&&) = delete;
  CobraParserStaticData& operator=(const CobraParserStaticData&) = delete;
  CobraParserStaticData& operator=(CobraParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cobraParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CobraParserStaticData> cobraParserStaticData = nullptr;

void cobraParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cobraParserStaticData != nullptr) {
    return;
  }
#else
  assert(cobraParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CobraParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "varDeclaration", "inferredVarDeclaration", 
      "rangeDeclaration", "collection", "assignment", "display", "getInput", 
      "functionDef", "block", "conditional", "loopStruct", "repeatStruct", 
      "waitLoop", "objectDecl", "arrayDecl", "matrixDecl", "parameterList", 
      "dataType", "expression", "literal"
    },
    std::vector<std::string>{
      "", "';'", "'auto'", "'scale'", "','", "'['", "']'", "'{'", "':'", 
      "'}'", "'show'", "'ask'", "'function'", "'done'", "'return'", "'when'", 
      "'otherwiseWhen'", "'otherwise'", "'repeatUntil'", "'countFrom'", 
      "'pauseThen'", "'entity'", "'array'", "'<'", "'>'", "'matrix'", "'number'", 
      "'decimal'", "'letter'", "'string'", "'flag'", "", "", "", "", "", 
      "", "", "", "", "'='", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "TIME", "BOOLEAN", 
      "INTEGER", "DECIMAL", "CHARACTER", "TEXT", "IDENTIFIER", "WS", "COMMENT", 
      "ASSIGN", "LPAR", "RPAR", "ADD", "SUB", "MUL", "DIV", "POW"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,47,339,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,55,8,0,10,0,12,0,58,9,
  	0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,67,8,1,1,2,1,2,1,2,1,2,3,2,73,8,2,1,
  	2,1,2,1,3,1,3,1,3,1,3,3,3,81,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,100,8,5,10,5,12,5,103,9,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,115,8,5,10,5,12,5,118,9,5,1,5,1,5,
  	3,5,122,8,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,3,7,134,8,7,1,7,1,
  	7,1,7,1,7,3,7,140,8,7,5,7,142,8,7,10,7,12,7,145,9,7,1,7,1,7,1,7,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,5,10,166,
  	8,10,10,10,12,10,169,9,10,1,10,1,10,1,10,5,10,174,8,10,10,10,12,10,177,
  	9,10,1,10,1,10,1,10,1,10,1,10,3,10,184,8,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,5,11,197,8,11,10,11,12,11,200,9,11,1,11,
  	1,11,3,11,204,8,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,5,16,251,8,16,10,16,12,16,254,9,16,
  	1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	5,17,270,8,17,10,17,12,17,273,9,17,1,17,1,17,1,17,1,17,1,17,1,17,5,17,
  	281,8,17,10,17,12,17,284,9,17,1,17,1,17,5,17,288,8,17,10,17,12,17,291,
  	9,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,5,18,302,8,18,10,18,
  	12,18,305,9,18,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,3,20,315,8,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,326,8,20,10,20,12,20,
  	329,9,20,1,21,1,21,1,21,1,21,1,21,1,21,3,21,337,8,21,1,21,0,1,40,22,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,0,3,1,0,26,
  	30,1,0,45,46,1,0,43,44,359,0,56,1,0,0,0,2,66,1,0,0,0,4,68,1,0,0,0,6,76,
  	1,0,0,0,8,84,1,0,0,0,10,121,1,0,0,0,12,123,1,0,0,0,14,128,1,0,0,0,16,
  	149,1,0,0,0,18,157,1,0,0,0,20,183,1,0,0,0,22,185,1,0,0,0,24,207,1,0,0,
  	0,26,214,1,0,0,0,28,225,1,0,0,0,30,232,1,0,0,0,32,240,1,0,0,0,34,258,
  	1,0,0,0,36,295,1,0,0,0,38,306,1,0,0,0,40,314,1,0,0,0,42,336,1,0,0,0,44,
  	55,3,2,1,0,45,55,3,18,9,0,46,55,3,24,12,0,47,55,3,26,13,0,48,55,3,22,
  	11,0,49,55,3,30,15,0,50,55,3,32,16,0,51,55,3,34,17,0,52,55,3,28,14,0,
  	53,55,3,8,4,0,54,44,1,0,0,0,54,45,1,0,0,0,54,46,1,0,0,0,54,47,1,0,0,0,
  	54,48,1,0,0,0,54,49,1,0,0,0,54,50,1,0,0,0,54,51,1,0,0,0,54,52,1,0,0,0,
  	54,53,1,0,0,0,55,58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,
  	58,56,1,0,0,0,59,60,5,0,0,1,60,1,1,0,0,0,61,67,3,4,2,0,62,67,3,6,3,0,
  	63,67,3,12,6,0,64,67,3,14,7,0,65,67,3,16,8,0,66,61,1,0,0,0,66,62,1,0,
  	0,0,66,63,1,0,0,0,66,64,1,0,0,0,66,65,1,0,0,0,67,3,1,0,0,0,68,69,3,38,
  	19,0,69,72,5,37,0,0,70,71,5,40,0,0,71,73,3,40,20,0,72,70,1,0,0,0,72,73,
  	1,0,0,0,73,74,1,0,0,0,74,75,5,1,0,0,75,5,1,0,0,0,76,77,5,2,0,0,77,80,
  	5,37,0,0,78,79,5,40,0,0,79,81,3,40,20,0,80,78,1,0,0,0,80,81,1,0,0,0,81,
  	82,1,0,0,0,82,83,5,1,0,0,83,7,1,0,0,0,84,85,5,2,0,0,85,86,5,37,0,0,86,
  	87,5,40,0,0,87,88,5,3,0,0,88,89,5,41,0,0,89,90,3,40,20,0,90,91,5,4,0,
  	0,91,92,3,40,20,0,92,93,5,42,0,0,93,94,5,1,0,0,94,9,1,0,0,0,95,96,5,5,
  	0,0,96,101,3,40,20,0,97,98,5,4,0,0,98,100,3,40,20,0,99,97,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,101,1,
  	0,0,0,104,105,5,6,0,0,105,122,1,0,0,0,106,107,5,7,0,0,107,108,5,36,0,
  	0,108,109,5,8,0,0,109,116,3,40,20,0,110,111,5,4,0,0,111,112,5,36,0,0,
  	112,113,5,8,0,0,113,115,3,40,20,0,114,110,1,0,0,0,115,118,1,0,0,0,116,
  	114,1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,0,118,116,1,0,0,0,119,120,5,
  	9,0,0,120,122,1,0,0,0,121,95,1,0,0,0,121,106,1,0,0,0,122,11,1,0,0,0,123,
  	124,5,37,0,0,124,125,5,40,0,0,125,126,3,40,20,0,126,127,5,1,0,0,127,13,
  	1,0,0,0,128,129,5,10,0,0,129,133,5,41,0,0,130,134,5,36,0,0,131,134,5,
  	37,0,0,132,134,3,40,20,0,133,130,1,0,0,0,133,131,1,0,0,0,133,132,1,0,
  	0,0,134,143,1,0,0,0,135,139,5,4,0,0,136,140,5,36,0,0,137,140,5,37,0,0,
  	138,140,3,40,20,0,139,136,1,0,0,0,139,137,1,0,0,0,139,138,1,0,0,0,140,
  	142,1,0,0,0,141,135,1,0,0,0,142,145,1,0,0,0,143,141,1,0,0,0,143,144,1,
  	0,0,0,144,146,1,0,0,0,145,143,1,0,0,0,146,147,5,42,0,0,147,148,5,1,0,
  	0,148,15,1,0,0,0,149,150,5,37,0,0,150,151,5,40,0,0,151,152,5,11,0,0,152,
  	153,5,41,0,0,153,154,5,36,0,0,154,155,5,42,0,0,155,156,5,1,0,0,156,17,
  	1,0,0,0,157,158,5,12,0,0,158,159,5,37,0,0,159,160,5,41,0,0,160,161,5,
  	42,0,0,161,162,3,20,10,0,162,19,1,0,0,0,163,167,5,7,0,0,164,166,3,2,1,
  	0,165,164,1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,
  	170,1,0,0,0,169,167,1,0,0,0,170,171,5,13,0,0,171,184,5,1,0,0,172,174,
  	3,2,1,0,173,172,1,0,0,0,174,177,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,
  	0,176,178,1,0,0,0,177,175,1,0,0,0,178,179,5,14,0,0,179,180,3,40,20,0,
  	180,181,5,13,0,0,181,182,5,1,0,0,182,184,1,0,0,0,183,163,1,0,0,0,183,
  	175,1,0,0,0,184,21,1,0,0,0,185,186,5,15,0,0,186,187,5,41,0,0,187,188,
  	3,40,20,0,188,189,5,42,0,0,189,198,3,20,10,0,190,191,5,16,0,0,191,192,
  	5,41,0,0,192,193,3,40,20,0,193,194,5,42,0,0,194,195,3,20,10,0,195,197,
  	1,0,0,0,196,190,1,0,0,0,197,200,1,0,0,0,198,196,1,0,0,0,198,199,1,0,0,
  	0,199,203,1,0,0,0,200,198,1,0,0,0,201,202,5,17,0,0,202,204,3,20,10,0,
  	203,201,1,0,0,0,203,204,1,0,0,0,204,205,1,0,0,0,205,206,5,1,0,0,206,23,
  	1,0,0,0,207,208,5,18,0,0,208,209,5,41,0,0,209,210,3,40,20,0,210,211,5,
  	42,0,0,211,212,3,20,10,0,212,213,5,1,0,0,213,25,1,0,0,0,214,215,5,19,
  	0,0,215,216,5,41,0,0,216,217,3,40,20,0,217,218,5,4,0,0,218,219,3,40,20,
  	0,219,220,5,4,0,0,220,221,3,40,20,0,221,222,5,42,0,0,222,223,3,20,10,
  	0,223,224,5,1,0,0,224,27,1,0,0,0,225,226,5,20,0,0,226,227,5,41,0,0,227,
  	228,5,31,0,0,228,229,5,42,0,0,229,230,3,20,10,0,230,231,5,1,0,0,231,29,
  	1,0,0,0,232,233,5,21,0,0,233,234,5,37,0,0,234,235,5,41,0,0,235,236,3,
  	36,18,0,236,237,5,42,0,0,237,238,3,20,10,0,238,239,5,1,0,0,239,31,1,0,
  	0,0,240,241,5,22,0,0,241,242,5,23,0,0,242,243,3,38,19,0,243,244,5,24,
  	0,0,244,245,5,37,0,0,245,246,5,40,0,0,246,247,5,5,0,0,247,252,3,40,20,
  	0,248,249,5,4,0,0,249,251,3,40,20,0,250,248,1,0,0,0,251,254,1,0,0,0,252,
  	250,1,0,0,0,252,253,1,0,0,0,253,255,1,0,0,0,254,252,1,0,0,0,255,256,5,
  	6,0,0,256,257,5,1,0,0,257,33,1,0,0,0,258,259,5,25,0,0,259,260,5,23,0,
  	0,260,261,3,38,19,0,261,262,5,24,0,0,262,263,5,37,0,0,263,264,5,40,0,
  	0,264,265,5,5,0,0,265,266,5,5,0,0,266,271,3,40,20,0,267,268,5,4,0,0,268,
  	270,3,40,20,0,269,267,1,0,0,0,270,273,1,0,0,0,271,269,1,0,0,0,271,272,
  	1,0,0,0,272,274,1,0,0,0,273,271,1,0,0,0,274,289,5,6,0,0,275,276,5,4,0,
  	0,276,277,5,5,0,0,277,282,3,40,20,0,278,279,5,4,0,0,279,281,3,40,20,0,
  	280,278,1,0,0,0,281,284,1,0,0,0,282,280,1,0,0,0,282,283,1,0,0,0,283,285,
  	1,0,0,0,284,282,1,0,0,0,285,286,5,6,0,0,286,288,1,0,0,0,287,275,1,0,0,
  	0,288,291,1,0,0,0,289,287,1,0,0,0,289,290,1,0,0,0,290,292,1,0,0,0,291,
  	289,1,0,0,0,292,293,5,6,0,0,293,294,5,1,0,0,294,35,1,0,0,0,295,296,3,
  	38,19,0,296,303,5,37,0,0,297,298,5,4,0,0,298,299,3,38,19,0,299,300,5,
  	37,0,0,300,302,1,0,0,0,301,297,1,0,0,0,302,305,1,0,0,0,303,301,1,0,0,
  	0,303,304,1,0,0,0,304,37,1,0,0,0,305,303,1,0,0,0,306,307,7,0,0,0,307,
  	39,1,0,0,0,308,309,6,20,-1,0,309,310,5,41,0,0,310,311,3,40,20,0,311,312,
  	5,42,0,0,312,315,1,0,0,0,313,315,3,42,21,0,314,308,1,0,0,0,314,313,1,
  	0,0,0,315,327,1,0,0,0,316,317,10,4,0,0,317,318,5,47,0,0,318,326,3,40,
  	20,5,319,320,10,3,0,0,320,321,7,1,0,0,321,326,3,40,20,4,322,323,10,2,
  	0,0,323,324,7,2,0,0,324,326,3,40,20,3,325,316,1,0,0,0,325,319,1,0,0,0,
  	325,322,1,0,0,0,326,329,1,0,0,0,327,325,1,0,0,0,327,328,1,0,0,0,328,41,
  	1,0,0,0,329,327,1,0,0,0,330,337,5,33,0,0,331,337,5,34,0,0,332,337,5,35,
  	0,0,333,337,5,36,0,0,334,337,5,32,0,0,335,337,5,37,0,0,336,330,1,0,0,
  	0,336,331,1,0,0,0,336,332,1,0,0,0,336,333,1,0,0,0,336,334,1,0,0,0,336,
  	335,1,0,0,0,337,43,1,0,0,0,25,54,56,66,72,80,101,116,121,133,139,143,
  	167,175,183,198,203,252,271,282,289,303,314,325,327,336
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cobraParserStaticData = std::move(staticData);
}

}

CobraParser::CobraParser(TokenStream *input) : CobraParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CobraParser::CobraParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CobraParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cobraParserStaticData->atn, cobraParserStaticData->decisionToDFA, cobraParserStaticData->sharedContextCache, options);
}

CobraParser::~CobraParser() {
  delete _interpreter;
}

const atn::ATN& CobraParser::getATN() const {
  return *cobraParserStaticData->atn;
}

std::string CobraParser::getGrammarFileName() const {
  return "Cobra.g4";
}

const std::vector<std::string>& CobraParser::getRuleNames() const {
  return cobraParserStaticData->ruleNames;
}

const dfa::Vocabulary& CobraParser::getVocabulary() const {
  return cobraParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CobraParser::getSerializedATN() const {
  return cobraParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

CobraParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::ProgramContext::EOF() {
  return getToken(CobraParser::EOF, 0);
}

std::vector<CobraParser::StatementContext *> CobraParser::ProgramContext::statement() {
  return getRuleContexts<CobraParser::StatementContext>();
}

CobraParser::StatementContext* CobraParser::ProgramContext::statement(size_t i) {
  return getRuleContext<CobraParser::StatementContext>(i);
}

std::vector<CobraParser::FunctionDefContext *> CobraParser::ProgramContext::functionDef() {
  return getRuleContexts<CobraParser::FunctionDefContext>();
}

CobraParser::FunctionDefContext* CobraParser::ProgramContext::functionDef(size_t i) {
  return getRuleContext<CobraParser::FunctionDefContext>(i);
}

std::vector<CobraParser::LoopStructContext *> CobraParser::ProgramContext::loopStruct() {
  return getRuleContexts<CobraParser::LoopStructContext>();
}

CobraParser::LoopStructContext* CobraParser::ProgramContext::loopStruct(size_t i) {
  return getRuleContext<CobraParser::LoopStructContext>(i);
}

std::vector<CobraParser::RepeatStructContext *> CobraParser::ProgramContext::repeatStruct() {
  return getRuleContexts<CobraParser::RepeatStructContext>();
}

CobraParser::RepeatStructContext* CobraParser::ProgramContext::repeatStruct(size_t i) {
  return getRuleContext<CobraParser::RepeatStructContext>(i);
}

std::vector<CobraParser::ConditionalContext *> CobraParser::ProgramContext::conditional() {
  return getRuleContexts<CobraParser::ConditionalContext>();
}

CobraParser::ConditionalContext* CobraParser::ProgramContext::conditional(size_t i) {
  return getRuleContext<CobraParser::ConditionalContext>(i);
}

std::vector<CobraParser::ObjectDeclContext *> CobraParser::ProgramContext::objectDecl() {
  return getRuleContexts<CobraParser::ObjectDeclContext>();
}

CobraParser::ObjectDeclContext* CobraParser::ProgramContext::objectDecl(size_t i) {
  return getRuleContext<CobraParser::ObjectDeclContext>(i);
}

std::vector<CobraParser::ArrayDeclContext *> CobraParser::ProgramContext::arrayDecl() {
  return getRuleContexts<CobraParser::ArrayDeclContext>();
}

CobraParser::ArrayDeclContext* CobraParser::ProgramContext::arrayDecl(size_t i) {
  return getRuleContext<CobraParser::ArrayDeclContext>(i);
}

std::vector<CobraParser::MatrixDeclContext *> CobraParser::ProgramContext::matrixDecl() {
  return getRuleContexts<CobraParser::MatrixDeclContext>();
}

CobraParser::MatrixDeclContext* CobraParser::ProgramContext::matrixDecl(size_t i) {
  return getRuleContext<CobraParser::MatrixDeclContext>(i);
}

std::vector<CobraParser::WaitLoopContext *> CobraParser::ProgramContext::waitLoop() {
  return getRuleContexts<CobraParser::WaitLoopContext>();
}

CobraParser::WaitLoopContext* CobraParser::ProgramContext::waitLoop(size_t i) {
  return getRuleContext<CobraParser::WaitLoopContext>(i);
}

std::vector<CobraParser::RangeDeclarationContext *> CobraParser::ProgramContext::rangeDeclaration() {
  return getRuleContexts<CobraParser::RangeDeclarationContext>();
}

CobraParser::RangeDeclarationContext* CobraParser::ProgramContext::rangeDeclaration(size_t i) {
  return getRuleContext<CobraParser::RangeDeclarationContext>(i);
}


size_t CobraParser::ProgramContext::getRuleIndex() const {
  return CobraParser::RuleProgram;
}

void CobraParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void CobraParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any CobraParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ProgramContext* CobraParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CobraParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 139561047044) != 0)) {
      setState(54);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(44);
        statement();
        break;
      }

      case 2: {
        setState(45);
        functionDef();
        break;
      }

      case 3: {
        setState(46);
        loopStruct();
        break;
      }

      case 4: {
        setState(47);
        repeatStruct();
        break;
      }

      case 5: {
        setState(48);
        conditional();
        break;
      }

      case 6: {
        setState(49);
        objectDecl();
        break;
      }

      case 7: {
        setState(50);
        arrayDecl();
        break;
      }

      case 8: {
        setState(51);
        matrixDecl();
        break;
      }

      case 9: {
        setState(52);
        waitLoop();
        break;
      }

      case 10: {
        setState(53);
        rangeDeclaration();
        break;
      }

      default:
        break;
      }
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    match(CobraParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CobraParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CobraParser::VarDeclarationContext* CobraParser::StatementContext::varDeclaration() {
  return getRuleContext<CobraParser::VarDeclarationContext>(0);
}

CobraParser::InferredVarDeclarationContext* CobraParser::StatementContext::inferredVarDeclaration() {
  return getRuleContext<CobraParser::InferredVarDeclarationContext>(0);
}

CobraParser::AssignmentContext* CobraParser::StatementContext::assignment() {
  return getRuleContext<CobraParser::AssignmentContext>(0);
}

CobraParser::DisplayContext* CobraParser::StatementContext::display() {
  return getRuleContext<CobraParser::DisplayContext>(0);
}

CobraParser::GetInputContext* CobraParser::StatementContext::getInput() {
  return getRuleContext<CobraParser::GetInputContext>(0);
}


size_t CobraParser::StatementContext::getRuleIndex() const {
  return CobraParser::RuleStatement;
}

void CobraParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CobraParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any CobraParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::StatementContext* CobraParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, CobraParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(61);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(62);
      inferredVarDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(63);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(64);
      display();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(65);
      getInput();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

CobraParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CobraParser::DataTypeContext* CobraParser::VarDeclarationContext::dataType() {
  return getRuleContext<CobraParser::DataTypeContext>(0);
}

tree::TerminalNode* CobraParser::VarDeclarationContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::VarDeclarationContext::ASSIGN() {
  return getToken(CobraParser::ASSIGN, 0);
}

CobraParser::ExpressionContext* CobraParser::VarDeclarationContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}


size_t CobraParser::VarDeclarationContext::getRuleIndex() const {
  return CobraParser::RuleVarDeclaration;
}

void CobraParser::VarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclaration(this);
}

void CobraParser::VarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclaration(this);
}


std::any CobraParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::VarDeclarationContext* CobraParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, CobraParser::RuleVarDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    dataType();
    setState(69);
    match(CobraParser::IDENTIFIER);
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::ASSIGN) {
      setState(70);
      match(CobraParser::ASSIGN);
      setState(71);
      expression(0);
    }
    setState(74);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InferredVarDeclarationContext ------------------------------------------------------------------

CobraParser::InferredVarDeclarationContext::InferredVarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::InferredVarDeclarationContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::InferredVarDeclarationContext::ASSIGN() {
  return getToken(CobraParser::ASSIGN, 0);
}

CobraParser::ExpressionContext* CobraParser::InferredVarDeclarationContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}


size_t CobraParser::InferredVarDeclarationContext::getRuleIndex() const {
  return CobraParser::RuleInferredVarDeclaration;
}

void CobraParser::InferredVarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInferredVarDeclaration(this);
}

void CobraParser::InferredVarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInferredVarDeclaration(this);
}


std::any CobraParser::InferredVarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitInferredVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::InferredVarDeclarationContext* CobraParser::inferredVarDeclaration() {
  InferredVarDeclarationContext *_localctx = _tracker.createInstance<InferredVarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, CobraParser::RuleInferredVarDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(CobraParser::T__1);
    setState(77);
    match(CobraParser::IDENTIFIER);
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::ASSIGN) {
      setState(78);
      match(CobraParser::ASSIGN);
      setState(79);
      expression(0);
    }
    setState(82);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeDeclarationContext ------------------------------------------------------------------

CobraParser::RangeDeclarationContext::RangeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::RangeDeclarationContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::RangeDeclarationContext::ASSIGN() {
  return getToken(CobraParser::ASSIGN, 0);
}

tree::TerminalNode* CobraParser::RangeDeclarationContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::RangeDeclarationContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::RangeDeclarationContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

tree::TerminalNode* CobraParser::RangeDeclarationContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}


size_t CobraParser::RangeDeclarationContext::getRuleIndex() const {
  return CobraParser::RuleRangeDeclaration;
}

void CobraParser::RangeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeDeclaration(this);
}

void CobraParser::RangeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeDeclaration(this);
}


std::any CobraParser::RangeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitRangeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::RangeDeclarationContext* CobraParser::rangeDeclaration() {
  RangeDeclarationContext *_localctx = _tracker.createInstance<RangeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, CobraParser::RuleRangeDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(CobraParser::T__1);
    setState(85);
    match(CobraParser::IDENTIFIER);
    setState(86);
    match(CobraParser::ASSIGN);
    setState(87);
    match(CobraParser::T__2);
    setState(88);
    match(CobraParser::LPAR);
    setState(89);
    expression(0);
    setState(90);
    match(CobraParser::T__3);
    setState(91);
    expression(0);
    setState(92);
    match(CobraParser::RPAR);
    setState(93);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionContext ------------------------------------------------------------------

CobraParser::CollectionContext::CollectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CobraParser::CollectionContext::getRuleIndex() const {
  return CobraParser::RuleCollection;
}

void CobraParser::CollectionContext::copyFrom(CollectionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ListCollectionContext ------------------------------------------------------------------

std::vector<CobraParser::ExpressionContext *> CobraParser::ListCollectionContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::ListCollectionContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

CobraParser::ListCollectionContext::ListCollectionContext(CollectionContext *ctx) { copyFrom(ctx); }

void CobraParser::ListCollectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListCollection(this);
}
void CobraParser::ListCollectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListCollection(this);
}

std::any CobraParser::ListCollectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitListCollection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DictCollectionContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> CobraParser::DictCollectionContext::TEXT() {
  return getTokens(CobraParser::TEXT);
}

tree::TerminalNode* CobraParser::DictCollectionContext::TEXT(size_t i) {
  return getToken(CobraParser::TEXT, i);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::DictCollectionContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::DictCollectionContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

CobraParser::DictCollectionContext::DictCollectionContext(CollectionContext *ctx) { copyFrom(ctx); }

void CobraParser::DictCollectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictCollection(this);
}
void CobraParser::DictCollectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictCollection(this);
}

std::any CobraParser::DictCollectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitDictCollection(this);
  else
    return visitor->visitChildren(this);
}
CobraParser::CollectionContext* CobraParser::collection() {
  CollectionContext *_localctx = _tracker.createInstance<CollectionContext>(_ctx, getState());
  enterRule(_localctx, 10, CobraParser::RuleCollection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(121);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::T__4: {
        _localctx = _tracker.createInstance<CobraParser::ListCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(95);
        match(CobraParser::T__4);
        setState(96);
        expression(0);
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(97);
          match(CobraParser::T__3);
          setState(98);
          expression(0);
          setState(103);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(104);
        match(CobraParser::T__5);
        break;
      }

      case CobraParser::T__6: {
        _localctx = _tracker.createInstance<CobraParser::DictCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(106);
        match(CobraParser::T__6);
        setState(107);
        match(CobraParser::TEXT);
        setState(108);
        match(CobraParser::T__7);
        setState(109);
        expression(0);
        setState(116);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(110);
          match(CobraParser::T__3);
          setState(111);
          match(CobraParser::TEXT);
          setState(112);
          match(CobraParser::T__7);
          setState(113);
          expression(0);
          setState(118);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(119);
        match(CobraParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

CobraParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::AssignmentContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::AssignmentContext::ASSIGN() {
  return getToken(CobraParser::ASSIGN, 0);
}

CobraParser::ExpressionContext* CobraParser::AssignmentContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}


size_t CobraParser::AssignmentContext::getRuleIndex() const {
  return CobraParser::RuleAssignment;
}

void CobraParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void CobraParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any CobraParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::AssignmentContext* CobraParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 12, CobraParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(CobraParser::IDENTIFIER);
    setState(124);
    match(CobraParser::ASSIGN);
    setState(125);
    expression(0);
    setState(126);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisplayContext ------------------------------------------------------------------

CobraParser::DisplayContext::DisplayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::DisplayContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

tree::TerminalNode* CobraParser::DisplayContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

std::vector<tree::TerminalNode *> CobraParser::DisplayContext::TEXT() {
  return getTokens(CobraParser::TEXT);
}

tree::TerminalNode* CobraParser::DisplayContext::TEXT(size_t i) {
  return getToken(CobraParser::TEXT, i);
}

std::vector<tree::TerminalNode *> CobraParser::DisplayContext::IDENTIFIER() {
  return getTokens(CobraParser::IDENTIFIER);
}

tree::TerminalNode* CobraParser::DisplayContext::IDENTIFIER(size_t i) {
  return getToken(CobraParser::IDENTIFIER, i);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::DisplayContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::DisplayContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}


size_t CobraParser::DisplayContext::getRuleIndex() const {
  return CobraParser::RuleDisplay;
}

void CobraParser::DisplayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisplay(this);
}

void CobraParser::DisplayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisplay(this);
}


std::any CobraParser::DisplayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitDisplay(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::DisplayContext* CobraParser::display() {
  DisplayContext *_localctx = _tracker.createInstance<DisplayContext>(_ctx, getState());
  enterRule(_localctx, 14, CobraParser::RuleDisplay);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(CobraParser::T__9);
    setState(129);
    match(CobraParser::LPAR);
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(130);
      match(CobraParser::TEXT);
      break;
    }

    case 2: {
      setState(131);
      match(CobraParser::IDENTIFIER);
      break;
    }

    case 3: {
      setState(132);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(135);
      match(CobraParser::T__3);
      setState(139);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(136);
        match(CobraParser::TEXT);
        break;
      }

      case 2: {
        setState(137);
        match(CobraParser::IDENTIFIER);
        break;
      }

      case 3: {
        setState(138);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    match(CobraParser::RPAR);
    setState(147);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetInputContext ------------------------------------------------------------------

CobraParser::GetInputContext::GetInputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::GetInputContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::GetInputContext::ASSIGN() {
  return getToken(CobraParser::ASSIGN, 0);
}

tree::TerminalNode* CobraParser::GetInputContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

tree::TerminalNode* CobraParser::GetInputContext::TEXT() {
  return getToken(CobraParser::TEXT, 0);
}

tree::TerminalNode* CobraParser::GetInputContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}


size_t CobraParser::GetInputContext::getRuleIndex() const {
  return CobraParser::RuleGetInput;
}

void CobraParser::GetInputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetInput(this);
}

void CobraParser::GetInputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetInput(this);
}


std::any CobraParser::GetInputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitGetInput(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::GetInputContext* CobraParser::getInput() {
  GetInputContext *_localctx = _tracker.createInstance<GetInputContext>(_ctx, getState());
  enterRule(_localctx, 16, CobraParser::RuleGetInput);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(CobraParser::IDENTIFIER);
    setState(150);
    match(CobraParser::ASSIGN);
    setState(151);
    match(CobraParser::T__10);
    setState(152);
    match(CobraParser::LPAR);
    setState(153);
    match(CobraParser::TEXT);
    setState(154);
    match(CobraParser::RPAR);
    setState(155);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefContext ------------------------------------------------------------------

CobraParser::FunctionDefContext::FunctionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::FunctionDefContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::FunctionDefContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

tree::TerminalNode* CobraParser::FunctionDefContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

CobraParser::BlockContext* CobraParser::FunctionDefContext::block() {
  return getRuleContext<CobraParser::BlockContext>(0);
}


size_t CobraParser::FunctionDefContext::getRuleIndex() const {
  return CobraParser::RuleFunctionDef;
}

void CobraParser::FunctionDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDef(this);
}

void CobraParser::FunctionDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDef(this);
}


std::any CobraParser::FunctionDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitFunctionDef(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::FunctionDefContext* CobraParser::functionDef() {
  FunctionDefContext *_localctx = _tracker.createInstance<FunctionDefContext>(_ctx, getState());
  enterRule(_localctx, 18, CobraParser::RuleFunctionDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(CobraParser::T__11);
    setState(158);
    match(CobraParser::IDENTIFIER);
    setState(159);
    match(CobraParser::LPAR);
    setState(160);
    match(CobraParser::RPAR);
    setState(161);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

CobraParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CobraParser::StatementContext *> CobraParser::BlockContext::statement() {
  return getRuleContexts<CobraParser::StatementContext>();
}

CobraParser::StatementContext* CobraParser::BlockContext::statement(size_t i) {
  return getRuleContext<CobraParser::StatementContext>(i);
}

CobraParser::ExpressionContext* CobraParser::BlockContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}


size_t CobraParser::BlockContext::getRuleIndex() const {
  return CobraParser::RuleBlock;
}

void CobraParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void CobraParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any CobraParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::BlockContext* CobraParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, CobraParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(163);
        match(CobraParser::T__6);
        setState(167);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 139519329284) != 0)) {
          setState(164);
          statement();
          setState(169);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(170);
        match(CobraParser::T__12);
        setState(171);
        match(CobraParser::T__0);
        break;
      }

      case CobraParser::T__1:
      case CobraParser::T__9:
      case CobraParser::T__13:
      case CobraParser::T__25:
      case CobraParser::T__26:
      case CobraParser::T__27:
      case CobraParser::T__28:
      case CobraParser::T__29:
      case CobraParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(175);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 139519329284) != 0)) {
          setState(172);
          statement();
          setState(177);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(178);
        match(CobraParser::T__13);
        setState(179);
        expression(0);
        setState(180);
        match(CobraParser::T__12);
        setState(181);
        match(CobraParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalContext ------------------------------------------------------------------

CobraParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CobraParser::ConditionalContext::LPAR() {
  return getTokens(CobraParser::LPAR);
}

tree::TerminalNode* CobraParser::ConditionalContext::LPAR(size_t i) {
  return getToken(CobraParser::LPAR, i);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::ConditionalContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::ConditionalContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CobraParser::ConditionalContext::RPAR() {
  return getTokens(CobraParser::RPAR);
}

tree::TerminalNode* CobraParser::ConditionalContext::RPAR(size_t i) {
  return getToken(CobraParser::RPAR, i);
}

std::vector<CobraParser::BlockContext *> CobraParser::ConditionalContext::block() {
  return getRuleContexts<CobraParser::BlockContext>();
}

CobraParser::BlockContext* CobraParser::ConditionalContext::block(size_t i) {
  return getRuleContext<CobraParser::BlockContext>(i);
}


size_t CobraParser::ConditionalContext::getRuleIndex() const {
  return CobraParser::RuleConditional;
}

void CobraParser::ConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional(this);
}

void CobraParser::ConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional(this);
}


std::any CobraParser::ConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitConditional(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ConditionalContext* CobraParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 22, CobraParser::RuleConditional);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(CobraParser::T__14);
    setState(186);
    match(CobraParser::LPAR);
    setState(187);
    expression(0);
    setState(188);
    match(CobraParser::RPAR);
    setState(189);
    block();
    setState(198);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__15) {
      setState(190);
      match(CobraParser::T__15);
      setState(191);
      match(CobraParser::LPAR);
      setState(192);
      expression(0);
      setState(193);
      match(CobraParser::RPAR);
      setState(194);
      block();
      setState(200);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::T__16) {
      setState(201);
      match(CobraParser::T__16);
      setState(202);
      block();
    }
    setState(205);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStructContext ------------------------------------------------------------------

CobraParser::LoopStructContext::LoopStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::LoopStructContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

CobraParser::ExpressionContext* CobraParser::LoopStructContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}

tree::TerminalNode* CobraParser::LoopStructContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

CobraParser::BlockContext* CobraParser::LoopStructContext::block() {
  return getRuleContext<CobraParser::BlockContext>(0);
}


size_t CobraParser::LoopStructContext::getRuleIndex() const {
  return CobraParser::RuleLoopStruct;
}

void CobraParser::LoopStructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStruct(this);
}

void CobraParser::LoopStructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStruct(this);
}


std::any CobraParser::LoopStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitLoopStruct(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::LoopStructContext* CobraParser::loopStruct() {
  LoopStructContext *_localctx = _tracker.createInstance<LoopStructContext>(_ctx, getState());
  enterRule(_localctx, 24, CobraParser::RuleLoopStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(CobraParser::T__17);
    setState(208);
    match(CobraParser::LPAR);
    setState(209);
    expression(0);
    setState(210);
    match(CobraParser::RPAR);
    setState(211);
    block();
    setState(212);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStructContext ------------------------------------------------------------------

CobraParser::RepeatStructContext::RepeatStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::RepeatStructContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::RepeatStructContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::RepeatStructContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

tree::TerminalNode* CobraParser::RepeatStructContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

CobraParser::BlockContext* CobraParser::RepeatStructContext::block() {
  return getRuleContext<CobraParser::BlockContext>(0);
}


size_t CobraParser::RepeatStructContext::getRuleIndex() const {
  return CobraParser::RuleRepeatStruct;
}

void CobraParser::RepeatStructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStruct(this);
}

void CobraParser::RepeatStructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStruct(this);
}


std::any CobraParser::RepeatStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitRepeatStruct(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::RepeatStructContext* CobraParser::repeatStruct() {
  RepeatStructContext *_localctx = _tracker.createInstance<RepeatStructContext>(_ctx, getState());
  enterRule(_localctx, 26, CobraParser::RuleRepeatStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(CobraParser::T__18);
    setState(215);
    match(CobraParser::LPAR);
    setState(216);
    expression(0);
    setState(217);
    match(CobraParser::T__3);
    setState(218);
    expression(0);
    setState(219);
    match(CobraParser::T__3);
    setState(220);
    expression(0);
    setState(221);
    match(CobraParser::RPAR);
    setState(222);
    block();
    setState(223);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WaitLoopContext ------------------------------------------------------------------

CobraParser::WaitLoopContext::WaitLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::WaitLoopContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

tree::TerminalNode* CobraParser::WaitLoopContext::TIME() {
  return getToken(CobraParser::TIME, 0);
}

tree::TerminalNode* CobraParser::WaitLoopContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

CobraParser::BlockContext* CobraParser::WaitLoopContext::block() {
  return getRuleContext<CobraParser::BlockContext>(0);
}


size_t CobraParser::WaitLoopContext::getRuleIndex() const {
  return CobraParser::RuleWaitLoop;
}

void CobraParser::WaitLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWaitLoop(this);
}

void CobraParser::WaitLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWaitLoop(this);
}


std::any CobraParser::WaitLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitWaitLoop(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::WaitLoopContext* CobraParser::waitLoop() {
  WaitLoopContext *_localctx = _tracker.createInstance<WaitLoopContext>(_ctx, getState());
  enterRule(_localctx, 28, CobraParser::RuleWaitLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(CobraParser::T__19);
    setState(226);
    match(CobraParser::LPAR);
    setState(227);
    match(CobraParser::TIME);
    setState(228);
    match(CobraParser::RPAR);
    setState(229);
    block();
    setState(230);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectDeclContext ------------------------------------------------------------------

CobraParser::ObjectDeclContext::ObjectDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::ObjectDeclContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::ObjectDeclContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

CobraParser::ParameterListContext* CobraParser::ObjectDeclContext::parameterList() {
  return getRuleContext<CobraParser::ParameterListContext>(0);
}

tree::TerminalNode* CobraParser::ObjectDeclContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

CobraParser::BlockContext* CobraParser::ObjectDeclContext::block() {
  return getRuleContext<CobraParser::BlockContext>(0);
}


size_t CobraParser::ObjectDeclContext::getRuleIndex() const {
  return CobraParser::RuleObjectDecl;
}

void CobraParser::ObjectDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectDecl(this);
}

void CobraParser::ObjectDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectDecl(this);
}


std::any CobraParser::ObjectDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitObjectDecl(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ObjectDeclContext* CobraParser::objectDecl() {
  ObjectDeclContext *_localctx = _tracker.createInstance<ObjectDeclContext>(_ctx, getState());
  enterRule(_localctx, 30, CobraParser::RuleObjectDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(CobraParser::T__20);
    setState(233);
    match(CobraParser::IDENTIFIER);
    setState(234);
    match(CobraParser::LPAR);
    setState(235);
    parameterList();
    setState(236);
    match(CobraParser::RPAR);
    setState(237);
    block();
    setState(238);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDeclContext ------------------------------------------------------------------

CobraParser::ArrayDeclContext::ArrayDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CobraParser::DataTypeContext* CobraParser::ArrayDeclContext::dataType() {
  return getRuleContext<CobraParser::DataTypeContext>(0);
}

tree::TerminalNode* CobraParser::ArrayDeclContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::ArrayDeclContext::ASSIGN() {
  return getToken(CobraParser::ASSIGN, 0);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::ArrayDeclContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::ArrayDeclContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}


size_t CobraParser::ArrayDeclContext::getRuleIndex() const {
  return CobraParser::RuleArrayDecl;
}

void CobraParser::ArrayDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayDecl(this);
}

void CobraParser::ArrayDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayDecl(this);
}


std::any CobraParser::ArrayDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitArrayDecl(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ArrayDeclContext* CobraParser::arrayDecl() {
  ArrayDeclContext *_localctx = _tracker.createInstance<ArrayDeclContext>(_ctx, getState());
  enterRule(_localctx, 32, CobraParser::RuleArrayDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(CobraParser::T__21);
    setState(241);
    match(CobraParser::T__22);
    setState(242);
    dataType();
    setState(243);
    match(CobraParser::T__23);
    setState(244);
    match(CobraParser::IDENTIFIER);
    setState(245);
    match(CobraParser::ASSIGN);
    setState(246);
    match(CobraParser::T__4);
    setState(247);
    expression(0);
    setState(252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(248);
      match(CobraParser::T__3);
      setState(249);
      expression(0);
      setState(254);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(255);
    match(CobraParser::T__5);
    setState(256);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixDeclContext ------------------------------------------------------------------

CobraParser::MatrixDeclContext::MatrixDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CobraParser::DataTypeContext* CobraParser::MatrixDeclContext::dataType() {
  return getRuleContext<CobraParser::DataTypeContext>(0);
}

tree::TerminalNode* CobraParser::MatrixDeclContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::MatrixDeclContext::ASSIGN() {
  return getToken(CobraParser::ASSIGN, 0);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::MatrixDeclContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::MatrixDeclContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}


size_t CobraParser::MatrixDeclContext::getRuleIndex() const {
  return CobraParser::RuleMatrixDecl;
}

void CobraParser::MatrixDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixDecl(this);
}

void CobraParser::MatrixDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixDecl(this);
}


std::any CobraParser::MatrixDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitMatrixDecl(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::MatrixDeclContext* CobraParser::matrixDecl() {
  MatrixDeclContext *_localctx = _tracker.createInstance<MatrixDeclContext>(_ctx, getState());
  enterRule(_localctx, 34, CobraParser::RuleMatrixDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(CobraParser::T__24);
    setState(259);
    match(CobraParser::T__22);
    setState(260);
    dataType();
    setState(261);
    match(CobraParser::T__23);
    setState(262);
    match(CobraParser::IDENTIFIER);
    setState(263);
    match(CobraParser::ASSIGN);
    setState(264);
    match(CobraParser::T__4);
    setState(265);
    match(CobraParser::T__4);
    setState(266);
    expression(0);
    setState(271);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(267);
      match(CobraParser::T__3);
      setState(268);
      expression(0);
      setState(273);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(274);
    match(CobraParser::T__5);
    setState(289);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(275);
      match(CobraParser::T__3);
      setState(276);
      match(CobraParser::T__4);
      setState(277);
      expression(0);
      setState(282);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CobraParser::T__3) {
        setState(278);
        match(CobraParser::T__3);
        setState(279);
        expression(0);
        setState(284);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(285);
      match(CobraParser::T__5);
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(292);
    match(CobraParser::T__5);
    setState(293);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

CobraParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CobraParser::DataTypeContext *> CobraParser::ParameterListContext::dataType() {
  return getRuleContexts<CobraParser::DataTypeContext>();
}

CobraParser::DataTypeContext* CobraParser::ParameterListContext::dataType(size_t i) {
  return getRuleContext<CobraParser::DataTypeContext>(i);
}

std::vector<tree::TerminalNode *> CobraParser::ParameterListContext::IDENTIFIER() {
  return getTokens(CobraParser::IDENTIFIER);
}

tree::TerminalNode* CobraParser::ParameterListContext::IDENTIFIER(size_t i) {
  return getToken(CobraParser::IDENTIFIER, i);
}


size_t CobraParser::ParameterListContext::getRuleIndex() const {
  return CobraParser::RuleParameterList;
}

void CobraParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void CobraParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


std::any CobraParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ParameterListContext* CobraParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 36, CobraParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    dataType();
    setState(296);
    match(CobraParser::IDENTIFIER);
    setState(303);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(297);
      match(CobraParser::T__3);
      setState(298);
      dataType();
      setState(299);
      match(CobraParser::IDENTIFIER);
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

CobraParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CobraParser::DataTypeContext::getRuleIndex() const {
  return CobraParser::RuleDataType;
}

void CobraParser::DataTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataType(this);
}

void CobraParser::DataTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataType(this);
}


std::any CobraParser::DataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitDataType(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::DataTypeContext* CobraParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 38, CobraParser::RuleDataType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2080374784) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CobraParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CobraParser::ExpressionContext::getRuleIndex() const {
  return CobraParser::RuleExpression;
}

void CobraParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::ParenContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

CobraParser::ExpressionContext* CobraParser::ParenContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}

tree::TerminalNode* CobraParser::ParenContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

CobraParser::ParenContext::ParenContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::ParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParen(this);
}
void CobraParser::ParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParen(this);
}

std::any CobraParser::ParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubsumContext ------------------------------------------------------------------

std::vector<CobraParser::ExpressionContext *> CobraParser::SubsumContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::SubsumContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

tree::TerminalNode* CobraParser::SubsumContext::ADD() {
  return getToken(CobraParser::ADD, 0);
}

tree::TerminalNode* CobraParser::SubsumContext::SUB() {
  return getToken(CobraParser::SUB, 0);
}

CobraParser::SubsumContext::SubsumContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::SubsumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubsum(this);
}
void CobraParser::SubsumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubsum(this);
}

std::any CobraParser::SubsumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitSubsum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerContext ------------------------------------------------------------------

std::vector<CobraParser::ExpressionContext *> CobraParser::PowerContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::PowerContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

tree::TerminalNode* CobraParser::PowerContext::POW() {
  return getToken(CobraParser::POW, 0);
}

CobraParser::PowerContext::PowerContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::PowerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPower(this);
}
void CobraParser::PowerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPower(this);
}

std::any CobraParser::PowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitPower(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LitExpContext ------------------------------------------------------------------

CobraParser::LiteralContext* CobraParser::LitExpContext::literal() {
  return getRuleContext<CobraParser::LiteralContext>(0);
}

CobraParser::LitExpContext::LitExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::LitExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLitExp(this);
}
void CobraParser::LitExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLitExp(this);
}

std::any CobraParser::LitExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitLitExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MuldivContext ------------------------------------------------------------------

std::vector<CobraParser::ExpressionContext *> CobraParser::MuldivContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::MuldivContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

tree::TerminalNode* CobraParser::MuldivContext::MUL() {
  return getToken(CobraParser::MUL, 0);
}

tree::TerminalNode* CobraParser::MuldivContext::DIV() {
  return getToken(CobraParser::DIV, 0);
}

CobraParser::MuldivContext::MuldivContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::MuldivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMuldiv(this);
}
void CobraParser::MuldivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMuldiv(this);
}

std::any CobraParser::MuldivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitMuldiv(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ExpressionContext* CobraParser::expression() {
   return expression(0);
}

CobraParser::ExpressionContext* CobraParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CobraParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CobraParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, CobraParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::LPAR: {
        _localctx = _tracker.createInstance<ParenContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(309);
        match(CobraParser::LPAR);
        setState(310);
        expression(0);
        setState(311);
        match(CobraParser::RPAR);
        break;
      }

      case CobraParser::BOOLEAN:
      case CobraParser::INTEGER:
      case CobraParser::DECIMAL:
      case CobraParser::CHARACTER:
      case CobraParser::TEXT:
      case CobraParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<LitExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(313);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(327);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(325);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(316);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(317);
          match(CobraParser::POW);
          setState(318);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(319);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(320);
          antlrcpp::downCast<MuldivContext *>(_localctx)->operator_ = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CobraParser::MUL

          || _la == CobraParser::DIV)) {
            antlrcpp::downCast<MuldivContext *>(_localctx)->operator_ = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(321);
          expression(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SubsumContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(322);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(323);
          antlrcpp::downCast<SubsumContext *>(_localctx)->operator_ = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CobraParser::ADD

          || _la == CobraParser::SUB)) {
            antlrcpp::downCast<SubsumContext *>(_localctx)->operator_ = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(324);
          expression(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(329);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

CobraParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CobraParser::LiteralContext::getRuleIndex() const {
  return CobraParser::RuleLiteral;
}

void CobraParser::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::StringLiteralContext::TEXT() {
  return getToken(CobraParser::TEXT, 0);
}

CobraParser::StringLiteralContext::StringLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void CobraParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}
void CobraParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}

std::any CobraParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::IntLiteralContext::INTEGER() {
  return getToken(CobraParser::INTEGER, 0);
}

CobraParser::IntLiteralContext::IntLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void CobraParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}
void CobraParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}

std::any CobraParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::FloatLiteralContext::DECIMAL() {
  return getToken(CobraParser::DECIMAL, 0);
}

CobraParser::FloatLiteralContext::FloatLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void CobraParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}
void CobraParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}

std::any CobraParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::CharLiteralContext::CHARACTER() {
  return getToken(CobraParser::CHARACTER, 0);
}

CobraParser::CharLiteralContext::CharLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void CobraParser::CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharLiteral(this);
}
void CobraParser::CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharLiteral(this);
}

std::any CobraParser::CharLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitCharLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::IdentifierLiteralContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

CobraParser::IdentifierLiteralContext::IdentifierLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void CobraParser::IdentifierLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierLiteral(this);
}
void CobraParser::IdentifierLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierLiteral(this);
}

std::any CobraParser::IdentifierLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitIdentifierLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLiteralContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::BoolLiteralContext::BOOLEAN() {
  return getToken(CobraParser::BOOLEAN, 0);
}

CobraParser::BoolLiteralContext::BoolLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void CobraParser::BoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLiteral(this);
}
void CobraParser::BoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLiteral(this);
}

std::any CobraParser::BoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitBoolLiteral(this);
  else
    return visitor->visitChildren(this);
}
CobraParser::LiteralContext* CobraParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 42, CobraParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::INTEGER: {
        _localctx = _tracker.createInstance<CobraParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(330);
        match(CobraParser::INTEGER);
        break;
      }

      case CobraParser::DECIMAL: {
        _localctx = _tracker.createInstance<CobraParser::FloatLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(331);
        match(CobraParser::DECIMAL);
        break;
      }

      case CobraParser::CHARACTER: {
        _localctx = _tracker.createInstance<CobraParser::CharLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(332);
        match(CobraParser::CHARACTER);
        break;
      }

      case CobraParser::TEXT: {
        _localctx = _tracker.createInstance<CobraParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(333);
        match(CobraParser::TEXT);
        break;
      }

      case CobraParser::BOOLEAN: {
        _localctx = _tracker.createInstance<CobraParser::BoolLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(334);
        match(CobraParser::BOOLEAN);
        break;
      }

      case CobraParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<CobraParser::IdentifierLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(335);
        match(CobraParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CobraParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 20: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CobraParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void CobraParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cobraParserInitialize();
#else
  ::antlr4::internal::call_once(cobraParserOnceFlag, cobraParserInitialize);
#endif
}

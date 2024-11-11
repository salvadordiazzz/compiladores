
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
      "functionDef", "block", "returnBlock", "conditional", "loopStruct", 
      "repeatStruct", "waitLoop", "objectDecl", "arrayDecl", "matrixDecl", 
      "parameterList", "dataType", "expression", "literal"
    },
    std::vector<std::string>{
      "", "';'", "'auto'", "'scale'", "','", "'['", "']'", "'{'", "':'", 
      "'}'", "'show'", "'ask'", "'function'", "'return'", "'when'", "'otherwiseWhen'", 
      "'otherwise'", "'repeatUntil'", "'countFrom'", "'pauseThen'", "'entity'", 
      "'array'", "'<'", "'>'", "'matrix'", "'number'", "'decimal'", "'letter'", 
      "'string'", "'flag'", "", "", "", "", "", "", "", "", "", "'='", "'('", 
      "')'", "'+'", "'-'", "'*'", "'/'", "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "TIME", "BOOLEAN", 
      "INTEGER", "DECIMAL", "CHARACTER", "TEXT", "IDENTIFIER", "WS", "COMMENT", 
      "ASSIGN", "LPAR", "RPAR", "ADD", "SUB", "MUL", "DIV", "POW"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,46,352,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,57,8,0,10,0,
  	12,0,60,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,69,8,1,1,2,1,2,1,2,1,2,3,
  	2,75,8,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,83,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,102,8,5,10,5,12,5,105,9,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,117,8,5,10,5,12,5,120,9,
  	5,1,5,1,5,3,5,124,8,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,3,7,136,
  	8,7,1,7,1,7,1,7,1,7,3,7,142,8,7,5,7,144,8,7,10,7,12,7,147,9,7,1,7,1,7,
  	1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,166,8,
  	9,10,9,12,9,169,9,9,3,9,171,8,9,1,9,1,9,1,9,3,9,176,8,9,1,10,1,10,5,10,
  	180,8,10,10,10,12,10,183,9,10,1,10,1,10,1,11,1,11,5,11,189,8,11,10,11,
  	12,11,192,9,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,5,12,210,8,12,10,12,12,12,213,9,12,1,12,1,12,
  	3,12,217,8,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,5,17,264,8,17,10,17,12,17,267,9,17,1,17,
  	1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,
  	283,8,18,10,18,12,18,286,9,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,294,
  	8,18,10,18,12,18,297,9,18,1,18,1,18,5,18,301,8,18,10,18,12,18,304,9,18,
  	1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,5,19,315,8,19,10,19,12,19,
  	318,9,19,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,3,21,328,8,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,339,8,21,10,21,12,21,342,9,
  	21,1,22,1,22,1,22,1,22,1,22,1,22,3,22,350,8,22,1,22,0,1,42,23,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,0,3,1,0,25,29,
  	1,0,44,45,1,0,42,43,373,0,58,1,0,0,0,2,68,1,0,0,0,4,70,1,0,0,0,6,78,1,
  	0,0,0,8,86,1,0,0,0,10,123,1,0,0,0,12,125,1,0,0,0,14,130,1,0,0,0,16,151,
  	1,0,0,0,18,159,1,0,0,0,20,177,1,0,0,0,22,186,1,0,0,0,24,198,1,0,0,0,26,
  	220,1,0,0,0,28,227,1,0,0,0,30,238,1,0,0,0,32,245,1,0,0,0,34,253,1,0,0,
  	0,36,271,1,0,0,0,38,308,1,0,0,0,40,319,1,0,0,0,42,327,1,0,0,0,44,349,
  	1,0,0,0,46,57,3,2,1,0,47,57,3,18,9,0,48,57,3,26,13,0,49,57,3,28,14,0,
  	50,57,3,24,12,0,51,57,3,32,16,0,52,57,3,34,17,0,53,57,3,36,18,0,54,57,
  	3,30,15,0,55,57,3,8,4,0,56,46,1,0,0,0,56,47,1,0,0,0,56,48,1,0,0,0,56,
  	49,1,0,0,0,56,50,1,0,0,0,56,51,1,0,0,0,56,52,1,0,0,0,56,53,1,0,0,0,56,
  	54,1,0,0,0,56,55,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,
  	61,1,0,0,0,60,58,1,0,0,0,61,62,5,0,0,1,62,1,1,0,0,0,63,69,3,4,2,0,64,
  	69,3,6,3,0,65,69,3,12,6,0,66,69,3,14,7,0,67,69,3,16,8,0,68,63,1,0,0,0,
  	68,64,1,0,0,0,68,65,1,0,0,0,68,66,1,0,0,0,68,67,1,0,0,0,69,3,1,0,0,0,
  	70,71,3,40,20,0,71,74,5,36,0,0,72,73,5,39,0,0,73,75,3,42,21,0,74,72,1,
  	0,0,0,74,75,1,0,0,0,75,76,1,0,0,0,76,77,5,1,0,0,77,5,1,0,0,0,78,79,5,
  	2,0,0,79,82,5,36,0,0,80,81,5,39,0,0,81,83,3,42,21,0,82,80,1,0,0,0,82,
  	83,1,0,0,0,83,84,1,0,0,0,84,85,5,1,0,0,85,7,1,0,0,0,86,87,5,2,0,0,87,
  	88,5,36,0,0,88,89,5,39,0,0,89,90,5,3,0,0,90,91,5,40,0,0,91,92,3,42,21,
  	0,92,93,5,4,0,0,93,94,3,42,21,0,94,95,5,41,0,0,95,96,5,1,0,0,96,9,1,0,
  	0,0,97,98,5,5,0,0,98,103,3,42,21,0,99,100,5,4,0,0,100,102,3,42,21,0,101,
  	99,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,106,1,
  	0,0,0,105,103,1,0,0,0,106,107,5,6,0,0,107,124,1,0,0,0,108,109,5,7,0,0,
  	109,110,5,35,0,0,110,111,5,8,0,0,111,118,3,42,21,0,112,113,5,4,0,0,113,
  	114,5,35,0,0,114,115,5,8,0,0,115,117,3,42,21,0,116,112,1,0,0,0,117,120,
  	1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,121,1,0,0,0,120,118,1,0,0,
  	0,121,122,5,9,0,0,122,124,1,0,0,0,123,97,1,0,0,0,123,108,1,0,0,0,124,
  	11,1,0,0,0,125,126,5,36,0,0,126,127,5,39,0,0,127,128,3,42,21,0,128,129,
  	5,1,0,0,129,13,1,0,0,0,130,131,5,10,0,0,131,135,5,40,0,0,132,136,5,35,
  	0,0,133,136,5,36,0,0,134,136,3,42,21,0,135,132,1,0,0,0,135,133,1,0,0,
  	0,135,134,1,0,0,0,136,145,1,0,0,0,137,141,5,4,0,0,138,142,5,35,0,0,139,
  	142,5,36,0,0,140,142,3,42,21,0,141,138,1,0,0,0,141,139,1,0,0,0,141,140,
  	1,0,0,0,142,144,1,0,0,0,143,137,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,
  	0,145,146,1,0,0,0,146,148,1,0,0,0,147,145,1,0,0,0,148,149,5,41,0,0,149,
  	150,5,1,0,0,150,15,1,0,0,0,151,152,5,36,0,0,152,153,5,39,0,0,153,154,
  	5,11,0,0,154,155,5,40,0,0,155,156,5,35,0,0,156,157,5,41,0,0,157,158,5,
  	1,0,0,158,17,1,0,0,0,159,160,5,12,0,0,160,161,5,36,0,0,161,170,5,40,0,
  	0,162,167,5,36,0,0,163,164,5,4,0,0,164,166,5,36,0,0,165,163,1,0,0,0,166,
  	169,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,171,1,0,0,0,169,167,1,
  	0,0,0,170,162,1,0,0,0,170,171,1,0,0,0,171,172,1,0,0,0,172,175,5,41,0,
  	0,173,176,3,20,10,0,174,176,3,22,11,0,175,173,1,0,0,0,175,174,1,0,0,0,
  	176,19,1,0,0,0,177,181,5,7,0,0,178,180,3,2,1,0,179,178,1,0,0,0,180,183,
  	1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,184,1,0,0,0,183,181,1,0,0,
  	0,184,185,5,9,0,0,185,21,1,0,0,0,186,190,5,7,0,0,187,189,3,2,1,0,188,
  	187,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,193,1,
  	0,0,0,192,190,1,0,0,0,193,194,5,13,0,0,194,195,3,42,21,0,195,196,5,1,
  	0,0,196,197,5,9,0,0,197,23,1,0,0,0,198,199,5,14,0,0,199,200,5,40,0,0,
  	200,201,3,42,21,0,201,202,5,41,0,0,202,211,3,20,10,0,203,204,5,15,0,0,
  	204,205,5,40,0,0,205,206,3,42,21,0,206,207,5,41,0,0,207,208,3,20,10,0,
  	208,210,1,0,0,0,209,203,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,212,
  	1,0,0,0,212,216,1,0,0,0,213,211,1,0,0,0,214,215,5,16,0,0,215,217,3,20,
  	10,0,216,214,1,0,0,0,216,217,1,0,0,0,217,218,1,0,0,0,218,219,5,1,0,0,
  	219,25,1,0,0,0,220,221,5,17,0,0,221,222,5,40,0,0,222,223,3,42,21,0,223,
  	224,5,41,0,0,224,225,3,20,10,0,225,226,5,1,0,0,226,27,1,0,0,0,227,228,
  	5,18,0,0,228,229,5,40,0,0,229,230,3,42,21,0,230,231,5,4,0,0,231,232,3,
  	42,21,0,232,233,5,4,0,0,233,234,3,42,21,0,234,235,5,41,0,0,235,236,3,
  	20,10,0,236,237,5,1,0,0,237,29,1,0,0,0,238,239,5,19,0,0,239,240,5,40,
  	0,0,240,241,5,30,0,0,241,242,5,41,0,0,242,243,3,20,10,0,243,244,5,1,0,
  	0,244,31,1,0,0,0,245,246,5,20,0,0,246,247,5,36,0,0,247,248,5,40,0,0,248,
  	249,3,38,19,0,249,250,5,41,0,0,250,251,3,20,10,0,251,252,5,1,0,0,252,
  	33,1,0,0,0,253,254,5,21,0,0,254,255,5,22,0,0,255,256,3,40,20,0,256,257,
  	5,23,0,0,257,258,5,36,0,0,258,259,5,39,0,0,259,260,5,5,0,0,260,265,3,
  	42,21,0,261,262,5,4,0,0,262,264,3,42,21,0,263,261,1,0,0,0,264,267,1,0,
  	0,0,265,263,1,0,0,0,265,266,1,0,0,0,266,268,1,0,0,0,267,265,1,0,0,0,268,
  	269,5,6,0,0,269,270,5,1,0,0,270,35,1,0,0,0,271,272,5,24,0,0,272,273,5,
  	22,0,0,273,274,3,40,20,0,274,275,5,23,0,0,275,276,5,36,0,0,276,277,5,
  	39,0,0,277,278,5,5,0,0,278,279,5,5,0,0,279,284,3,42,21,0,280,281,5,4,
  	0,0,281,283,3,42,21,0,282,280,1,0,0,0,283,286,1,0,0,0,284,282,1,0,0,0,
  	284,285,1,0,0,0,285,287,1,0,0,0,286,284,1,0,0,0,287,302,5,6,0,0,288,289,
  	5,4,0,0,289,290,5,5,0,0,290,295,3,42,21,0,291,292,5,4,0,0,292,294,3,42,
  	21,0,293,291,1,0,0,0,294,297,1,0,0,0,295,293,1,0,0,0,295,296,1,0,0,0,
  	296,298,1,0,0,0,297,295,1,0,0,0,298,299,5,6,0,0,299,301,1,0,0,0,300,288,
  	1,0,0,0,301,304,1,0,0,0,302,300,1,0,0,0,302,303,1,0,0,0,303,305,1,0,0,
  	0,304,302,1,0,0,0,305,306,5,6,0,0,306,307,5,1,0,0,307,37,1,0,0,0,308,
  	309,3,40,20,0,309,316,5,36,0,0,310,311,5,4,0,0,311,312,3,40,20,0,312,
  	313,5,36,0,0,313,315,1,0,0,0,314,310,1,0,0,0,315,318,1,0,0,0,316,314,
  	1,0,0,0,316,317,1,0,0,0,317,39,1,0,0,0,318,316,1,0,0,0,319,320,7,0,0,
  	0,320,41,1,0,0,0,321,322,6,21,-1,0,322,323,5,40,0,0,323,324,3,42,21,0,
  	324,325,5,41,0,0,325,328,1,0,0,0,326,328,3,44,22,0,327,321,1,0,0,0,327,
  	326,1,0,0,0,328,340,1,0,0,0,329,330,10,4,0,0,330,331,5,46,0,0,331,339,
  	3,42,21,5,332,333,10,3,0,0,333,334,7,1,0,0,334,339,3,42,21,4,335,336,
  	10,2,0,0,336,337,7,2,0,0,337,339,3,42,21,3,338,329,1,0,0,0,338,332,1,
  	0,0,0,338,335,1,0,0,0,339,342,1,0,0,0,340,338,1,0,0,0,340,341,1,0,0,0,
  	341,43,1,0,0,0,342,340,1,0,0,0,343,350,5,32,0,0,344,350,5,33,0,0,345,
  	350,5,34,0,0,346,350,5,35,0,0,347,350,5,31,0,0,348,350,5,36,0,0,349,343,
  	1,0,0,0,349,344,1,0,0,0,349,345,1,0,0,0,349,346,1,0,0,0,349,347,1,0,0,
  	0,349,348,1,0,0,0,350,45,1,0,0,0,27,56,58,68,74,82,103,118,123,135,141,
  	145,167,170,175,181,190,211,216,265,284,295,302,316,327,338,340,349
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
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69780526084) != 0)) {
      setState(56);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(46);
        statement();
        break;
      }

      case 2: {
        setState(47);
        functionDef();
        break;
      }

      case 3: {
        setState(48);
        loopStruct();
        break;
      }

      case 4: {
        setState(49);
        repeatStruct();
        break;
      }

      case 5: {
        setState(50);
        conditional();
        break;
      }

      case 6: {
        setState(51);
        objectDecl();
        break;
      }

      case 7: {
        setState(52);
        arrayDecl();
        break;
      }

      case 8: {
        setState(53);
        matrixDecl();
        break;
      }

      case 9: {
        setState(54);
        waitLoop();
        break;
      }

      case 10: {
        setState(55);
        rangeDeclaration();
        break;
      }

      default:
        break;
      }
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
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
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(63);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(64);
      inferredVarDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(65);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(66);
      display();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(67);
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
    setState(70);
    dataType();
    setState(71);
    match(CobraParser::IDENTIFIER);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::ASSIGN) {
      setState(72);
      match(CobraParser::ASSIGN);
      setState(73);
      expression(0);
    }
    setState(76);
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
    setState(78);
    match(CobraParser::T__1);
    setState(79);
    match(CobraParser::IDENTIFIER);
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::ASSIGN) {
      setState(80);
      match(CobraParser::ASSIGN);
      setState(81);
      expression(0);
    }
    setState(84);
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
    setState(86);
    match(CobraParser::T__1);
    setState(87);
    match(CobraParser::IDENTIFIER);
    setState(88);
    match(CobraParser::ASSIGN);
    setState(89);
    match(CobraParser::T__2);
    setState(90);
    match(CobraParser::LPAR);
    setState(91);
    expression(0);
    setState(92);
    match(CobraParser::T__3);
    setState(93);
    expression(0);
    setState(94);
    match(CobraParser::RPAR);
    setState(95);
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
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::T__4: {
        _localctx = _tracker.createInstance<CobraParser::ListCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(97);
        match(CobraParser::T__4);
        setState(98);
        expression(0);
        setState(103);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(99);
          match(CobraParser::T__3);
          setState(100);
          expression(0);
          setState(105);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(106);
        match(CobraParser::T__5);
        break;
      }

      case CobraParser::T__6: {
        _localctx = _tracker.createInstance<CobraParser::DictCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(108);
        match(CobraParser::T__6);
        setState(109);
        match(CobraParser::TEXT);
        setState(110);
        match(CobraParser::T__7);
        setState(111);
        expression(0);
        setState(118);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(112);
          match(CobraParser::T__3);
          setState(113);
          match(CobraParser::TEXT);
          setState(114);
          match(CobraParser::T__7);
          setState(115);
          expression(0);
          setState(120);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(121);
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
    setState(125);
    match(CobraParser::IDENTIFIER);
    setState(126);
    match(CobraParser::ASSIGN);
    setState(127);
    expression(0);
    setState(128);
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
    setState(130);
    match(CobraParser::T__9);
    setState(131);
    match(CobraParser::LPAR);
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(132);
      match(CobraParser::TEXT);
      break;
    }

    case 2: {
      setState(133);
      match(CobraParser::IDENTIFIER);
      break;
    }

    case 3: {
      setState(134);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(137);
      match(CobraParser::T__3);
      setState(141);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(138);
        match(CobraParser::TEXT);
        break;
      }

      case 2: {
        setState(139);
        match(CobraParser::IDENTIFIER);
        break;
      }

      case 3: {
        setState(140);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
    match(CobraParser::RPAR);
    setState(149);
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
    setState(151);
    match(CobraParser::IDENTIFIER);
    setState(152);
    match(CobraParser::ASSIGN);
    setState(153);
    match(CobraParser::T__10);
    setState(154);
    match(CobraParser::LPAR);
    setState(155);
    match(CobraParser::TEXT);
    setState(156);
    match(CobraParser::RPAR);
    setState(157);
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

std::vector<tree::TerminalNode *> CobraParser::FunctionDefContext::IDENTIFIER() {
  return getTokens(CobraParser::IDENTIFIER);
}

tree::TerminalNode* CobraParser::FunctionDefContext::IDENTIFIER(size_t i) {
  return getToken(CobraParser::IDENTIFIER, i);
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

CobraParser::ReturnBlockContext* CobraParser::FunctionDefContext::returnBlock() {
  return getRuleContext<CobraParser::ReturnBlockContext>(0);
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
    setState(159);
    match(CobraParser::T__11);
    setState(160);
    match(CobraParser::IDENTIFIER);
    setState(161);
    match(CobraParser::LPAR);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::IDENTIFIER) {
      setState(162);
      match(CobraParser::IDENTIFIER);
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CobraParser::T__3) {
        setState(163);
        match(CobraParser::T__3);
        setState(164);
        match(CobraParser::IDENTIFIER);
        setState(169);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(172);
    match(CobraParser::RPAR);
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(173);
      block();
      break;
    }

    case 2: {
      setState(174);
      returnBlock();
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
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(CobraParser::T__6);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69759665156) != 0)) {
      setState(178);
      statement();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(CobraParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnBlockContext ------------------------------------------------------------------

CobraParser::ReturnBlockContext::ReturnBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CobraParser::ExpressionContext* CobraParser::ReturnBlockContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}

std::vector<CobraParser::StatementContext *> CobraParser::ReturnBlockContext::statement() {
  return getRuleContexts<CobraParser::StatementContext>();
}

CobraParser::StatementContext* CobraParser::ReturnBlockContext::statement(size_t i) {
  return getRuleContext<CobraParser::StatementContext>(i);
}


size_t CobraParser::ReturnBlockContext::getRuleIndex() const {
  return CobraParser::RuleReturnBlock;
}

void CobraParser::ReturnBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnBlock(this);
}

void CobraParser::ReturnBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnBlock(this);
}


std::any CobraParser::ReturnBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitReturnBlock(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ReturnBlockContext* CobraParser::returnBlock() {
  ReturnBlockContext *_localctx = _tracker.createInstance<ReturnBlockContext>(_ctx, getState());
  enterRule(_localctx, 22, CobraParser::RuleReturnBlock);
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
    setState(186);
    match(CobraParser::T__6);
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69759665156) != 0)) {
      setState(187);
      statement();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(193);
    match(CobraParser::T__12);
    setState(194);
    expression(0);
    setState(195);
    match(CobraParser::T__0);
    setState(196);
    match(CobraParser::T__8);
   
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
  enterRule(_localctx, 24, CobraParser::RuleConditional);
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
    setState(198);
    match(CobraParser::T__13);
    setState(199);
    match(CobraParser::LPAR);
    setState(200);
    expression(0);
    setState(201);
    match(CobraParser::RPAR);
    setState(202);
    block();
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__14) {
      setState(203);
      match(CobraParser::T__14);
      setState(204);
      match(CobraParser::LPAR);
      setState(205);
      expression(0);
      setState(206);
      match(CobraParser::RPAR);
      setState(207);
      block();
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::T__15) {
      setState(214);
      match(CobraParser::T__15);
      setState(215);
      block();
    }
    setState(218);
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
  enterRule(_localctx, 26, CobraParser::RuleLoopStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(CobraParser::T__16);
    setState(221);
    match(CobraParser::LPAR);
    setState(222);
    expression(0);
    setState(223);
    match(CobraParser::RPAR);
    setState(224);
    block();
    setState(225);
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
  enterRule(_localctx, 28, CobraParser::RuleRepeatStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(CobraParser::T__17);
    setState(228);
    match(CobraParser::LPAR);
    setState(229);
    expression(0);
    setState(230);
    match(CobraParser::T__3);
    setState(231);
    expression(0);
    setState(232);
    match(CobraParser::T__3);
    setState(233);
    expression(0);
    setState(234);
    match(CobraParser::RPAR);
    setState(235);
    block();
    setState(236);
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
  enterRule(_localctx, 30, CobraParser::RuleWaitLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(CobraParser::T__18);
    setState(239);
    match(CobraParser::LPAR);
    setState(240);
    match(CobraParser::TIME);
    setState(241);
    match(CobraParser::RPAR);
    setState(242);
    block();
    setState(243);
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
  enterRule(_localctx, 32, CobraParser::RuleObjectDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(CobraParser::T__19);
    setState(246);
    match(CobraParser::IDENTIFIER);
    setState(247);
    match(CobraParser::LPAR);
    setState(248);
    parameterList();
    setState(249);
    match(CobraParser::RPAR);
    setState(250);
    block();
    setState(251);
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
  enterRule(_localctx, 34, CobraParser::RuleArrayDecl);
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
    setState(253);
    match(CobraParser::T__20);
    setState(254);
    match(CobraParser::T__21);
    setState(255);
    dataType();
    setState(256);
    match(CobraParser::T__22);
    setState(257);
    match(CobraParser::IDENTIFIER);
    setState(258);
    match(CobraParser::ASSIGN);
    setState(259);
    match(CobraParser::T__4);
    setState(260);
    expression(0);
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(261);
      match(CobraParser::T__3);
      setState(262);
      expression(0);
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(268);
    match(CobraParser::T__5);
    setState(269);
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
  enterRule(_localctx, 36, CobraParser::RuleMatrixDecl);
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
    setState(271);
    match(CobraParser::T__23);
    setState(272);
    match(CobraParser::T__21);
    setState(273);
    dataType();
    setState(274);
    match(CobraParser::T__22);
    setState(275);
    match(CobraParser::IDENTIFIER);
    setState(276);
    match(CobraParser::ASSIGN);
    setState(277);
    match(CobraParser::T__4);
    setState(278);
    match(CobraParser::T__4);
    setState(279);
    expression(0);
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(280);
      match(CobraParser::T__3);
      setState(281);
      expression(0);
      setState(286);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(287);
    match(CobraParser::T__5);
    setState(302);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(288);
      match(CobraParser::T__3);
      setState(289);
      match(CobraParser::T__4);
      setState(290);
      expression(0);
      setState(295);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CobraParser::T__3) {
        setState(291);
        match(CobraParser::T__3);
        setState(292);
        expression(0);
        setState(297);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(298);
      match(CobraParser::T__5);
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(305);
    match(CobraParser::T__5);
    setState(306);
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
  enterRule(_localctx, 38, CobraParser::RuleParameterList);
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
    setState(308);
    dataType();
    setState(309);
    match(CobraParser::IDENTIFIER);
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(310);
      match(CobraParser::T__3);
      setState(311);
      dataType();
      setState(312);
      match(CobraParser::IDENTIFIER);
      setState(318);
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
  enterRule(_localctx, 40, CobraParser::RuleDataType);
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
    setState(319);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1040187392) != 0))) {
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
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, CobraParser::RuleExpression, precedence);

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
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::LPAR: {
        _localctx = _tracker.createInstance<ParenContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(322);
        match(CobraParser::LPAR);
        setState(323);
        expression(0);
        setState(324);
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
        setState(326);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(340);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(338);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(329);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(330);
          match(CobraParser::POW);
          setState(331);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(332);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(333);
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
          setState(334);
          expression(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SubsumContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(335);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(336);
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
          setState(337);
          expression(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(342);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
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
  enterRule(_localctx, 44, CobraParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(349);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::INTEGER: {
        _localctx = _tracker.createInstance<CobraParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(343);
        match(CobraParser::INTEGER);
        break;
      }

      case CobraParser::DECIMAL: {
        _localctx = _tracker.createInstance<CobraParser::FloatLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(344);
        match(CobraParser::DECIMAL);
        break;
      }

      case CobraParser::CHARACTER: {
        _localctx = _tracker.createInstance<CobraParser::CharLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(345);
        match(CobraParser::CHARACTER);
        break;
      }

      case CobraParser::TEXT: {
        _localctx = _tracker.createInstance<CobraParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(346);
        match(CobraParser::TEXT);
        break;
      }

      case CobraParser::BOOLEAN: {
        _localctx = _tracker.createInstance<CobraParser::BoolLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(347);
        match(CobraParser::BOOLEAN);
        break;
      }

      case CobraParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<CobraParser::IdentifierLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(348);
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
    case 21: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

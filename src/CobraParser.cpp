
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
      "functionDef", "block", "returnBlock", "conditional", "comparisonOperator", 
      "loopStruct", "repeatStruct", "waitLoop", "objectDecl", "arrayDecl", 
      "matrixDecl", "parameterList", "dataType", "expression", "literal"
    },
    std::vector<std::string>{
      "", "';'", "'auto'", "'scale'", "','", "'['", "']'", "'{'", "':'", 
      "'}'", "'show'", "'ask'", "'function'", "'return'", "'<'", "'<='", 
      "'>'", "'>='", "'=='", "'!='", "'repeatWhile'", "'countFrom'", "'pause'", 
      "'entity'", "'array'", "'matrix'", "'number'", "'decimal'", "'letter'", 
      "'string'", "'flag'", "'when'", "'otherwiseWhen'", "'otherwise'", 
      "", "", "", "", "", "", "", "", "", "'='", "'('", "')'", "'+'", "'-'", 
      "'*'", "'/'", "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "WHEN", "OTHERWISEWHEN", 
      "OTHERWISE", "TIME", "BOOLEAN", "INTEGER", "DECIMAL", "CHARACTER", 
      "TEXT", "IDENTIFIER", "WS", "COMMENT", "ASSIGN", "LPAR", "RPAR", "ADD", 
      "SUB", "MUL", "DIV", "POW"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,50,379,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,5,0,50,8,0,10,0,12,0,53,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,70,8,1,1,2,1,2,1,2,
  	1,2,3,2,76,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,101,8,5,10,5,12,5,104,9,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,116,8,5,10,5,12,5,119,9,5,1,
  	5,1,5,3,5,123,8,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,3,7,135,8,7,
  	1,7,1,7,1,7,1,7,3,7,141,8,7,5,7,143,8,7,10,7,12,7,146,9,7,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,167,
  	8,9,10,9,12,9,170,9,9,3,9,172,8,9,1,9,1,9,1,9,3,9,177,8,9,1,10,1,10,5,
  	10,181,8,10,10,10,12,10,184,9,10,1,10,1,10,1,11,1,11,5,11,190,8,11,10,
  	11,12,11,193,9,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,215,8,12,10,12,12,
  	12,218,9,12,1,12,1,12,3,12,222,8,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	5,18,273,8,18,10,18,12,18,276,9,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,19,292,8,19,10,19,12,19,295,9,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,5,19,303,8,19,10,19,12,19,306,9,19,1,19,
  	1,19,5,19,310,8,19,10,19,12,19,313,9,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,20,5,20,324,8,20,10,20,12,20,327,9,20,1,21,1,21,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	5,22,347,8,22,10,22,12,22,350,9,22,3,22,352,8,22,1,22,3,22,355,8,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,5,22,366,8,22,10,22,12,22,
  	369,9,22,1,23,1,23,1,23,1,23,1,23,1,23,3,23,377,8,23,1,23,0,1,44,24,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,0,4,
  	1,0,14,19,1,0,26,30,1,0,48,49,1,0,46,47,401,0,51,1,0,0,0,2,69,1,0,0,0,
  	4,71,1,0,0,0,6,79,1,0,0,0,8,85,1,0,0,0,10,122,1,0,0,0,12,124,1,0,0,0,
  	14,129,1,0,0,0,16,150,1,0,0,0,18,160,1,0,0,0,20,178,1,0,0,0,22,187,1,
  	0,0,0,24,199,1,0,0,0,26,225,1,0,0,0,28,227,1,0,0,0,30,236,1,0,0,0,32,
  	247,1,0,0,0,34,254,1,0,0,0,36,262,1,0,0,0,38,280,1,0,0,0,40,317,1,0,0,
  	0,42,328,1,0,0,0,44,354,1,0,0,0,46,376,1,0,0,0,48,50,3,18,9,0,49,48,1,
  	0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,0,53,51,1,
  	0,0,0,54,55,5,0,0,1,55,1,1,0,0,0,56,70,3,4,2,0,57,70,3,6,3,0,58,70,3,
  	12,6,0,59,70,3,14,7,0,60,70,3,16,8,0,61,70,3,24,12,0,62,70,3,28,14,0,
  	63,70,3,30,15,0,64,70,3,34,17,0,65,70,3,36,18,0,66,70,3,38,19,0,67,70,
  	3,32,16,0,68,70,3,8,4,0,69,56,1,0,0,0,69,57,1,0,0,0,69,58,1,0,0,0,69,
  	59,1,0,0,0,69,60,1,0,0,0,69,61,1,0,0,0,69,62,1,0,0,0,69,63,1,0,0,0,69,
  	64,1,0,0,0,69,65,1,0,0,0,69,66,1,0,0,0,69,67,1,0,0,0,69,68,1,0,0,0,70,
  	3,1,0,0,0,71,72,3,42,21,0,72,75,5,40,0,0,73,74,5,43,0,0,74,76,3,44,22,
  	0,75,73,1,0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,78,5,1,0,0,78,5,1,0,0,
  	0,79,80,5,2,0,0,80,81,5,40,0,0,81,82,5,43,0,0,82,83,3,44,22,0,83,84,5,
  	1,0,0,84,7,1,0,0,0,85,86,5,2,0,0,86,87,5,40,0,0,87,88,5,43,0,0,88,89,
  	5,3,0,0,89,90,5,44,0,0,90,91,3,44,22,0,91,92,5,4,0,0,92,93,3,44,22,0,
  	93,94,5,45,0,0,94,95,5,1,0,0,95,9,1,0,0,0,96,97,5,5,0,0,97,102,3,44,22,
  	0,98,99,5,4,0,0,99,101,3,44,22,0,100,98,1,0,0,0,101,104,1,0,0,0,102,100,
  	1,0,0,0,102,103,1,0,0,0,103,105,1,0,0,0,104,102,1,0,0,0,105,106,5,6,0,
  	0,106,123,1,0,0,0,107,108,5,7,0,0,108,109,5,39,0,0,109,110,5,8,0,0,110,
  	117,3,44,22,0,111,112,5,4,0,0,112,113,5,39,0,0,113,114,5,8,0,0,114,116,
  	3,44,22,0,115,111,1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,118,1,0,
  	0,0,118,120,1,0,0,0,119,117,1,0,0,0,120,121,5,9,0,0,121,123,1,0,0,0,122,
  	96,1,0,0,0,122,107,1,0,0,0,123,11,1,0,0,0,124,125,5,40,0,0,125,126,5,
  	43,0,0,126,127,3,44,22,0,127,128,5,1,0,0,128,13,1,0,0,0,129,130,5,10,
  	0,0,130,134,5,44,0,0,131,135,5,39,0,0,132,135,5,40,0,0,133,135,3,44,22,
  	0,134,131,1,0,0,0,134,132,1,0,0,0,134,133,1,0,0,0,135,144,1,0,0,0,136,
  	140,5,4,0,0,137,141,5,39,0,0,138,141,5,40,0,0,139,141,3,44,22,0,140,137,
  	1,0,0,0,140,138,1,0,0,0,140,139,1,0,0,0,141,143,1,0,0,0,142,136,1,0,0,
  	0,143,146,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,147,1,0,0,0,146,
  	144,1,0,0,0,147,148,5,45,0,0,148,149,5,1,0,0,149,15,1,0,0,0,150,151,5,
  	40,0,0,151,152,5,43,0,0,152,153,5,11,0,0,153,154,5,44,0,0,154,155,5,39,
  	0,0,155,156,5,4,0,0,156,157,3,42,21,0,157,158,5,45,0,0,158,159,5,1,0,
  	0,159,17,1,0,0,0,160,161,5,12,0,0,161,162,5,40,0,0,162,171,5,44,0,0,163,
  	168,5,40,0,0,164,165,5,4,0,0,165,167,5,40,0,0,166,164,1,0,0,0,167,170,
  	1,0,0,0,168,166,1,0,0,0,168,169,1,0,0,0,169,172,1,0,0,0,170,168,1,0,0,
  	0,171,163,1,0,0,0,171,172,1,0,0,0,172,173,1,0,0,0,173,176,5,45,0,0,174,
  	177,3,20,10,0,175,177,3,22,11,0,176,174,1,0,0,0,176,175,1,0,0,0,177,19,
  	1,0,0,0,178,182,5,7,0,0,179,181,3,2,1,0,180,179,1,0,0,0,181,184,1,0,0,
  	0,182,180,1,0,0,0,182,183,1,0,0,0,183,185,1,0,0,0,184,182,1,0,0,0,185,
  	186,5,9,0,0,186,21,1,0,0,0,187,191,5,7,0,0,188,190,3,2,1,0,189,188,1,
  	0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,194,1,0,0,0,
  	193,191,1,0,0,0,194,195,5,13,0,0,195,196,3,44,22,0,196,197,5,1,0,0,197,
  	198,5,9,0,0,198,23,1,0,0,0,199,200,5,31,0,0,200,201,5,44,0,0,201,202,
  	3,44,22,0,202,203,3,26,13,0,203,204,3,44,22,0,204,205,5,45,0,0,205,216,
  	3,20,10,0,206,207,5,32,0,0,207,208,5,44,0,0,208,209,3,44,22,0,209,210,
  	3,26,13,0,210,211,3,44,22,0,211,212,5,45,0,0,212,213,3,20,10,0,213,215,
  	1,0,0,0,214,206,1,0,0,0,215,218,1,0,0,0,216,214,1,0,0,0,216,217,1,0,0,
  	0,217,221,1,0,0,0,218,216,1,0,0,0,219,220,5,33,0,0,220,222,3,20,10,0,
  	221,219,1,0,0,0,221,222,1,0,0,0,222,223,1,0,0,0,223,224,5,1,0,0,224,25,
  	1,0,0,0,225,226,7,0,0,0,226,27,1,0,0,0,227,228,5,20,0,0,228,229,5,44,
  	0,0,229,230,3,44,22,0,230,231,3,26,13,0,231,232,3,44,22,0,232,233,5,45,
  	0,0,233,234,3,20,10,0,234,235,5,1,0,0,235,29,1,0,0,0,236,237,5,21,0,0,
  	237,238,5,44,0,0,238,239,3,44,22,0,239,240,5,4,0,0,240,241,3,44,22,0,
  	241,242,5,4,0,0,242,243,3,44,22,0,243,244,5,45,0,0,244,245,3,20,10,0,
  	245,246,5,1,0,0,246,31,1,0,0,0,247,248,5,22,0,0,248,249,5,44,0,0,249,
  	250,5,34,0,0,250,251,5,45,0,0,251,252,3,20,10,0,252,253,5,1,0,0,253,33,
  	1,0,0,0,254,255,5,23,0,0,255,256,5,40,0,0,256,257,5,44,0,0,257,258,3,
  	40,20,0,258,259,5,45,0,0,259,260,3,20,10,0,260,261,5,1,0,0,261,35,1,0,
  	0,0,262,263,5,24,0,0,263,264,5,14,0,0,264,265,3,42,21,0,265,266,5,16,
  	0,0,266,267,5,40,0,0,267,268,5,43,0,0,268,269,5,5,0,0,269,274,3,44,22,
  	0,270,271,5,4,0,0,271,273,3,44,22,0,272,270,1,0,0,0,273,276,1,0,0,0,274,
  	272,1,0,0,0,274,275,1,0,0,0,275,277,1,0,0,0,276,274,1,0,0,0,277,278,5,
  	6,0,0,278,279,5,1,0,0,279,37,1,0,0,0,280,281,5,25,0,0,281,282,5,14,0,
  	0,282,283,3,42,21,0,283,284,5,16,0,0,284,285,5,40,0,0,285,286,5,43,0,
  	0,286,287,5,5,0,0,287,288,5,5,0,0,288,293,3,44,22,0,289,290,5,4,0,0,290,
  	292,3,44,22,0,291,289,1,0,0,0,292,295,1,0,0,0,293,291,1,0,0,0,293,294,
  	1,0,0,0,294,296,1,0,0,0,295,293,1,0,0,0,296,311,5,6,0,0,297,298,5,4,0,
  	0,298,299,5,5,0,0,299,304,3,44,22,0,300,301,5,4,0,0,301,303,3,44,22,0,
  	302,300,1,0,0,0,303,306,1,0,0,0,304,302,1,0,0,0,304,305,1,0,0,0,305,307,
  	1,0,0,0,306,304,1,0,0,0,307,308,5,6,0,0,308,310,1,0,0,0,309,297,1,0,0,
  	0,310,313,1,0,0,0,311,309,1,0,0,0,311,312,1,0,0,0,312,314,1,0,0,0,313,
  	311,1,0,0,0,314,315,5,6,0,0,315,316,5,1,0,0,316,39,1,0,0,0,317,318,3,
  	42,21,0,318,325,5,40,0,0,319,320,5,4,0,0,320,321,3,42,21,0,321,322,5,
  	40,0,0,322,324,1,0,0,0,323,319,1,0,0,0,324,327,1,0,0,0,325,323,1,0,0,
  	0,325,326,1,0,0,0,326,41,1,0,0,0,327,325,1,0,0,0,328,329,7,1,0,0,329,
  	43,1,0,0,0,330,331,6,22,-1,0,331,332,5,44,0,0,332,333,3,44,22,0,333,334,
  	5,45,0,0,334,355,1,0,0,0,335,355,3,46,23,0,336,337,5,40,0,0,337,338,5,
  	5,0,0,338,339,3,44,22,0,339,340,5,6,0,0,340,355,1,0,0,0,341,342,5,40,
  	0,0,342,351,5,44,0,0,343,348,3,44,22,0,344,345,5,4,0,0,345,347,3,44,22,
  	0,346,344,1,0,0,0,347,350,1,0,0,0,348,346,1,0,0,0,348,349,1,0,0,0,349,
  	352,1,0,0,0,350,348,1,0,0,0,351,343,1,0,0,0,351,352,1,0,0,0,352,353,1,
  	0,0,0,353,355,5,45,0,0,354,330,1,0,0,0,354,335,1,0,0,0,354,336,1,0,0,
  	0,354,341,1,0,0,0,355,367,1,0,0,0,356,357,10,6,0,0,357,358,5,50,0,0,358,
  	366,3,44,22,7,359,360,10,5,0,0,360,361,7,2,0,0,361,366,3,44,22,6,362,
  	363,10,4,0,0,363,364,7,3,0,0,364,366,3,44,22,5,365,356,1,0,0,0,365,359,
  	1,0,0,0,365,362,1,0,0,0,366,369,1,0,0,0,367,365,1,0,0,0,367,368,1,0,0,
  	0,368,45,1,0,0,0,369,367,1,0,0,0,370,377,5,36,0,0,371,377,5,37,0,0,372,
  	377,5,38,0,0,373,377,5,39,0,0,374,377,5,35,0,0,375,377,5,40,0,0,376,370,
  	1,0,0,0,376,371,1,0,0,0,376,372,1,0,0,0,376,373,1,0,0,0,376,374,1,0,0,
  	0,376,375,1,0,0,0,377,47,1,0,0,0,27,51,69,75,102,117,122,134,140,144,
  	168,171,176,182,191,216,221,274,293,304,311,325,348,351,354,365,367,376
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

std::vector<CobraParser::FunctionDefContext *> CobraParser::ProgramContext::functionDef() {
  return getRuleContexts<CobraParser::FunctionDefContext>();
}

CobraParser::FunctionDefContext* CobraParser::ProgramContext::functionDef(size_t i) {
  return getRuleContext<CobraParser::FunctionDefContext>(i);
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
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__11) {
      setState(48);
      functionDef();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
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

CobraParser::ConditionalContext* CobraParser::StatementContext::conditional() {
  return getRuleContext<CobraParser::ConditionalContext>(0);
}

CobraParser::LoopStructContext* CobraParser::StatementContext::loopStruct() {
  return getRuleContext<CobraParser::LoopStructContext>(0);
}

CobraParser::RepeatStructContext* CobraParser::StatementContext::repeatStruct() {
  return getRuleContext<CobraParser::RepeatStructContext>(0);
}

CobraParser::ObjectDeclContext* CobraParser::StatementContext::objectDecl() {
  return getRuleContext<CobraParser::ObjectDeclContext>(0);
}

CobraParser::ArrayDeclContext* CobraParser::StatementContext::arrayDecl() {
  return getRuleContext<CobraParser::ArrayDeclContext>(0);
}

CobraParser::MatrixDeclContext* CobraParser::StatementContext::matrixDecl() {
  return getRuleContext<CobraParser::MatrixDeclContext>(0);
}

CobraParser::WaitLoopContext* CobraParser::StatementContext::waitLoop() {
  return getRuleContext<CobraParser::WaitLoopContext>(0);
}

CobraParser::RangeDeclarationContext* CobraParser::StatementContext::rangeDeclaration() {
  return getRuleContext<CobraParser::RangeDeclarationContext>(0);
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
    setState(69);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(56);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(57);
      inferredVarDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(58);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(59);
      display();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(60);
      getInput();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(61);
      conditional();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(62);
      loopStruct();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(63);
      repeatStruct();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(64);
      objectDecl();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(65);
      arrayDecl();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(66);
      matrixDecl();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(67);
      waitLoop();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(68);
      rangeDeclaration();
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
    setState(71);
    dataType();
    setState(72);
    match(CobraParser::IDENTIFIER);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::ASSIGN) {
      setState(73);
      match(CobraParser::ASSIGN);
      setState(74);
      expression(0);
    }
    setState(77);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(CobraParser::T__1);
    setState(80);
    match(CobraParser::IDENTIFIER);
    setState(81);
    match(CobraParser::ASSIGN);
    setState(82);
    expression(0);
    setState(83);
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
    setState(85);
    match(CobraParser::T__1);
    setState(86);
    match(CobraParser::IDENTIFIER);
    setState(87);
    match(CobraParser::ASSIGN);
    setState(88);
    match(CobraParser::T__2);
    setState(89);
    match(CobraParser::LPAR);
    setState(90);
    expression(0);
    setState(91);
    match(CobraParser::T__3);
    setState(92);
    expression(0);
    setState(93);
    match(CobraParser::RPAR);
    setState(94);
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
    setState(122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::T__4: {
        _localctx = _tracker.createInstance<CobraParser::ListCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(96);
        match(CobraParser::T__4);
        setState(97);
        expression(0);
        setState(102);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(98);
          match(CobraParser::T__3);
          setState(99);
          expression(0);
          setState(104);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(105);
        match(CobraParser::T__5);
        break;
      }

      case CobraParser::T__6: {
        _localctx = _tracker.createInstance<CobraParser::DictCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(107);
        match(CobraParser::T__6);
        setState(108);
        match(CobraParser::TEXT);
        setState(109);
        match(CobraParser::T__7);
        setState(110);
        expression(0);
        setState(117);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(111);
          match(CobraParser::T__3);
          setState(112);
          match(CobraParser::TEXT);
          setState(113);
          match(CobraParser::T__7);
          setState(114);
          expression(0);
          setState(119);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(120);
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
    setState(124);
    match(CobraParser::IDENTIFIER);
    setState(125);
    match(CobraParser::ASSIGN);
    setState(126);
    expression(0);
    setState(127);
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
    setState(129);
    match(CobraParser::T__9);
    setState(130);
    match(CobraParser::LPAR);
    setState(134);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(131);
      match(CobraParser::TEXT);
      break;
    }

    case 2: {
      setState(132);
      match(CobraParser::IDENTIFIER);
      break;
    }

    case 3: {
      setState(133);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(136);
      match(CobraParser::T__3);
      setState(140);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(137);
        match(CobraParser::TEXT);
        break;
      }

      case 2: {
        setState(138);
        match(CobraParser::IDENTIFIER);
        break;
      }

      case 3: {
        setState(139);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
    match(CobraParser::RPAR);
    setState(148);
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

CobraParser::DataTypeContext* CobraParser::GetInputContext::dataType() {
  return getRuleContext<CobraParser::DataTypeContext>(0);
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
    setState(150);
    match(CobraParser::IDENTIFIER);
    setState(151);
    match(CobraParser::ASSIGN);
    setState(152);
    match(CobraParser::T__10);
    setState(153);
    match(CobraParser::LPAR);
    setState(154);
    match(CobraParser::TEXT);
    setState(155);
    match(CobraParser::T__3);
    setState(156);
    dataType();
    setState(157);
    match(CobraParser::RPAR);
    setState(158);
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
    setState(160);
    match(CobraParser::T__11);
    setState(161);
    match(CobraParser::IDENTIFIER);
    setState(162);
    match(CobraParser::LPAR);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::IDENTIFIER) {
      setState(163);
      match(CobraParser::IDENTIFIER);
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CobraParser::T__3) {
        setState(164);
        match(CobraParser::T__3);
        setState(165);
        match(CobraParser::IDENTIFIER);
        setState(170);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(173);
    match(CobraParser::RPAR);
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(174);
      block();
      break;
    }

    case 2: {
      setState(175);
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
    setState(178);
    match(CobraParser::T__6);
    setState(182);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1103805547524) != 0)) {
      setState(179);
      statement();
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(185);
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
    setState(187);
    match(CobraParser::T__6);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1103805547524) != 0)) {
      setState(188);
      statement();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(CobraParser::T__12);
    setState(195);
    expression(0);
    setState(196);
    match(CobraParser::T__0);
    setState(197);
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

tree::TerminalNode* CobraParser::ConditionalContext::WHEN() {
  return getToken(CobraParser::WHEN, 0);
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

std::vector<CobraParser::ComparisonOperatorContext *> CobraParser::ConditionalContext::comparisonOperator() {
  return getRuleContexts<CobraParser::ComparisonOperatorContext>();
}

CobraParser::ComparisonOperatorContext* CobraParser::ConditionalContext::comparisonOperator(size_t i) {
  return getRuleContext<CobraParser::ComparisonOperatorContext>(i);
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

std::vector<tree::TerminalNode *> CobraParser::ConditionalContext::OTHERWISEWHEN() {
  return getTokens(CobraParser::OTHERWISEWHEN);
}

tree::TerminalNode* CobraParser::ConditionalContext::OTHERWISEWHEN(size_t i) {
  return getToken(CobraParser::OTHERWISEWHEN, i);
}

tree::TerminalNode* CobraParser::ConditionalContext::OTHERWISE() {
  return getToken(CobraParser::OTHERWISE, 0);
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
    setState(199);
    match(CobraParser::WHEN);
    setState(200);
    match(CobraParser::LPAR);
    setState(201);
    expression(0);
    setState(202);
    comparisonOperator();
    setState(203);
    expression(0);
    setState(204);
    match(CobraParser::RPAR);
    setState(205);
    block();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::OTHERWISEWHEN) {
      setState(206);
      match(CobraParser::OTHERWISEWHEN);
      setState(207);
      match(CobraParser::LPAR);
      setState(208);
      expression(0);
      setState(209);
      comparisonOperator();
      setState(210);
      expression(0);
      setState(211);
      match(CobraParser::RPAR);
      setState(212);
      block();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::OTHERWISE) {
      setState(219);
      match(CobraParser::OTHERWISE);
      setState(220);
      block();
    }
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

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

CobraParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CobraParser::ComparisonOperatorContext::getRuleIndex() const {
  return CobraParser::RuleComparisonOperator;
}

void CobraParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void CobraParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}


std::any CobraParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::ComparisonOperatorContext* CobraParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 26, CobraParser::RuleComparisonOperator);
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
    setState(225);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1032192) != 0))) {
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

//----------------- LoopStructContext ------------------------------------------------------------------

CobraParser::LoopStructContext::LoopStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CobraParser::LoopStructContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::LoopStructContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::LoopStructContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

CobraParser::ComparisonOperatorContext* CobraParser::LoopStructContext::comparisonOperator() {
  return getRuleContext<CobraParser::ComparisonOperatorContext>(0);
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
  enterRule(_localctx, 28, CobraParser::RuleLoopStruct);

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
    match(CobraParser::T__19);
    setState(228);
    match(CobraParser::LPAR);
    setState(229);
    expression(0);
    setState(230);
    comparisonOperator();
    setState(231);
    expression(0);
    setState(232);
    match(CobraParser::RPAR);
    setState(233);
    block();
    setState(234);
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
  enterRule(_localctx, 30, CobraParser::RuleRepeatStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    match(CobraParser::T__20);
    setState(237);
    match(CobraParser::LPAR);
    setState(238);
    expression(0);
    setState(239);
    match(CobraParser::T__3);
    setState(240);
    expression(0);
    setState(241);
    match(CobraParser::T__3);
    setState(242);
    expression(0);
    setState(243);
    match(CobraParser::RPAR);
    setState(244);
    block();
    setState(245);
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
  enterRule(_localctx, 32, CobraParser::RuleWaitLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(CobraParser::T__21);
    setState(248);
    match(CobraParser::LPAR);
    setState(249);
    match(CobraParser::TIME);
    setState(250);
    match(CobraParser::RPAR);
    setState(251);
    block();
    setState(252);
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
  enterRule(_localctx, 34, CobraParser::RuleObjectDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(CobraParser::T__22);
    setState(255);
    match(CobraParser::IDENTIFIER);
    setState(256);
    match(CobraParser::LPAR);
    setState(257);
    parameterList();
    setState(258);
    match(CobraParser::RPAR);
    setState(259);
    block();
    setState(260);
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
  enterRule(_localctx, 36, CobraParser::RuleArrayDecl);
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
    setState(262);
    match(CobraParser::T__23);
    setState(263);
    match(CobraParser::T__13);
    setState(264);
    dataType();
    setState(265);
    match(CobraParser::T__15);
    setState(266);
    match(CobraParser::IDENTIFIER);
    setState(267);
    match(CobraParser::ASSIGN);
    setState(268);
    match(CobraParser::T__4);
    setState(269);
    expression(0);
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(270);
      match(CobraParser::T__3);
      setState(271);
      expression(0);
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(277);
    match(CobraParser::T__5);
    setState(278);
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
  enterRule(_localctx, 38, CobraParser::RuleMatrixDecl);
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
    setState(280);
    match(CobraParser::T__24);
    setState(281);
    match(CobraParser::T__13);
    setState(282);
    dataType();
    setState(283);
    match(CobraParser::T__15);
    setState(284);
    match(CobraParser::IDENTIFIER);
    setState(285);
    match(CobraParser::ASSIGN);
    setState(286);
    match(CobraParser::T__4);
    setState(287);
    match(CobraParser::T__4);
    setState(288);
    expression(0);
    setState(293);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(289);
      match(CobraParser::T__3);
      setState(290);
      expression(0);
      setState(295);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(296);
    match(CobraParser::T__5);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(297);
      match(CobraParser::T__3);
      setState(298);
      match(CobraParser::T__4);
      setState(299);
      expression(0);
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CobraParser::T__3) {
        setState(300);
        match(CobraParser::T__3);
        setState(301);
        expression(0);
        setState(306);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(307);
      match(CobraParser::T__5);
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    match(CobraParser::T__5);
    setState(315);
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
  enterRule(_localctx, 40, CobraParser::RuleParameterList);
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
    setState(317);
    dataType();
    setState(318);
    match(CobraParser::IDENTIFIER);
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(319);
      match(CobraParser::T__3);
      setState(320);
      dataType();
      setState(321);
      match(CobraParser::IDENTIFIER);
      setState(327);
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
  enterRule(_localctx, 42, CobraParser::RuleDataType);
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
    setState(328);
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
//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::FunctionCallContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

tree::TerminalNode* CobraParser::FunctionCallContext::LPAR() {
  return getToken(CobraParser::LPAR, 0);
}

tree::TerminalNode* CobraParser::FunctionCallContext::RPAR() {
  return getToken(CobraParser::RPAR, 0);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::FunctionCallContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

CobraParser::FunctionCallContext::FunctionCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void CobraParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

std::any CobraParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
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
//----------------- ArrayAccessContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::ArrayAccessContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

CobraParser::ExpressionContext* CobraParser::ArrayAccessContext::expression() {
  return getRuleContext<CobraParser::ExpressionContext>(0);
}

CobraParser::ArrayAccessContext::ArrayAccessContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::ArrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess(this);
}
void CobraParser::ArrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess(this);
}

std::any CobraParser::ArrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitArrayAccess(this);
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
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, CobraParser::RuleExpression, precedence);

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
    setState(354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(331);
      match(CobraParser::LPAR);
      setState(332);
      expression(0);
      setState(333);
      match(CobraParser::RPAR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LitExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(335);
      literal();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ArrayAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(336);
      match(CobraParser::IDENTIFIER);
      setState(337);
      match(CobraParser::T__4);
      setState(338);
      expression(0);
      setState(339);
      match(CobraParser::T__5);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(341);
      match(CobraParser::IDENTIFIER);
      setState(342);
      match(CobraParser::LPAR);
      setState(351);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 19756849561600) != 0)) {
        setState(343);
        expression(0);
        setState(348);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(344);
          match(CobraParser::T__3);
          setState(345);
          expression(0);
          setState(350);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(353);
      match(CobraParser::RPAR);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(367);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(365);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(356);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(357);
          match(CobraParser::POW);
          setState(358);
          expression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(359);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(360);
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
          setState(361);
          expression(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SubsumContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(362);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(363);
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
          setState(364);
          expression(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(369);
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
  enterRule(_localctx, 46, CobraParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(376);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::INTEGER: {
        _localctx = _tracker.createInstance<CobraParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(370);
        match(CobraParser::INTEGER);
        break;
      }

      case CobraParser::DECIMAL: {
        _localctx = _tracker.createInstance<CobraParser::FloatLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(371);
        match(CobraParser::DECIMAL);
        break;
      }

      case CobraParser::CHARACTER: {
        _localctx = _tracker.createInstance<CobraParser::CharLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(372);
        match(CobraParser::CHARACTER);
        break;
      }

      case CobraParser::TEXT: {
        _localctx = _tracker.createInstance<CobraParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(373);
        match(CobraParser::TEXT);
        break;
      }

      case CobraParser::BOOLEAN: {
        _localctx = _tracker.createInstance<CobraParser::BoolLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(374);
        match(CobraParser::BOOLEAN);
        break;
      }

      case CobraParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<CobraParser::IdentifierLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(375);
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
    case 22: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CobraParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

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

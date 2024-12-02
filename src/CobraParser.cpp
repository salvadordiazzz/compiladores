
// Generated from Cobra.g4 by ANTLR 4.13.2


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
      "matrixDecl", "matrixBody", "matrixRow", "parameterList", "dataType", 
      "expression", "literal"
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
  	4,1,50,385,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,5,0,54,8,0,10,0,12,0,57,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,74,
  	8,1,1,2,1,2,1,2,1,2,3,2,80,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,105,8,5,10,
  	5,12,5,108,9,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,120,8,5,10,
  	5,12,5,123,9,5,1,5,1,5,3,5,127,8,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,
  	7,1,7,3,7,139,8,7,1,7,1,7,1,7,1,7,3,7,145,8,7,5,7,147,8,7,10,7,12,7,150,
  	9,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,
  	9,1,9,1,9,5,9,171,8,9,10,9,12,9,174,9,9,3,9,176,8,9,1,9,1,9,1,9,3,9,181,
  	8,9,1,10,1,10,5,10,185,8,10,10,10,12,10,188,9,10,1,10,1,10,1,11,1,11,
  	5,11,194,8,11,10,11,12,11,197,9,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,
  	219,8,12,10,12,12,12,222,9,12,1,12,1,12,3,12,226,8,12,1,12,1,12,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,5,18,277,8,18,10,18,12,18,280,9,18,1,18,1,18,1,18,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,5,20,
  	298,8,20,10,20,12,20,301,9,20,1,20,1,20,1,21,1,21,1,21,1,21,5,21,309,
  	8,21,10,21,12,21,312,9,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,5,22,
  	322,8,22,10,22,12,22,325,9,22,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,5,24,345,8,24,10,24,
  	12,24,348,9,24,3,24,350,8,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,3,24,361,8,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,5,24,
  	372,8,24,10,24,12,24,375,9,24,1,25,1,25,1,25,1,25,1,25,1,25,3,25,383,
  	8,25,1,25,0,1,48,26,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,0,4,1,0,14,19,1,0,26,30,1,0,48,49,1,0,46,47,405,
  	0,55,1,0,0,0,2,73,1,0,0,0,4,75,1,0,0,0,6,83,1,0,0,0,8,89,1,0,0,0,10,126,
  	1,0,0,0,12,128,1,0,0,0,14,133,1,0,0,0,16,154,1,0,0,0,18,164,1,0,0,0,20,
  	182,1,0,0,0,22,191,1,0,0,0,24,203,1,0,0,0,26,229,1,0,0,0,28,231,1,0,0,
  	0,30,240,1,0,0,0,32,251,1,0,0,0,34,258,1,0,0,0,36,266,1,0,0,0,38,284,
  	1,0,0,0,40,293,1,0,0,0,42,304,1,0,0,0,44,315,1,0,0,0,46,326,1,0,0,0,48,
  	360,1,0,0,0,50,382,1,0,0,0,52,54,3,18,9,0,53,52,1,0,0,0,54,57,1,0,0,0,
  	55,53,1,0,0,0,55,56,1,0,0,0,56,58,1,0,0,0,57,55,1,0,0,0,58,59,5,0,0,1,
  	59,1,1,0,0,0,60,74,3,4,2,0,61,74,3,6,3,0,62,74,3,12,6,0,63,74,3,14,7,
  	0,64,74,3,16,8,0,65,74,3,24,12,0,66,74,3,28,14,0,67,74,3,30,15,0,68,74,
  	3,34,17,0,69,74,3,36,18,0,70,74,3,38,19,0,71,74,3,32,16,0,72,74,3,8,4,
  	0,73,60,1,0,0,0,73,61,1,0,0,0,73,62,1,0,0,0,73,63,1,0,0,0,73,64,1,0,0,
  	0,73,65,1,0,0,0,73,66,1,0,0,0,73,67,1,0,0,0,73,68,1,0,0,0,73,69,1,0,0,
  	0,73,70,1,0,0,0,73,71,1,0,0,0,73,72,1,0,0,0,74,3,1,0,0,0,75,76,3,46,23,
  	0,76,79,5,40,0,0,77,78,5,43,0,0,78,80,3,48,24,0,79,77,1,0,0,0,79,80,1,
  	0,0,0,80,81,1,0,0,0,81,82,5,1,0,0,82,5,1,0,0,0,83,84,5,2,0,0,84,85,5,
  	40,0,0,85,86,5,43,0,0,86,87,3,48,24,0,87,88,5,1,0,0,88,7,1,0,0,0,89,90,
  	5,2,0,0,90,91,5,40,0,0,91,92,5,43,0,0,92,93,5,3,0,0,93,94,5,44,0,0,94,
  	95,3,48,24,0,95,96,5,4,0,0,96,97,3,48,24,0,97,98,5,45,0,0,98,99,5,1,0,
  	0,99,9,1,0,0,0,100,101,5,5,0,0,101,106,3,48,24,0,102,103,5,4,0,0,103,
  	105,3,48,24,0,104,102,1,0,0,0,105,108,1,0,0,0,106,104,1,0,0,0,106,107,
  	1,0,0,0,107,109,1,0,0,0,108,106,1,0,0,0,109,110,5,6,0,0,110,127,1,0,0,
  	0,111,112,5,7,0,0,112,113,5,39,0,0,113,114,5,8,0,0,114,121,3,48,24,0,
  	115,116,5,4,0,0,116,117,5,39,0,0,117,118,5,8,0,0,118,120,3,48,24,0,119,
  	115,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,124,1,
  	0,0,0,123,121,1,0,0,0,124,125,5,9,0,0,125,127,1,0,0,0,126,100,1,0,0,0,
  	126,111,1,0,0,0,127,11,1,0,0,0,128,129,5,40,0,0,129,130,5,43,0,0,130,
  	131,3,48,24,0,131,132,5,1,0,0,132,13,1,0,0,0,133,134,5,10,0,0,134,138,
  	5,44,0,0,135,139,5,39,0,0,136,139,5,40,0,0,137,139,3,48,24,0,138,135,
  	1,0,0,0,138,136,1,0,0,0,138,137,1,0,0,0,139,148,1,0,0,0,140,144,5,4,0,
  	0,141,145,5,39,0,0,142,145,5,40,0,0,143,145,3,48,24,0,144,141,1,0,0,0,
  	144,142,1,0,0,0,144,143,1,0,0,0,145,147,1,0,0,0,146,140,1,0,0,0,147,150,
  	1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,151,1,0,0,0,150,148,1,0,0,
  	0,151,152,5,45,0,0,152,153,5,1,0,0,153,15,1,0,0,0,154,155,5,40,0,0,155,
  	156,5,43,0,0,156,157,5,11,0,0,157,158,5,44,0,0,158,159,5,39,0,0,159,160,
  	5,4,0,0,160,161,3,46,23,0,161,162,5,45,0,0,162,163,5,1,0,0,163,17,1,0,
  	0,0,164,165,5,12,0,0,165,166,5,40,0,0,166,175,5,44,0,0,167,172,5,40,0,
  	0,168,169,5,4,0,0,169,171,5,40,0,0,170,168,1,0,0,0,171,174,1,0,0,0,172,
  	170,1,0,0,0,172,173,1,0,0,0,173,176,1,0,0,0,174,172,1,0,0,0,175,167,1,
  	0,0,0,175,176,1,0,0,0,176,177,1,0,0,0,177,180,5,45,0,0,178,181,3,20,10,
  	0,179,181,3,22,11,0,180,178,1,0,0,0,180,179,1,0,0,0,181,19,1,0,0,0,182,
  	186,5,7,0,0,183,185,3,2,1,0,184,183,1,0,0,0,185,188,1,0,0,0,186,184,1,
  	0,0,0,186,187,1,0,0,0,187,189,1,0,0,0,188,186,1,0,0,0,189,190,5,9,0,0,
  	190,21,1,0,0,0,191,195,5,7,0,0,192,194,3,2,1,0,193,192,1,0,0,0,194,197,
  	1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,198,1,0,0,0,197,195,1,0,0,
  	0,198,199,5,13,0,0,199,200,3,48,24,0,200,201,5,1,0,0,201,202,5,9,0,0,
  	202,23,1,0,0,0,203,204,5,31,0,0,204,205,5,44,0,0,205,206,3,48,24,0,206,
  	207,3,26,13,0,207,208,3,48,24,0,208,209,5,45,0,0,209,220,3,20,10,0,210,
  	211,5,32,0,0,211,212,5,44,0,0,212,213,3,48,24,0,213,214,3,26,13,0,214,
  	215,3,48,24,0,215,216,5,45,0,0,216,217,3,20,10,0,217,219,1,0,0,0,218,
  	210,1,0,0,0,219,222,1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,225,1,
  	0,0,0,222,220,1,0,0,0,223,224,5,33,0,0,224,226,3,20,10,0,225,223,1,0,
  	0,0,225,226,1,0,0,0,226,227,1,0,0,0,227,228,5,1,0,0,228,25,1,0,0,0,229,
  	230,7,0,0,0,230,27,1,0,0,0,231,232,5,20,0,0,232,233,5,44,0,0,233,234,
  	3,48,24,0,234,235,3,26,13,0,235,236,3,48,24,0,236,237,5,45,0,0,237,238,
  	3,20,10,0,238,239,5,1,0,0,239,29,1,0,0,0,240,241,5,21,0,0,241,242,5,44,
  	0,0,242,243,3,48,24,0,243,244,5,4,0,0,244,245,3,48,24,0,245,246,5,4,0,
  	0,246,247,3,48,24,0,247,248,5,45,0,0,248,249,3,20,10,0,249,250,5,1,0,
  	0,250,31,1,0,0,0,251,252,5,22,0,0,252,253,5,44,0,0,253,254,5,34,0,0,254,
  	255,5,45,0,0,255,256,3,20,10,0,256,257,5,1,0,0,257,33,1,0,0,0,258,259,
  	5,23,0,0,259,260,5,40,0,0,260,261,5,44,0,0,261,262,3,44,22,0,262,263,
  	5,45,0,0,263,264,3,20,10,0,264,265,5,1,0,0,265,35,1,0,0,0,266,267,5,24,
  	0,0,267,268,5,14,0,0,268,269,3,46,23,0,269,270,5,16,0,0,270,271,5,40,
  	0,0,271,272,5,43,0,0,272,273,5,5,0,0,273,278,3,48,24,0,274,275,5,4,0,
  	0,275,277,3,48,24,0,276,274,1,0,0,0,277,280,1,0,0,0,278,276,1,0,0,0,278,
  	279,1,0,0,0,279,281,1,0,0,0,280,278,1,0,0,0,281,282,5,6,0,0,282,283,5,
  	1,0,0,283,37,1,0,0,0,284,285,5,25,0,0,285,286,5,14,0,0,286,287,3,46,23,
  	0,287,288,5,16,0,0,288,289,5,40,0,0,289,290,5,43,0,0,290,291,3,40,20,
  	0,291,292,5,1,0,0,292,39,1,0,0,0,293,294,5,5,0,0,294,299,3,42,21,0,295,
  	296,5,4,0,0,296,298,3,42,21,0,297,295,1,0,0,0,298,301,1,0,0,0,299,297,
  	1,0,0,0,299,300,1,0,0,0,300,302,1,0,0,0,301,299,1,0,0,0,302,303,5,6,0,
  	0,303,41,1,0,0,0,304,305,5,5,0,0,305,310,3,48,24,0,306,307,5,4,0,0,307,
  	309,3,48,24,0,308,306,1,0,0,0,309,312,1,0,0,0,310,308,1,0,0,0,310,311,
  	1,0,0,0,311,313,1,0,0,0,312,310,1,0,0,0,313,314,5,6,0,0,314,43,1,0,0,
  	0,315,316,3,46,23,0,316,323,5,40,0,0,317,318,5,4,0,0,318,319,3,46,23,
  	0,319,320,5,40,0,0,320,322,1,0,0,0,321,317,1,0,0,0,322,325,1,0,0,0,323,
  	321,1,0,0,0,323,324,1,0,0,0,324,45,1,0,0,0,325,323,1,0,0,0,326,327,7,
  	1,0,0,327,47,1,0,0,0,328,329,6,24,-1,0,329,330,5,44,0,0,330,331,3,48,
  	24,0,331,332,5,45,0,0,332,361,1,0,0,0,333,361,3,50,25,0,334,335,5,40,
  	0,0,335,336,5,5,0,0,336,337,3,48,24,0,337,338,5,6,0,0,338,361,1,0,0,0,
  	339,340,5,40,0,0,340,349,5,44,0,0,341,346,3,48,24,0,342,343,5,4,0,0,343,
  	345,3,48,24,0,344,342,1,0,0,0,345,348,1,0,0,0,346,344,1,0,0,0,346,347,
  	1,0,0,0,347,350,1,0,0,0,348,346,1,0,0,0,349,341,1,0,0,0,349,350,1,0,0,
  	0,350,351,1,0,0,0,351,361,5,45,0,0,352,353,5,40,0,0,353,354,5,5,0,0,354,
  	355,3,48,24,0,355,356,5,6,0,0,356,357,5,5,0,0,357,358,3,48,24,0,358,359,
  	5,6,0,0,359,361,1,0,0,0,360,328,1,0,0,0,360,333,1,0,0,0,360,334,1,0,0,
  	0,360,339,1,0,0,0,360,352,1,0,0,0,361,373,1,0,0,0,362,363,10,7,0,0,363,
  	364,5,50,0,0,364,372,3,48,24,8,365,366,10,6,0,0,366,367,7,2,0,0,367,372,
  	3,48,24,7,368,369,10,5,0,0,369,370,7,3,0,0,370,372,3,48,24,6,371,362,
  	1,0,0,0,371,365,1,0,0,0,371,368,1,0,0,0,372,375,1,0,0,0,373,371,1,0,0,
  	0,373,374,1,0,0,0,374,49,1,0,0,0,375,373,1,0,0,0,376,383,5,36,0,0,377,
  	383,5,37,0,0,378,383,5,38,0,0,379,383,5,39,0,0,380,383,5,35,0,0,381,383,
  	5,40,0,0,382,376,1,0,0,0,382,377,1,0,0,0,382,378,1,0,0,0,382,379,1,0,
  	0,0,382,380,1,0,0,0,382,381,1,0,0,0,383,51,1,0,0,0,26,55,73,79,106,121,
  	126,138,144,148,172,175,180,186,195,220,225,278,299,310,323,346,349,360,
  	371,373,382
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
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__11) {
      setState(52);
      functionDef();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
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
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      inferredVarDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(62);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(63);
      display();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(64);
      getInput();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(65);
      conditional();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(66);
      loopStruct();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(67);
      repeatStruct();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(68);
      objectDecl();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(69);
      arrayDecl();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(70);
      matrixDecl();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(71);
      waitLoop();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(72);
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
    setState(75);
    dataType();
    setState(76);
    match(CobraParser::IDENTIFIER);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::ASSIGN) {
      setState(77);
      match(CobraParser::ASSIGN);
      setState(78);
      expression(0);
    }
    setState(81);
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
    setState(83);
    match(CobraParser::T__1);
    setState(84);
    match(CobraParser::IDENTIFIER);
    setState(85);
    match(CobraParser::ASSIGN);
    setState(86);
    expression(0);
    setState(87);
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
    setState(89);
    match(CobraParser::T__1);
    setState(90);
    match(CobraParser::IDENTIFIER);
    setState(91);
    match(CobraParser::ASSIGN);
    setState(92);
    match(CobraParser::T__2);
    setState(93);
    match(CobraParser::LPAR);
    setState(94);
    expression(0);
    setState(95);
    match(CobraParser::T__3);
    setState(96);
    expression(0);
    setState(97);
    match(CobraParser::RPAR);
    setState(98);
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
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::T__4: {
        _localctx = _tracker.createInstance<CobraParser::ListCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(100);
        match(CobraParser::T__4);
        setState(101);
        expression(0);
        setState(106);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(102);
          match(CobraParser::T__3);
          setState(103);
          expression(0);
          setState(108);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(109);
        match(CobraParser::T__5);
        break;
      }

      case CobraParser::T__6: {
        _localctx = _tracker.createInstance<CobraParser::DictCollectionContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(111);
        match(CobraParser::T__6);
        setState(112);
        match(CobraParser::TEXT);
        setState(113);
        match(CobraParser::T__7);
        setState(114);
        expression(0);
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(115);
          match(CobraParser::T__3);
          setState(116);
          match(CobraParser::TEXT);
          setState(117);
          match(CobraParser::T__7);
          setState(118);
          expression(0);
          setState(123);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(124);
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
    setState(128);
    match(CobraParser::IDENTIFIER);
    setState(129);
    match(CobraParser::ASSIGN);
    setState(130);
    expression(0);
    setState(131);
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
    setState(133);
    match(CobraParser::T__9);
    setState(134);
    match(CobraParser::LPAR);
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(135);
      match(CobraParser::TEXT);
      break;
    }

    case 2: {
      setState(136);
      match(CobraParser::IDENTIFIER);
      break;
    }

    case 3: {
      setState(137);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(140);
      match(CobraParser::T__3);
      setState(144);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(141);
        match(CobraParser::TEXT);
        break;
      }

      case 2: {
        setState(142);
        match(CobraParser::IDENTIFIER);
        break;
      }

      case 3: {
        setState(143);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(151);
    match(CobraParser::RPAR);
    setState(152);
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
    setState(154);
    match(CobraParser::IDENTIFIER);
    setState(155);
    match(CobraParser::ASSIGN);
    setState(156);
    match(CobraParser::T__10);
    setState(157);
    match(CobraParser::LPAR);
    setState(158);
    match(CobraParser::TEXT);
    setState(159);
    match(CobraParser::T__3);
    setState(160);
    dataType();
    setState(161);
    match(CobraParser::RPAR);
    setState(162);
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
    setState(164);
    match(CobraParser::T__11);
    setState(165);
    match(CobraParser::IDENTIFIER);
    setState(166);
    match(CobraParser::LPAR);
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::IDENTIFIER) {
      setState(167);
      match(CobraParser::IDENTIFIER);
      setState(172);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CobraParser::T__3) {
        setState(168);
        match(CobraParser::T__3);
        setState(169);
        match(CobraParser::IDENTIFIER);
        setState(174);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(177);
    match(CobraParser::RPAR);
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(178);
      block();
      break;
    }

    case 2: {
      setState(179);
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
    setState(182);
    match(CobraParser::T__6);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1103805547524) != 0)) {
      setState(183);
      statement();
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
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
    setState(191);
    match(CobraParser::T__6);
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1103805547524) != 0)) {
      setState(192);
      statement();
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(198);
    match(CobraParser::T__12);
    setState(199);
    expression(0);
    setState(200);
    match(CobraParser::T__0);
    setState(201);
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
    setState(203);
    match(CobraParser::WHEN);
    setState(204);
    match(CobraParser::LPAR);
    setState(205);
    expression(0);
    setState(206);
    comparisonOperator();
    setState(207);
    expression(0);
    setState(208);
    match(CobraParser::RPAR);
    setState(209);
    block();
    setState(220);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::OTHERWISEWHEN) {
      setState(210);
      match(CobraParser::OTHERWISEWHEN);
      setState(211);
      match(CobraParser::LPAR);
      setState(212);
      expression(0);
      setState(213);
      comparisonOperator();
      setState(214);
      expression(0);
      setState(215);
      match(CobraParser::RPAR);
      setState(216);
      block();
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CobraParser::OTHERWISE) {
      setState(223);
      match(CobraParser::OTHERWISE);
      setState(224);
      block();
    }
    setState(227);
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
    setState(229);
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
    setState(231);
    match(CobraParser::T__19);
    setState(232);
    match(CobraParser::LPAR);
    setState(233);
    expression(0);
    setState(234);
    comparisonOperator();
    setState(235);
    expression(0);
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
    setState(240);
    match(CobraParser::T__20);
    setState(241);
    match(CobraParser::LPAR);
    setState(242);
    expression(0);
    setState(243);
    match(CobraParser::T__3);
    setState(244);
    expression(0);
    setState(245);
    match(CobraParser::T__3);
    setState(246);
    expression(0);
    setState(247);
    match(CobraParser::RPAR);
    setState(248);
    block();
    setState(249);
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
    setState(251);
    match(CobraParser::T__21);
    setState(252);
    match(CobraParser::LPAR);
    setState(253);
    match(CobraParser::TIME);
    setState(254);
    match(CobraParser::RPAR);
    setState(255);
    block();
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
    setState(258);
    match(CobraParser::T__22);
    setState(259);
    match(CobraParser::IDENTIFIER);
    setState(260);
    match(CobraParser::LPAR);
    setState(261);
    parameterList();
    setState(262);
    match(CobraParser::RPAR);
    setState(263);
    block();
    setState(264);
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
    setState(266);
    match(CobraParser::T__23);
    setState(267);
    match(CobraParser::T__13);
    setState(268);
    dataType();
    setState(269);
    match(CobraParser::T__15);
    setState(270);
    match(CobraParser::IDENTIFIER);
    setState(271);
    match(CobraParser::ASSIGN);
    setState(272);
    match(CobraParser::T__4);
    setState(273);
    expression(0);
    setState(278);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(274);
      match(CobraParser::T__3);
      setState(275);
      expression(0);
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(281);
    match(CobraParser::T__5);
    setState(282);
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

CobraParser::MatrixBodyContext* CobraParser::MatrixDeclContext::matrixBody() {
  return getRuleContext<CobraParser::MatrixBodyContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(CobraParser::T__24);
    setState(285);
    match(CobraParser::T__13);
    setState(286);
    dataType();
    setState(287);
    match(CobraParser::T__15);
    setState(288);
    match(CobraParser::IDENTIFIER);
    setState(289);
    match(CobraParser::ASSIGN);
    setState(290);
    matrixBody();
    setState(291);
    match(CobraParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixBodyContext ------------------------------------------------------------------

CobraParser::MatrixBodyContext::MatrixBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CobraParser::MatrixRowContext *> CobraParser::MatrixBodyContext::matrixRow() {
  return getRuleContexts<CobraParser::MatrixRowContext>();
}

CobraParser::MatrixRowContext* CobraParser::MatrixBodyContext::matrixRow(size_t i) {
  return getRuleContext<CobraParser::MatrixRowContext>(i);
}


size_t CobraParser::MatrixBodyContext::getRuleIndex() const {
  return CobraParser::RuleMatrixBody;
}

void CobraParser::MatrixBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixBody(this);
}

void CobraParser::MatrixBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixBody(this);
}


std::any CobraParser::MatrixBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitMatrixBody(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::MatrixBodyContext* CobraParser::matrixBody() {
  MatrixBodyContext *_localctx = _tracker.createInstance<MatrixBodyContext>(_ctx, getState());
  enterRule(_localctx, 40, CobraParser::RuleMatrixBody);
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
    setState(293);
    match(CobraParser::T__4);
    setState(294);
    matrixRow();
    setState(299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(295);
      match(CobraParser::T__3);
      setState(296);
      matrixRow();
      setState(301);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(302);
    match(CobraParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixRowContext ------------------------------------------------------------------

CobraParser::MatrixRowContext::MatrixRowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CobraParser::ExpressionContext *> CobraParser::MatrixRowContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::MatrixRowContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}


size_t CobraParser::MatrixRowContext::getRuleIndex() const {
  return CobraParser::RuleMatrixRow;
}

void CobraParser::MatrixRowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixRow(this);
}

void CobraParser::MatrixRowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixRow(this);
}


std::any CobraParser::MatrixRowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitMatrixRow(this);
  else
    return visitor->visitChildren(this);
}

CobraParser::MatrixRowContext* CobraParser::matrixRow() {
  MatrixRowContext *_localctx = _tracker.createInstance<MatrixRowContext>(_ctx, getState());
  enterRule(_localctx, 42, CobraParser::RuleMatrixRow);
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
    setState(304);
    match(CobraParser::T__4);
    setState(305);
    expression(0);
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(306);
      match(CobraParser::T__3);
      setState(307);
      expression(0);
      setState(312);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(313);
    match(CobraParser::T__5);
   
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
  enterRule(_localctx, 44, CobraParser::RuleParameterList);
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
    setState(315);
    dataType();
    setState(316);
    match(CobraParser::IDENTIFIER);
    setState(323);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CobraParser::T__3) {
      setState(317);
      match(CobraParser::T__3);
      setState(318);
      dataType();
      setState(319);
      match(CobraParser::IDENTIFIER);
      setState(325);
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
  enterRule(_localctx, 46, CobraParser::RuleDataType);
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
    setState(326);
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

//----------------- MatrixIndexExprContext ------------------------------------------------------------------

tree::TerminalNode* CobraParser::MatrixIndexExprContext::IDENTIFIER() {
  return getToken(CobraParser::IDENTIFIER, 0);
}

std::vector<CobraParser::ExpressionContext *> CobraParser::MatrixIndexExprContext::expression() {
  return getRuleContexts<CobraParser::ExpressionContext>();
}

CobraParser::ExpressionContext* CobraParser::MatrixIndexExprContext::expression(size_t i) {
  return getRuleContext<CobraParser::ExpressionContext>(i);
}

CobraParser::MatrixIndexExprContext::MatrixIndexExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void CobraParser::MatrixIndexExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixIndexExpr(this);
}
void CobraParser::MatrixIndexExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CobraListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixIndexExpr(this);
}

std::any CobraParser::MatrixIndexExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CobraVisitor*>(visitor))
    return parserVisitor->visitMatrixIndexExpr(this);
  else
    return visitor->visitChildren(this);
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
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, CobraParser::RuleExpression, precedence);

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
    setState(360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(329);
      match(CobraParser::LPAR);
      setState(330);
      expression(0);
      setState(331);
      match(CobraParser::RPAR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LitExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(333);
      literal();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ArrayAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(334);
      match(CobraParser::IDENTIFIER);
      setState(335);
      match(CobraParser::T__4);
      setState(336);
      expression(0);
      setState(337);
      match(CobraParser::T__5);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(339);
      match(CobraParser::IDENTIFIER);
      setState(340);
      match(CobraParser::LPAR);
      setState(349);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 19756849561600) != 0)) {
        setState(341);
        expression(0);
        setState(346);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CobraParser::T__3) {
          setState(342);
          match(CobraParser::T__3);
          setState(343);
          expression(0);
          setState(348);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(351);
      match(CobraParser::RPAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MatrixIndexExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(352);
      match(CobraParser::IDENTIFIER);
      setState(353);
      match(CobraParser::T__4);
      setState(354);
      expression(0);
      setState(355);
      match(CobraParser::T__5);
      setState(356);
      match(CobraParser::T__4);
      setState(357);
      expression(0);
      setState(358);
      match(CobraParser::T__5);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(373);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(371);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(362);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(363);
          match(CobraParser::POW);
          setState(364);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(365);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(366);
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
          setState(367);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SubsumContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(368);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(369);
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
          setState(370);
          expression(6);
          break;
        }

        default:
          break;
        } 
      }
      setState(375);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
  enterRule(_localctx, 50, CobraParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(382);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CobraParser::INTEGER: {
        _localctx = _tracker.createInstance<CobraParser::IntLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(376);
        match(CobraParser::INTEGER);
        break;
      }

      case CobraParser::DECIMAL: {
        _localctx = _tracker.createInstance<CobraParser::FloatLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(377);
        match(CobraParser::DECIMAL);
        break;
      }

      case CobraParser::CHARACTER: {
        _localctx = _tracker.createInstance<CobraParser::CharLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(378);
        match(CobraParser::CHARACTER);
        break;
      }

      case CobraParser::TEXT: {
        _localctx = _tracker.createInstance<CobraParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(379);
        match(CobraParser::TEXT);
        break;
      }

      case CobraParser::BOOLEAN: {
        _localctx = _tracker.createInstance<CobraParser::BoolLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(380);
        match(CobraParser::BOOLEAN);
        break;
      }

      case CobraParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<CobraParser::IdentifierLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(381);
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
    case 24: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CobraParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);

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

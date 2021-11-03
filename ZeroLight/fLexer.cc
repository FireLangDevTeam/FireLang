#include <string>
#include <vector>

using std::string;
using std::vector;

/* (TNL)Token Names List */
const string TNL[] = {
    // Base arithmetic operators:

    /*
     * Addition           +
     * Subtraction        -
     * Multiplication     *
     * Division           /
     * Modulus            %
     * Power              **
     * Increment          ++
     * Decrement          --
     */
    "Add", "Sub", "Mul", "Div", "Mod", "Pow",
    "Inc", "Dec",
    
    /*
     * Addition           +=
     * Subtraction        -=
     * Multiplication     *=
     * Division           /=
     * Modulus            %=
     * Power              **=
     */
    "AddA", "SubA", "MulA", "DivA", "ModA", "PowA",

    // Base logical operators:

    /*
     * And                &&
     * Or                 ||
     * Not                !
     */
    "And", "Or", "Not",

    // Bit Operators:

    /*
     * Bit Not            ~
     * Bit And            &
     * Bit Or             |
     * Left Shift         <<
     * Right Shift        >>
     */
    "BNot", "BAnd", "BOr", "Lsh", "Rsh",

    // Keywords:

    // Basic Types & const Values:

    // Integer, Character, Float(Decimal), Bool, Null
    "integer", "char", "decimal", "bool", "null",
    // Unsigned identifier
    "unsigned",
    // T(true) F(false)
    "true", "false",

    // Control stream:
    
    // Loop:
    "for", "do", "until", "while",
    // judge:
    "if", "then", "else", "switch", "case", "default",
        
    // Other
    "import", "function", "using", "class", "public", "private",
    
    
    // Punctuations:
    /*
     * semicolon       ;
     * colon           :
     * dot             .
     * arrow          ->
     * brackets       ()
     * brackets       []
     * brackets       {}
     */

    // m: middle, b: big
    "semicol", "col", "dot", "arr", "l_bracket", "r_bracket",
    "lm_bracket", "rm_bracket", "lb_bracket", "rb_backet",

    // Flags:
    "EOF", "identifier", "error"
};

enum TNL_INDEX {
    // Base arithmetic operators:

    /*
     * Addition           +
     * Subtraction        -
     * Multiplication     *
     * Division           /
     * Modulus            %
     * Power              **
     * Increment          ++
     * Decrement          --
     */
    Add, Sub, Mul, Div, Mod, Pow,
    Inc, Dec,

    /*
     * Addition           +=
     * Subtraction        -=
     * Multiplication     *=
     * Division           /=
     * Modulus            %=
     * Power              **=
     */
    AddA, SubA, MulA, DivA, ModA, PowA,

    // Base logical operators:

    /*
     * And                &&
     * Or                 ||
     * Not                !
     */
    And, Or, Not,

    // Bit Operators:

    /*
     * Bit Not            ~
     * Bit And            &
     * Bit Or             |
     * Left Shift         <<
     * Right Shift        >>
     */
    BNot, BAnd, BOr, Lsh, Rsh,

    // Keywords:

    // Basic Types & const Values:

    // Integer, Character, Float(Decimal), Bool, Null
    integer, char_, decimal, bool_, null,
    // Unsigned identifier
    unsigned_,
    // T(true) F(false)
    true_, false_,

    // Control stream:

    // Loop:
    for_, do_, until, while_,
    // judge:
    if_, then, else_, switch_, case_, default_,

    // Other
    import, function, using_, class_, public_, private_,


    // Punctuations:
    /*
     * semicolon       ;
     * colon           :
     * dot             .
     * arrow          ->
     * brackets       ()
     * brackets       []
     * brackets       {}
     */

    // m: middle, b: big
    semicol, col, dot, arr, l_bracket, r_bracket,
    lm_bracket, rm_bracket, lb_bracket, rb_backet,

    // Flags:
    eof, identifier, error
};

class Token {
 public:
  Token() = default;

  Token(string name, string data) {
    this->tok_name = name;
    this->tok_data = data;
  }

  string ToString() {
    return "[TOK_NAME: " + tok_name + ", DATA: " + tok_data + "]\n";
  }

  string tok_name; /**< The name of token. */
  string tok_data; /**< The data of token. */
};

class Lexer {
 public:
  Lexer(string text) {
    this->code = text;
    tokens.clear();
  }

  Token NextToken() {
    char ch; string token;
    int idx = 0;

    auto getChar = [&]() -> char {
      return code.at(idx);
      idx++;
    };

    ch = getChar();

    for (;;) {
      switch (ch) {
        case '\n':
          ch = getChar();

        case ' ':
          ch = getChar();

        case '\t':
          ch = getChar();

        case '\0':
          return Token(TNL[eof], "EOF");

        case '+':
          ch = getChar();
          if (ch == '=') {
            ch = getChar();
            return Token(TNL[AddA], "+=");
          }
          if (ch == '+') {
            ch = getChar();
            return Token(TNL[Inc], "++");
          }
          else return Token(TNL[Add], "+");

        case '-':
          ch = getChar();
          if (ch == '=') {
            ch = getChar();
            return Token(TNL[SubA], "-=");
          }
          if (ch == '-') {
            ch = getChar();
            return Token(TNL[Dec], "--");
          }
          return Token(TNL[Sub], "-");

        case '*':
          ch = getChar();
          if (ch == '=') {
            ch = getChar();
            return Token(TNL[MulA], "*=");
          }
          if (ch == '*') {
            ch = getChar();
            if (ch == '=') {
              ch = getChar();
              return Token(TNL[PowA], "**=");
            }
            return Token(TNL[Pow], "**");
          }
          return Token(TNL[Mul], "*");

        default:
          return Token(TNL[error], "ERROR");
      }
    }
  }

  string code;
  vector<Token> tokens;
};
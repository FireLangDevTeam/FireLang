#pragma once
#include <string>

using std::string;

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

    // Key words:

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
    "if", "then", "else", "switch", "case", "default"
        
    // Other
    "import", "function", "using",
    
    
    // Punctuations:
    /*
     * semicolon       ;
     * colon           ;
     */
    "semicol", "semi"
};

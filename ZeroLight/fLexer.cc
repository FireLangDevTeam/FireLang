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
    "BNot", "BAnd", "BOr", "Lsh", "Rsh"
};
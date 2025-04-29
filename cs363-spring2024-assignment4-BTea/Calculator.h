// Calculator.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "ExprBuilder.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

class Calculator
{
    public:
        // Default constructor referencing builder
        Calculator (Expr_Builder & b);
        // Deconstructor
        ~Calculator (void);

        /**
         * Parses infix expression 
         * 
         * @param infix 
         * @return true 
         * @return false 
         */
        bool parse_expr (const std::string & infix);
        /**
         * Evalutes the infix expression
         * 
         * @param infix 
         * @return int 
         */
        int evaluate (const std::string & infix);

    private:
        Expr_Builder * builder_;
};

#endif
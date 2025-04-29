// PostfixExpr.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _POSTFIXEXPR_H_
#define _POSTFIXEXPR_H_

#include "MathExpr.h"
#include <string>

class Postfix_Expr : public Math_Expr
{
    public:
        // Default Constructor referencing postfix expression
        Postfix_Expr (const std::string & postExpr);
        // Deconstructor
        virtual ~Postfix_Expr (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         * 
         * @return int      Result of operation
         */
        virtual int eval (void) const;
    
    private:
        std::string postfix_Expr_;
};

#endif
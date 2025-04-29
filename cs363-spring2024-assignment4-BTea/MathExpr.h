// MathExpr.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _MATHEXPR_H_
#define _MATHEXPR_H_

class Math_Expr
{
    public:
        // Default Constructor
        Math_Expr (void);
        // Deconstructor
        virtual ~Math_Expr (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         *  
         * @return int      Result of operation
         */
        virtual int eval (void) = 0;
};

#endif
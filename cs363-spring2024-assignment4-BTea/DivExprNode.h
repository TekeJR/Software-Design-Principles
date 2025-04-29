// DivExprNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _DIVEXPRNODE_H_
#define _DIVEXPRNODE_H_

#include "binaryExprNode.h"

class Div_Expr_Node : public Binary_Expr_Node
{
    public:
        // Default Constructor
        Div_Expr_Node (void);
        // Destructor
        virtual ~Div_Expr_Node (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         * @param num1 
         * @param num2 
         * @return int      Result of operation
         */
        virtual int eval (int num1, int num2);
        /**
         * Accepts visitor node
         * 
         * @param v 
         */
        virtual void accept (Expr_Node_Visitor & v);
};
#endif
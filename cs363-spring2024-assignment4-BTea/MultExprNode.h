// MultExprNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _MULTEXPRNODE_H_
#define _MULTEXPRNODE_H_

#include "binaryExprNode.h"

class Mult_Expr_Node : public Binary_Expr_Node
{
    public:
        // Default Constructor
        Mult_Expr_Node (void);
        // Deconstructor
        virtual ~Mult_Expr_Node (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         * @param num1 
         * @param num2 
         * @return int      Result of operation
         */
        virtual int eval (int num1, int num2);
};
#endif
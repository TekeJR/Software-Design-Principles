// SubExprNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _SUBEXPRNODE_H_
#define _SUBEXPRNODE_H_

#include "binaryExprNode.h"

class Sub_Expr_Node : public Binary_Expr_Node
{
    public:
        // Default Constructor
        Sub_Expr_Node (void);
        // Deconstructor
        virtual ~Sub_Expr_Node (void);

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
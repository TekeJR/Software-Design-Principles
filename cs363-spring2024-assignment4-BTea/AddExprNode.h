// AddExprNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _ADDEXPRNODE_H_
#define _ADDEXPRNODE_H_

#include "binaryExprNode.h"

class Add_Expr_Node : public Binary_Expr_Node
{
    public:
        // Default Constructor
        Add_Expr_Node (void);
        // Destructor
        virtual ~Add_Expr_Node (void);

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
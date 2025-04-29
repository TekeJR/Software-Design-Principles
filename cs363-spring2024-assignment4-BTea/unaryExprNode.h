// unaryExprNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _UNARYEXPRNODE_H_
#define _UNARYEXPRNODE_H_

#include "exprNode.h"

class Unary_Expr_Node : public Expr_Node 
{
    public:
        // Default Constructor
        Unary_Expr_Node (void);
        // Deconstructor
        virtual ~Unary_Expr_Node (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         *  
         * @return int      Result of operation
         */
        virtual int eval (void) = 0;
    protected:
        Expr_Node * child_;
};
#endif
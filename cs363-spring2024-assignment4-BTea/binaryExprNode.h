// binaryExprNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _BINARYEXPRNODE_H_
#define _BINARYEXPRNODE_H_

#include "exprNode.h"

class Binary_Expr_Node : public Expr_Node
{
    public:
        // Defualt Constructor with left and right nodes
        Binary_Expr_Node (Expr_Node * left, Expr_Node * right);
        // Destructor
        virtual ~Binary_Expr_Node (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         * @return int 
         */
        virtual int eval (void);
        /**
         * Accepts visitor node
         * 
         * @param v 
         */
        virtual void accept (Expr_Node_Visitor & v);

        // Accessors to the left and right nodes
        Expr_Node * left() const { return left_; }
        Expr_Node * right() const{ return right_; }
    protected:
        Expr_Node * right_;
        Expr_Node * left_;
};
#endif
// TreeExpr.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _TREEEXPR_H_
#define _TREEEXPR_H_

#include "MathExpr.h"
#include "exprNode.h"
#include "EvalExprTree.h"

class Tree_Expr : public Math_Expr
{
    public:
        // Default Constructor with Expr_node pointer
        Tree_Expr (Expr_Node * root);
        // Deconstructor
        virtual ~Tree_Expr (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         *  
         * @return int      Result of operation
         */
        virtual int eval (void) const;
        /**
         * Accepts visitor node
         * 
         * @param v 
         */
        virtual void accept (Expr_Node_Visitor & v);

    private:
        Expr_Node * root_;
};

#endif
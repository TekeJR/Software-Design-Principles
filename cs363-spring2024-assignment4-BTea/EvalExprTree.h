// EvalExprTree.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _EVALEXPRTREE_H_
#define _EVALEXPRTREE_H_

#include "ExprNodeVisitor.h"

class Eval_Expr_Tree : public Expr_Node_Visitor
{
    public:
        // Defualt Constructor
        Eval_Expr_Tree (void);
        // Destructor
        virtual ~Eval_Expr_Tree (void);
        // Various methods to visit different operator nodes
        virtual void Visit_Addition_Node (const Add_Expr_Node & node);
        virtual void Visit_Subtraction_Node (const Sub_Expr_Node & node);
        virtual void Visit_Multiplication_Node (const Mult_Expr_Node & node);
        virtual void Visit_Division_Node (const Div_Expr_Node & node);
        virtual void Visit_Modulus_Node (const Mod_Expr_Node & node);
        virtual void Visit_Number_Node (const Num_Node & node);

        /**
         * Returns the result of the operaton
         * 
         * @return int 
         */
        int result (void) const;

    private:
        int result_;
        int left_result;
        int right_result;
};

#endif
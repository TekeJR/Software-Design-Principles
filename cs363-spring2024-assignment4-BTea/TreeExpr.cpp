// TreeExpr.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "TreeExpr.h"

Tree_Expr::Tree_Expr (Expr_Node * root)
    :root_(root)
{}

int Tree_Expr::eval (void) const
{
    Eval_Expr_Tree eval;
    root_->accept(eval);
    return eval.result();

}

void Tree_Expr::accept (Expr_Node_Visitor & v)
{
    root_->accept(v);
}
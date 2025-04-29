// AddExprNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "AddExprNode.h"

Add_Expr_Node::Add_Expr_Node (void) {}

int Add_Expr_Node::eval (int num1, int num2)
{
    return num1 + num2;
}

void Add_Expr_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Addition_Node(*this);
}
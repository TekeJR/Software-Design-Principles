// SubExprNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "SubExprNode.h"

Sub_Expr_Node::Sub_Expr_Node (void) {}

int Sub_Expr_Node::eval (int num1, int num2)
{
    return num1 - num2;
}

void Sub_Expr_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Subtraction_Node(*this);
}
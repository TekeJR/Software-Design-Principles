// DivExprNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "DivExprNode.h"

Div_Expr_Node::Div_Expr_Node (Expr_Node * left, Expr_Node * right)
    :Binary_Expr_Node(left, right)
{}

int Div_Expr_Node::eval (int num1, int num2)
{
    return num1 / num2;
}

void Div_Expr_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Division_Node(*this);
}
// ModExprNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "ModExprNode.h"

Mod_Expr_Node::Mod_Expr_Node (void) {}

int Mod_Expr_Node::eval (int num1, int num2)
{
    return num1 % num2;
}

void Mod_Expr_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Modular_Node(*this);
}
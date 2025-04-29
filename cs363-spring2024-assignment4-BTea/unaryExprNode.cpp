// unaryExprNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "unaryExprNode.h"

Unary_Expr_Node::~Unary_Expr_Node (void)

{}

int Unary_Expr_Node::eval (void)
{
    if (this->child_)
    {
        return this->child_->eval();
    }
}
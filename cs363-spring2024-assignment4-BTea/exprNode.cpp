// exprNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "exprNode.h"

Expr_Node::Expr_Node (void) {}

Expr_Node::~Expr_Node (void) {}

// precedence
// Returns 0, 1, or 2 depending on the case result.
int Expr_Node::precedence (char op)
{
    switch (op)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    };
}



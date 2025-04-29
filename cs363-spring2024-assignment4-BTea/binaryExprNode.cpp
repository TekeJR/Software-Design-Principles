// binaryExprNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "binaryExprNode.h"

Binary_Expr_Node::Binary_Expr_Node (Expr_Node * left, Expr_Node * right) 
    :left_(left),
    right_(right)
{}

Binary_Expr_Node::~Binary_Expr_Node (void) {}

int Binary_Expr_Node::eval (void) 
{
    int left_Val = left_->eval();
    int rightVal = right_->eval();
    
}

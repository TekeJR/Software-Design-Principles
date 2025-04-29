// NumNode.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "NumNode.h"

Num_Node::Num_Node (int value) 
    :value_(value)
{}

Num_Node::~Num_Node (void) {}

int Num_Node::eval (void) const
{
    return value_;
}

void Num_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Number_Node(*this);
}

int Num_Node::get_value (void)
{
    return value_;
}
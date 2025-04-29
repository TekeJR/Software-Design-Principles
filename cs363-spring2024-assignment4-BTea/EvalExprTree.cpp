// EvalExprTree.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "EvalExprTree.h"
#include <iostream>

Eval_Expr_Tree::Eval_Expr_Tree (void)
    :result_(0)
{}

Eval_Expr_Tree::~Eval_Expr_Tree (void)
{}

void Eval_Expr_Tree::Visit_Addition_Node (const Add_Expr_Node & node)
{
    node.left()->accept(*this);
    left_result = this->result_;
    node.right()->accept(*this);
    right_result = this->result_;

    result_ = left_result + right_result;
}

void Eval_Expr_Tree::Visit_Subtraction_Node (const Sub_Expr_Node & node)
{
    node.left()->accept(*this);
    left_result = this->result_;
    node.right()->accept(*this);
    right_result = this->result_;

    result_ = left_result - right_result;
}

void Eval_Expr_Tree::Visit_Multiplication_Node (const Mult_Expr_Node & node)
{
    node.left()->accept(*this);
    left_result = this->result_;
    node.right()->accept(*this);
    right_result = this->result_;

    result_ = left_result * right_result;
}

void Eval_Expr_Tree::Visit_Division_Node (const Div_Expr_Node & node)
{
    node.left()->accept(*this);
    left_result = this->result_;
    node.right()->accept(*this);
    right_result = this->result_;

    if (right_result != 0)
        result_ = left_result / right_result;
    else
        throw std::runtime_error("Division by zero");
    
}

void Eval_Expr_Tree::Visit_Modulus_Node (const Mod_Expr_Node & node)
{
    node.left()->accept(*this);
    left_result = this->result_;
    node.right()->accept(*this);
    right_result = this->result_;

    if (right_result != 0)
        result_ = left_result % right_result;
    else
        throw std::runtime_error("Division by zero");
}

void Eval_Expr_Tree::Visit_Number_Node (const Num_Node & node)
{
    result_ = node.eval();
}

int Eval_Expr_Tree::result () const
{
    return this->result_;
}

// ExprTreeBuilder.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "ExprTreeBuilder.h"

Expr_Tree_Builder::Expr_Tree_Builder (void) {}

Expr_Tree_Builder::~Expr_Tree_Builder (void) {}

void Expr_Tree_Builder::start_expression (void)
{
    this->tree_ = new Tree_Expr();
}

void Expr_Tree_Builder::build_number (int n)
{
    Num_Node * node = new Num_Node(n);
}

void Expr_Tree_Builder::build_add_operator (void)
{
    Add_Expr_Node * node = new Add_Expr_Node();
}

void Expr_Tree_Builder::build_sub_operator (void)
{
    Sub_Expr_Node * node = new Sub_Expr_Node();
}

void Expr_Tree_Builder::build_mult_operator (void)
{
    Mult_Expr_Node * node = new Mult_Expr_Node();
}

void Expr_Tree_Builder::build_div_operator (void)
{
    Div_Expr_Node * node = new Div_Expr_Node();
}

void Expr_Tree_Builder::build_mod_operator (void)
{
    Mod_Expr_Node * node = new Mod_Expr_Node();
}

void Expr_Tree_Builder::build_open_parenthesis (void)
{
    Open_Parenth_Node * node = new Open_Parenth_Node();
}

void Expr_Tree_Builder::build_close_parenthesis (void)
{
    Close_Parenth_Node * node = new Close_Parenth_Node();
}
// Calculator.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "Calculator.h"

Calculator::Calculator (Expr_Builder & builder)
    :builder_(&builder)
{}

Calculator::~Calculator (void)
{
}

bool Calculator::parse_expr (const std::string & infix)
{
    std::istringstream input (infix);
    std::string token;

    builder.start_expression();

    while (!input.eof())
    {
        input >> token;
        if (token == "+")
        {
            this->builder_.build_add_operator();
        } else if (token == "-")
        {
            this->builder_.build_sub_operator();
        } else if (token == "*")
        {
            this->builder_.build_mult_operator();
        } else if (token == "/")
        {
            this->builder_.build_div_operator();
        } else if (token == "%")
        {
            this->builder_.build_mod_operator();
        } else if (token == "(")
        {
            this->builder_.build_open_parenthesis();
        } else if (token == ")")
        {
            this->builder_.build_close_parenthesis();
        } else {
            this->builder_.build_number(value);
        }
    }
    return true;
}

int Calculator::evaluate (const std::string & infix)
{
    if (!this->parse_expr (infix))
    {
        throw std::runtime_error("Bad expression");
    }
    std::unique_ptr <Math_Expr> expr (this->builder_->get_expression());
    if (nullptr == expr.get())
    {
        throw std::runtime_error ("No expression");
    }
    return expr->eval();
}
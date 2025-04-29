// driver.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include <iostream>
#include <string>
#include "Calculator.h"
#include "ExprBuilder.h"
#include "ExprTreeBuilder.h"
 
int main(int argc, char* argv[])
{   
    std::string infix;
    bool continue_loop = true;
    while (continue_loop)
    {
        Expr_Tree_Builder * builder = new Expr_Tree_Builder();
        Calculator * calc = new Calculator(*builder);

        std::cout << "Type an expression or type QUIT: ";
        std::cin >> infix;
        if (infix == "QUIT")
        {
            continue_loop = false;
            break;
        }

        calc->evaluate(infix);
        
    }
    return 0;
}
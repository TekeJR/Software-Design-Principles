// ExprBuilder.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _EXPRBUILDER_H_
#define _EXPRBUILDER_H_

#include "MathExpr.h"

class Expr_Builder
{
    public:
        // Default Constructor
        Expr_Builder (void);
        // Deconstructor
        virtual ~Expr_Builder (void);

        /**
         * Creates a Tree object to initiate building
         * 
         */
        virtual void start_expression (void);

        // Build methods for different operators and numbers
        virtual void build_number (int n) = 0;
        virtual void build_add_operator (void) = 0;
        virtual void build_sub_operator (void) = 0;
        virtual void build_mult_operator (void) = 0;
        virtual void build_div_operator (void) = 0;
        virtual void build_mod_operator (void) = 0;
        virtual void build_open_parenthesis (void) = 0;
        virtual void build_close_parenthesis (void) = 0;

        /**
         * Get the expression object
         * 
         * @return Math_Expr* 
         */
        virtual Math_Expr * get_expression (void) = 0;

};

#endif
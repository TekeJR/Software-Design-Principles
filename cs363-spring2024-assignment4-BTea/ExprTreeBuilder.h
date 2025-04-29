// ExprTreeBuilder.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _EXPRTREEBUILDER_H_
#define _EXPRTREEBUILDER_H_

#include "ExprBuilder.h"
#include "MathExpr.h"
#include "TreeExpr.h"
#include "NumNode.h"
#include "AddExprNode.h"
#include "SubExprNode.h"
#include "MultExprNode.h"
#include "DivExprNode.h"
#include "ModExprNode.h"
#include "OpenParenthNode.h"
#include "CloseParenthNode.h"

class Expr_Tree_Builder : public Expr_Builder
{
    public:
        // Default Constructor
        Expr_Tree_Builder (void);
        // Deconstructor
        virtual ~Expr_Tree_Builder (void);

        /**
         * Creates a Tree object to initiate building
         * 
         */
        virtual void start_expression (void);

        /**
         * Builds Number given n
         * 
         * @param n 
         */
        virtual void build_number (int n);
        // Various methods for building operators
        virtual void build_add_operator (void);
        virtual void build_sub_operator (void);
        virtual void build_mult_operator (void);
        virtual void build_div_operator (void);
        virtual void build_mod_operator (void);
        virtual void build_open_parenthesis (void);
        virtual void build_close_parenthesis (void);

        /**
         * Get the expression object
         * 
         * @return Math_Expr* 
         */
        virtual Math_Expr * get_expression (void) { return this->tree_; }

    private:
        Tree_Expr * tree_;

};

#endif
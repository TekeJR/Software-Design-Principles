// ExprNodeVisitor.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _EXPRNODEVISITOR_H_
#define _EXPRNODEVISITOR_H_

#include "AddExprNode.h"
#include "SubExprNode.h"
#include "MultExprNode.h"
#include "DivExprNode.h"
#include "ModExprNode.h"
#include "NumNode.h"

class Expr_Node_Visitor
{
    public:
        // Default Constructor
        Expr_Node_Visitor (void);
        // Deconstructor
        virtual ~Expr_Node_Visitor (void);

        // Various methods to visit different operator nodes
        virtual void Visit_Addition_Node (const Add_Expr_Node & node);
        virtual void Visit_Subtraction_Node (const Sub_Expr_Node & node);
        virtual void Visit_Multiplication_Node (const Mult_Expr_Node & node);
        virtual void Visit_Division_Node (const Div_Expr_Node & node);
        virtual void Visit_Modulus_Node (const Mod_Expr_Node & node);
        virtual void Visit_Number_Node (const Num_Node & node);
};

#endif
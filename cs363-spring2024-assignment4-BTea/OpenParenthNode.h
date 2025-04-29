// OpenParenthNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _OPENPARENTHNODE_H_
#define _OPENPARENTHNODE_H_

#include "binaryExprNode.h"

class Open_Parenth_Node : public Binary_Expr_Node
{
    public:
        // Default Constructor
        Open_Parenth_Node (void);
        // Destructor
        virtual ~Open_Parenth_Node (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         * @param num1 
         * @param num2 
         * @return int      Result of operation
         */
        virtual int eval (int num1, int num2);
};
#endif


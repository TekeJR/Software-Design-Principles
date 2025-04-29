// exprNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _EXPRNODE_H_
#define _EXPRNODE_H_

#include "Command.h"

class Expr_Node : public Command
{
    public:
        // Default Constructor
        Expr_Node (void);
        // Deconstructor
        virtual ~Expr_Node (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         * 
         * @return int      Result of operation
         */
        virtual int eval (void) = 0;
        /**
         * Accepts visitor node
         * 
         * @param v 
         */
        virtual void accept (Expr_Node_Visitor & v) = 0;
        /**
         * Determines the precedence of the given operator 
         * 
         * @param op 
         * @return int 
         */
        int precedence (char op);
};
#endif
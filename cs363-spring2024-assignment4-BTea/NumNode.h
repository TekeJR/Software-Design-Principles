// NumNode.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _NUMNODE_H_
#define _NUMNODE_H_

#include "Command.h"

class Num_Node : public Command
{
    public:
        // Default Constructor with value
        Num_Node (int value);
        // Deconstructor
        virtual ~Num_Node (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         *  
         * @return int      Result of operation
         */
        virtual int eval (void) const;
        /**
         * Accepts visitor node
         * 
         * @param v 
         */
        virtual void accept (Expr_Node_Visitor & v);
        /**
         * Get the value object
         * 
         * @return int 
         */
        int get_value (void);

    private:
        int value_;
};
#endif
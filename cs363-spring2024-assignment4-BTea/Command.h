// Command.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _COMMAND_H_
#define _COMMAND_H_

// Foward declaring for accept method
class Expr_Node_Visitor;

class Command
{
    public:
        // Default Constructor
        Command (void);
        // Destructor
        virtual ~Command (void);

        /**
         * Evaluate 2 inputs according to respective operation. 
         * 
         *  
         * @return int      Result of operation
         */
        virtual int eval (void);
        /**
         * Accepts visitor node
         * 
         * @param v 
         */
        virtual void accept (Expr_Node_Visitor & v);
};

#endif
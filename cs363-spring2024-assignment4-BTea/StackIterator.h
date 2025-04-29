// StackIterator.h
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#ifndef _STACKITERATOR_H_
#define _STACKITERATOR_H_

#include "Stack.h"

template <typename T>
class Stack_Iterator 
{
    
    public:
        // Type definition of the type
        typedef T type;
        
        // Default Constructor referencing the stack
        Stack_Iterator (Stack <T> & a);

        // Deconstructor
        ~Stack_Iterator (void);

        /**
         * Returns 0 or 1 if done iterating
         * 
         * @return true 
         * @return false 
         */
        bool is_done (void);
        /**
         * Advances iterator forward 
         * 
         */
        void advance (void);
        T & operator * (void);
        T * operator -> (void);

    private:
        Stack <T> & a_;
        size_t curr_;
};

#endif
// StackIterator.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "StackIterator.h"

template <typename T>
Stack_Iterator <T>::Stack_Iterator (Stack <T> & a)
    :a_ (a),
    curr_ (0)
{}

template <typename T>
Stack_Iterator <T>::~Stack_Iterator (void)
{}

template <typename T>
bool Stack_Iterator <T>::is_done (void)
{
    return this->curr_ >= this->a_.cur_size_;
}

template <typename T>
void Stack_Iterator <T>::advance (void)
{
    ++this->curr_;
}

template <typename T>
T & Stack_Iterator <T>::operator * (void)
{
    return this->a.data_[this->curr_];
}

template <typename T>
T * Stack_Iterator <T>::operator-> (void)
{
    return &this->a_.data_[this->curr_];
}
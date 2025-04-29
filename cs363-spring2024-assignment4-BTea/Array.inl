// Array.inl
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "Array.h"

// size
// returns the current size of the array.
template <typename T>
inline
size_t Array <T>::size (void) const
{
	return this->cur_size_;
}


// max_size
// returns the max size of the array.
template <typename T>
inline
size_t Array <T>::max_size (void) const
{
    return this->max_size_;
}

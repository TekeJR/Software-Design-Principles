// Stack.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

//
// Stack
//

#include <iostream>

// Stack Default
template <typename T>
Stack <T>::Stack(void)
	:data_(nullptr),
	cur_size_(0),
	max_size_(0)
{};

// Stack Copy
// Copies stack to a new stack
template <typename T>
Stack <T>::Stack (const Stack & stack)
	:data_(nullptr),
	cur_size_(stack.cur_size_),
	max_size_(stack.max_size_)
{
	data_ = new T[max_size_];
	for (size_t i = 0; i < cur_size_; i++) 
    {
		data_[i] = stack.data_[i];
	}
};

// ~Stack
// Deconstructor
template <typename T>
Stack <T>::~Stack (void)
{
	delete[] this->data_;
};

// push
// If the stack is not full, copy data's first value and pushes it to the
// top of the stack
template <typename T>
void Stack <T>::push (T element)
{
    if (is_full())
    {
        return;
	}
	data_[cur_size_++] = element;
};


// pop
// Pops the first value on the stack if the stack is not empty.
template <typename T>
void Stack <T>::pop (void)
{
	if (is_empty()) 
    {
		std::cout << "Stack is empty" << std::endl;
	}
	top()-1 ;
};

// operator =
// If the current stack does not equal &rhs, deletes this data and sets current size
// and max size value to rhs values. A new stack is created and the rhs data is 
// put into the new stack.
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	if (this != &rhs) 
    {
		delete[] this->data_;
		this.cur_size_ = rhs.cur_size_;
		this.max_size_ = rhs.max_size_;
		data_ = new T[this.max_size_];
		for (size_t i = 0; i < this.cur_size_; i++) {
			data_[i] = rhs.data[i];
		}
	}
	return *this;
};

// top()
// Checks if stack is empty and throws empty exception if true. Returns data's
// current size - 1 to retreive top of stack.
template <typename T>
T Stack <T>::top() const {
    if (is_empty()) {
        std::cout << "Stack is empty" << std::endl;
    }
    return data_[cur_size_ - 1];
};


// is_empty
// Checks if top element is -1 and returns 1 (true) or 0 (false).
template <typename T>
bool Stack <T>::is_empty() const 
{
    if (top() == -1) 
    {
        return 1;
    } else {
        return 0;
    }
};

// is_full
// Checks if top element exceeds current size - 1. 1 (true) or 0 (false).
template <typename T>
bool Stack <T>::is_full() const 
{
    if (top() == (cur_size_ - 1)) 
    {
        return 1;
    } else {
        return 0;
    }
};

// Size
// Returns the current size of the stack.
template <typename T>
size_t Stack <T>::size() const 
{
    return cur_size_;
};


// clear
// Clears all data from stack, setting to null. Current and Max size are set to 0.
template <typename T>
void Stack <T>::clear (void)
{
    delete[] data_;
    data_ = nullptr;
	cur_size_ = 0;
    max_size_ = 0;
};


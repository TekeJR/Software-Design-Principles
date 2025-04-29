// Array.cpp
// Assignment 4 - J.Hill Cs363
// Brendan Tea

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
// Simple Default constructor with no values.
template <typename T>
Array <T>::Array (void)
	:data_(nullptr),
	cur_size_(0),
	max_size_(0)
{

}

//
// Array (size_t)
// Initializing constructor with length.
template <typename T>
Array <T>::Array (size_t length)
	:data_(new T[length]),
	cur_size_(length),
	max_size_(length)
{

}

//
// Array (size_t, char)
// Initializing constructor with length and fill value.
template <typename T>
Array <T>::Array (size_t length, T fill)
	:data_(new T[length]),
	cur_size_(length),
	max_size_(length)
{
	for (int i = 0; i < cur_size_; i++) {
		data_[i] = fill;
	}
}

//
// Array (const Array &)
// Copy constructor with source array "arr".
template <typename T>
Array <T>::Array (const Array & arr)
	:data_(new T[arr.cur_size_]),
	cur_size_(arr.cur_size_),
	max_size_(arr.max_size_)
{

}

//
// ~Array. 
// Deconstructor
template <typename T>
Array <T>::~Array (void)
{
	delete[] this->data_;
}

//
// operator =
// If this array doesn't equal reference to rhs, it will check again if the array maxsize if less than the rhs cursize. 
// Deletes the data and reassigns values to the max and cur sizes. Assigns new data to the new template array, otherwise, returns pointer to this array.
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
	if (this != &rhs) {
		if (this.max_size_ < rhs.cur_size_) {
			delete[] this->data_;
			this.cur_size_ = rhs.cur_size_;
			this.max_size_ = rhs.max_size_;
			data_ = new T[cur_size_];
		}
		for (size_t i = 0; i < cur_size_; i++) {
			this->data_[i] = rhs.data_[i];
		}
	}
	return *this;
}

//
// operator []
// checks for if index is out of range and throws out of range exception, otherwise, it returns the data at the index.
template <typename T>
T & Array <T>::operator [] (size_t index)
{
	if (index >= cur_size_) {
		throw std::out_of_range("Invalid Index");
	}
	return data_[index];
}

//
// operator [] 
// checks for if index is out of range and throws out of range exception, otherwise, it returns the data at the index. Cannot be changed.
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
	if (index >= cur_size_) {
			throw std::out_of_range("Invalid Index");
		}
	return data_[index];
}

//
// get
// Retrieves a data point at a given index.
template <typename T>
T Array <T>::get (size_t index) const
{
	if (index > cur_size_) {
		throw std::out_of_range("Index out of range");
	}
	return data_[index];
}

//
// set
// Sets a data point at a given index.
template <typename T>
void Array <T>::set (size_t index, T value)
{
	if (index > cur_size_) {
		throw std::out_of_range("Index out of range");
	}
	data_[index] = value;
}

//
// resize
// Resizes the Array to the given new size.
template <typename T>
void Array <T>::resize (size_t new_size)
{
	if (new_size < cur_size_) {
		cur_size_ = new_size;
	}
	else if (new_size > cur_size_) {
		max_size_ = new_size;
		cur_size_ = new_size;
	}
}

//
// find (char)
// Locates a specific element in the array.
template  <typename T>
int Array <T>::find (T ch) const
{
	for (size_t i = 0; i < cur_size_; i++) {
		if (data_[i] == ch) {
			return data_[i];
		}
	}
	return -1;
}

//
// find (char, size_t) 
// Locates a specific element in the array, starting from a given index.
template <typename T>
int Array <T>::find (T ch, size_t start) const
{
	if (start > cur_size_) {
		throw std::out_of_range("Start is out of range");
	}
	for (size_t i = start; i < cur_size_; i++) {
		if (data_[i] == ch) {
			return data_[i];
		}
	}
	return -1;
}

//
// operator ==
// Tests if the array is equal to another array.
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{
	if (this == &rhs) {
		return true;
	}
	if (this != &rhs) {
		return false;
	}
}

//
// operator !=
// Tests if the array is not equal to another array.
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{
	if (this != &rhs) {
		return true;
		}
	if (this == &rhs) {
		return false;
	}
	
}

//
// fill
// Fills the array with the given input.
template <typename T>
void Array <T>::fill (T ch)
{
	for (size_t i = 0; i < cur_size_; i++) {
		data_[i] = ch;
	}
}

//
// shrink
// Shrinks the array to reclaim unused space.
template <typename T>
void Array <T>::shrink()
{
	resize(cur_size_);
}

//
// reverse
// Reverse the contents in the array.
template <typename T>
void Array <T>::reverse(void)
{
	for (size_t i = 0; i < cur_size_ / 2; ++i) {
		char temp = data_[i];
		data_[i] = data_[cur_size_ - i - 1];
		data_[cur_size_ - i - 1] = temp;
	}
}
/*
//
// slice (size_t begin)
// Return a shallow copy of a portion of the array. 
template <typename T>
Array <T>::slice(size_t begin) const
{

}
//
// slice (size_t begin, size_t end)
// Return a shallow copy of a portion of the array from a beginning point and end point.
template <typename T>
Array <T>::slice(size_t begin, size_t end) const
{

}
*/

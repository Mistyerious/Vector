//
// Created by dyeaaaronjr on 11/13/2023.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <stdexcept>

template <typename T>
class Vector {
  T *array;
  size_t capacity;
  size_t length;

 public:
  Vector() : capacity(1), length(0), array(new int[1]) {};
  explicit Vector(size_t size) : capacity(size), length(1), array(new int[size]) {};

  size_t size() const { return length; }

  inline void push_back(T element) { insert(length, element); }
  void insert(size_t index, T element) {
	  if (index >= length) {
		  if (index >= capacity) {

			  int oldCapacity = capacity;

			  while (capacity < length) {
				  capacity *= 2;
			  }

			  T *old = new T[capacity];

			  memcpy(old, array, oldCapacity * sizeof(T));

			  delete[] array;

			  array = old;
		  }
		  length = index + 1;
	  } else {
		  length++;
	  }

	  array[index] = element;
  }
  T &operator[](size_t index) const {
	if (index >= length) {
		throw std::range_error("index out of range");
	}
	return array[index];
  }
  ~Vector() {
	  delete[] array;
  }
};

#endif  // VECTOR_VECTOR_H

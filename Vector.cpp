//
// Created by dyeaaaronjr on 11/13/2023.
// Modified by null8626 on 14/11/2023.
//

#include "Vector.h"

#include <iostream>
#include <stdexcept>

template <typename T>
Vector<T>::Vector() : capacity(1), array(new T[1]), length(0) {}

template <typename T>
Vector<T>::Vector(size_t size)
    : capacity(size), array(new T[size]), length(0) {}

template <typename T>
void Vector<T>::insert(size_t index, T element) {
  if (index >= length) {
    length = index + 1;

    if (length >= capacity) {
      while (capacity < length) {
        capacity *= 2;
      }

      std::realloc(array, capacity * sizeof(T));
    }
  }

  array[index] = element;
}

template <typename T>
T &Vector<T>::operator[](size_t index) const {
  if (index >= length) {
    throw std::range_error("index out of range");
  }

  return array[index];
}

template <typename T>
Vector<T>::~Vector() {
  delete[] array;
}
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

  void resize_to_fit(size_t index) {
    int newCapacity = capacity;
    while (newCapacity <= index) {
      newCapacity *= 2;
    }

    T* temp = new T[newCapacity];

    memcpy(temp, array, sizeof(T) * capacity);
    capacity = newCapacity;
    delete[] array;
    array = temp;
  }

 public:
  Vector() : capacity(1), length(0), array(new int[1]){};
  explicit Vector(size_t size)
      : capacity(size), length(1), array(new int[size]){};

  size_t size() const { return length; }

  inline void push_back(T element) { insert(length, element); }

  void insert(size_t index, T element) {
    if (index >= capacity) {
      resize_to_fit(index);
    }

    if (index >= length) {
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
  ~Vector() { delete[] array; }
};

#endif  // VECTOR_VECTOR_H

//
// Created by dyeaaaronjr on 11/13/2023.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

template <typename T>
class Vector {
  T *array;
  size_t capacity;
  size_t length;

 public:
  Vector();
  explicit Vector(size_t size);

  constexpr size_t size() { return length; }

  inline void push_back(T element) { insert(length, element); }
  void insert(size_t index, T element);
  T &operator[](size_t index) const;
};

#endif  // VECTOR_VECTOR_H

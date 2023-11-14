#include <iostream>

#include "Vector.h"

int main() {
  Vector<int> vec;

  vec.insert(0, 100);
  vec.insert(1, 1000);

//  vec.push_back(10000);

  std::cout << vec.size() << std::endl;

  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << std::endl;
  }

  return 0;
}

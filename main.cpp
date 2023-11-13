#include <iostream>
#include "Vector.h"

int main() {

	Vector vec;

	vec.insert(0, 100);
	vec.insert(1, 1000);

	std::cout << vec.length << std::endl;

	for(int i = 0; i < vec.length; i++) {
		std::cout << vec[i] << std::endl;
	}

	return 0;
}

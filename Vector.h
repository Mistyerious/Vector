//
// Created by dyeaaaronjr on 11/13/2023.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

class Vector {
public:
	int* array;
	int capacity;
	int length;

	Vector();
	explicit Vector(int size);

	void push_back(int element);
	void insert(int index, int element);
	int operator[](int index) const;
};


#endif //VECTOR_VECTOR_H

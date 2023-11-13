//
// Created by dyeaaaronjr on 11/13/2023.
//

#include <iostream>
#include <optional>
#include "Vector.h"

Vector::Vector() {
	this->capacity = 1;
	this->array = new int[1];
	this->length = 0;
}

Vector::Vector(int size) {
	this-> capacity = size;
	this-> array = new int[size];
	this-> length = 0;
}

void Vector::push_back(int element) {

}
void Vector::insert(int index, int element) {

	if(this->length == this->capacity) {
		this->capacity *= 2;
		std::realloc(this->array, this->capacity);
	}

	this->array[index] = element;

	this->length += 1;
}

int Vector::operator[](int index) const {
	if(index >= this->length) {
		{}
	}
	return this->array[index];
}
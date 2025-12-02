//============================================================================
// Name        : TP.cpp
// Author      : D.E.
// Version     :
// Copyright   : ECM2015
//============================================================================

#include "Vector.h"

#include <iostream>
using namespace std;

Vector::Vector(int n) {
	size = n;
	elements = new double[size];
}

Vector::Vector(double a) {
	size = 1;
	elements = new double[size];
	elements[0] = a;
}

Vector::Vector(double a, double b) {
	size = 2;
	elements = new double[size];
	elements[0] = a;
	elements[1] = b;
}

Vector::Vector(double a, double b, double c) {
	size = 3;
	elements = new double[size];

	elements[0] = a;
	elements[1] = b;
	elements[2] = c;
}

Vector::Vector() {
	size = 0;
	elements = NULL;
}

Vector::~Vector() {
	if (elements != NULL)
		delete[] elements;
	elements = NULL;
}

Vector::Vector(const Vector& v) {
	size = v.size;
	elements = new double[size];
	for (int i = 0; i < size; i++)
		elements[i] = v.elements[i];
}

Vector& Vector::operator =(const Vector& v) {
	if ((size != v.size) || (elements == NULL)) {
		size = v.size;
		if (elements != NULL)
			delete[] elements;
		elements = new double[size];
	}

	for (int i = 0; i < size; i++)
		elements[i] = v.elements[i];
	return *this;
}

ostream& operator <<(ostream& stream, const Vector& v) {
	stream << "Vector of size : " << v.size << endl << "[ ";
	for (int i = 0; i < v.size; i++)
		stream << v.elements[i] << " ";
	;
	stream << "]" << endl;
	return stream;
}

Vector Vector::operator +(const Vector& v) const {
	Vector answer(size);

	for (int i = 0; i < size; i++)
		answer.elements[i] = elements[i] + v.elements[i];

	return answer;
}

Vector operator*(double a, const Vector& v) {
	Vector answer(v.getSize());
	for (int i = 0; i < v.size; i++)
		answer.elements[i] = v.elements[i] * a;

	return answer;
}

Vector Vector::operator*(double a) {
	Vector answer(size);
	for (int i = 0; i < size; i++)
		answer.elements[i] = elements[i] * a;

	return answer;
}

double Vector::operator*(const Vector& v) const {
	double x = 0.0;
	for (int i = 0; i < size; i++)
		x += elements[i] * v.elements[i];

	return x;
}

bool Vector::operator ==(const Vector& v) const {
	if (size != v.size)
		return false;

	for (int i = 0; i < size; i++)
		if (elements[i] != v.elements[i])
			return false;

	return true;
}

bool Vector::operator !=(const Vector& v2) const {
	return !(*this == v2);
}




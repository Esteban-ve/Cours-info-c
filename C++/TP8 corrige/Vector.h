//============================================================================
// Name        : TP.cpp
// Author      : D.E.
// Version     :
// Copyright   : ECM2015
//============================================================================

#include <iostream>
using namespace std;

class Vector {
public:

private:
	int size;
	double* elements;

public:
	Vector();
    ~Vector();
	Vector (const Vector& v);

	Vector (int n);
	Vector(double a);
	Vector(double a, double b);
	Vector(double a, double b, double c);

	double* getElements() const {
		return elements;
	}

	void setElements(double* elements) {
		this->elements = elements;
	}

	int getSize() const {
		return size;
	}

	void setSize(int size) {
		this->size = size;
	}

	void setElements(int i , double x) {
		this->elements[i] = x;
	}

	friend ostream& operator <<(ostream& stream, const Vector& v);

	Vector operator +(const Vector& v) const;
	Vector& operator =(const Vector& v);

	friend Vector operator *(double a, const Vector& v);
	Vector operator *(double a);
	double operator *(const Vector& v) const;

	bool operator ==(const Vector& v) const;
	bool operator !=(const Vector& v) const;

};

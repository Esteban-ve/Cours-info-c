//============================================================================
// Name        : TP.cpp
// Author      : D.E.
// Version     :
// Copyright   : ECM2015
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Vector.h"

int main() {
	cout << "!!!Hello World!!!" << endl;

	Vector V;
	cout << V;

	Vector V1(3.0, 2.0, 4.0);

	Vector V2(2.5, 8.2, 2.1);

	Vector V3;
	V3 = V1 + V2;
	cout << V3 << endl << endl;

	double lambda = 3.8;
	Vector V4 = V1 * lambda;
	cout << V4 << endl << endl;

	Vector V5 = lambda * V1;
	cout << V5 << endl << endl;

	cout << "Produit scalaire :" << V2 * V5 << endl;

	cout << " Tests d'égalité" << endl;
	cout << (V1 != V2)<<endl;
	cout << (V1 != V1)<<endl;
	Vector V6(V1);
	cout << (V1 == V6)<<endl;
	cout << (V1 == V2)<<endl;

	return 0;
}





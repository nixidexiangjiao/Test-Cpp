/*
 * usevector.cpp
 *
 *  Created on: 2012-8-10
 *      Author: lzero
 */
#include "test.h"
#include "vector.h"

void vectortest() {
	using std::cout;
	using VECTOR::Vector;
	Vector v(20, 20);
	v = -v;
	cout << v;
}


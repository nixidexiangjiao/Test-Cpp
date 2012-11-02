/*
 * formore.cpp
 *
 *  Created on: 2012-8-2
 *      Author: lzero
 */
#include "test.h"

void formore() {
	using namespace std;
	const int ARSIZE = 16;
	double factorials[ARSIZE];
	factorials[0] = factorials[1] = 1.0;
	for (int i = 2; i < ARSIZE; i++) {
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < ARSIZE; i++) {
		cout << i << "! = " << factorials[i] << endl;
	}
}


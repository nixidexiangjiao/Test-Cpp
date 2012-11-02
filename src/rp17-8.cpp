/*
 * rp17-8.cpp
 *
 *  Created on: 2012-9-12
 *      Author: lzero
 */
#include <iostream>
#include "test.h"

void rp178() {
	using namespace std;
	char ch;
	int ct1 = 0;
	cin >> ch;
	while (ch != 'q') {
		ct1++;
		cin >> ch;
	}

	int ct2 = 0;
	cin.get(ch);
	while (ch != 'q') {
		ct2++;
		cin.get(ch);
	}
	cout << "ct1 = " << ct1 << "; ct2= " << ct2 << endl;
}


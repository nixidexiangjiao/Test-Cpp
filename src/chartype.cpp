/*
 * chartype.cpp
 *
 *  Created on: 2012-7-31
 *      Author: lzero
 */
#include "test.h"
#include <iostream>

void chartype() {
	using namespace std;
	char ch;
	cout << "Enter a character:" << endl;
	cin >> ch;
	cout << "Holla! ";
	cout << "Thank you for the " << ch << " character." << endl;
	cout.put(ch);
	cout << endl;
	cout << '$' << endl;
	cout.put('$');
}


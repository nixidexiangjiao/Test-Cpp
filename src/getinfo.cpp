/*
 * getinfo.cpp
 *
 *  Created on: 2012-7-31
 *      Author: lzero
 */

#include <iostream>
#include "test.h"

void getinfo() {
	using namespace std;
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cout << "Test:";
	cin >> carrots;
	cout << "Here are two more.";
	carrots += 2;
	cout << "Now you have " << carrots << " carrots." << endl;
}

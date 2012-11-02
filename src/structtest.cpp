/*
 * structtest.cpp
 *
 *  Created on: 2012-8-1
 *      Author: lzero
 */
#include "test.h"

void structtest() {
	using namespace std;

	struct inflatable {
		string name;
		string addr;
	};

	inflatable test = { "hyh", "huanshidonglu" };
	cout << "Test's Name is " << test.name << endl;
	cout << "Test's Addr is " << test.addr << endl;

	inflatable test2;
	test2 = test;
	cout << "Test2's Name is " << test2.name << endl;
	cout << "Test2's Addr is " << test2.addr << endl;

	test2.name = "haha";

	cout << "Test's Name is " << test.name << endl;
	cout << "Test2's Name is " << test2.name << endl;
}


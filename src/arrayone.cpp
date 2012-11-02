/*
 * arrayone.cpp
 *
 *  Created on: 2012-8-1
 *      Author: lzero
 */
#include "test.h"
#include <iostream>
#include <vector>
#include <valarray>

void arrayone() {
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	int yamcosts[3] = { 20, 30, 5 };
	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The pachkage with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";
	cout << "\nSize of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";

	char test[10] = "hello";
	cout << "Test array size is " << sizeof test;

	cout << endl;
	cout << endl;
	cout << endl;
//	vector<int> t1(0);
//	t1[0] = 12;
//	t1[1] = 13;
//	cout << t1[0] << endl;
//	cout << t1[1] << endl;

	valarray<int> v1(0);
	v1[0] = 20;
	v1[1] = 21;
	cout << v1[0] << endl;
	cout << v1[1] << endl;
}

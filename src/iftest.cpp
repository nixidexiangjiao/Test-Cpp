/*
 * iftest.cpp
 *
 *  Created on: 2012-8-3
 *      Author: lzero
 */
#include "test.h"

void iftest() {
	using namespace std;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.') {
		if (ch == ' ') {
			++spaces;
		}
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces." << total << " characters total.";
}


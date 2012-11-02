/*
 * textin1.cpp
 *
 *  Created on: 2012-8-3
 *      Author: lzero
 */
#include "test.h"

void textin1() {
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters;enter # to quit:\n";
	cin >> ch;
	while (ch != '#') {
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
}

void textin2() {
	using namespace std;
	char ch;
	int count = 0;

	cout << "Enter characters;enter # to quit:\n";
	cin.get(ch);
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
}

void textin4() {
	using namespace std;
	char ch;
	int ch1 = 64;
	int count = 0;

	cout << "Enter characters;enter EOF to quit:\n";
	while (!(cin.get(ch)).fail()) {
		cout.put(ch);
		cout.put(ch1);
		++count;
	}
	cout << endl << count << " characters read\n";
}

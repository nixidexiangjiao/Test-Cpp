/*
 * instr.cpp
 *
 *  Created on: 2012-8-1
 *      Author: lzero
 */
#include "test.h"

void instr() {
	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	int num;
//
//	cout << "Enter your name:\n";
//	cin.getline(name, ArSize);
//	cout << "Hello " << name << endl;
//	cout << "Enter the phone number:\n";
//	cin >> num;
//	cout << "Your number is " << num;
	char ch;
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n') {
			continue;
		}
		if (!isalpha(ch)) {
			cout << '\a';
			continue;
		}
		switch (ch) {
		case 'A':
		case 'a':
			cout<<"add something"<<endl;
			break;
		case 'P':
		case 'p':
			cout<<"pop something"<<endl;
			break;
		default:
			break;
		}
	}

}


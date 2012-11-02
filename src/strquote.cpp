/*
 * strquote.cpp
 *
 *  Created on: 2012-8-6
 *      Author: lzero
 */

#include "test.h"
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2); //bad design
void test(string a) {
	cout << a << endl;
}

void test(unsigned ct) {
	cout << ct << endl;
}

void strquote() {
	string input;
	string copy;
	string result;

	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	result = version1(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	char *t = "test";
	test(t);

	int t1 = 12345;
	test(t1);
}

string version1(const string & s1, const string & s2) {
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const string & version2(string & s1, const string & s2) {
	s1 = s2 + s1 + s2;
	return s1;
}

const string & version3(string & s1, const string & s2) {
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

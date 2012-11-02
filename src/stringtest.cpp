/*
 * stringtest.cpp
 *
 *  Created on: 2012-8-1
 *      Author: lzero
 */
#include "test.h"

void stringtest() {
	using std::cout;
	using std::endl;
	using std::string;
	using std::cin;
//	char name[20] = "test";
//	string str;
//	string str2 = "Just a ";
//	string str3;
//	str = name;
//	str2 = str2 + str + name;
//	cout << "Str is " << str2 << endl;
//	cout << "Entre a string:\n";
//	cin >> str3;
//	cout << "The str3 is " << str3;
//	char * c = "test";
//	string str = c;
//	c = "ttt";
//	cout << "str is " << str << endl;
//	string str2 = str;
//	str2 += "just a ";
//	cout << "str is " << str << endl;
//	cout << "str2 is " << str2 << endl;
	string t = "test";
	string * pt = &t;
	string & t1 = t;
	string & t2 = (string &)(*pt);

	cout << "t: " << t << endl;
	t1 = "tttt";
	cout << "t1 = \"tttt\",then t: " << t << endl;
	cout << "t2: " << t2 << endl;
}


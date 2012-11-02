/*
 * copychar.cpp
 *
 *  Created on: 2012-9-14
 *      Author: lzero
 */
#include "test.h"
#include "cstring"
#include <string>

using namespace std;

void testcopychar(char * tt) {
	char t[5];
	strncpy(t, tt, sizeof(tt) + 1);
	cout << t << endl;
}

void copychar() {
//	char *p = "test";
//	cout << p << endl;
//	char t[5];
//	cout << sizeof p << endl;
//	strncpy(t, p, sizeof(p)+1);
//	cout << p << endl;
//	cout << t << endl;
//	testcopychar(p);
	string t = "test";
	string & t1 = t;
	string & t2 = t1;

	t2 = "test1";
	cout << "t:" << t << endl;
	cout << "t1:" << t1 << endl;
	cout << "t2:" << t2 << endl;
	cout << "size:" << t.size() << endl;
}


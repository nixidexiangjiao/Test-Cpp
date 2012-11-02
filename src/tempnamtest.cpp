/*
 * tempnamtest.cpp
 *
 *  Created on: 2012-9-12
 *      Author: lzero
 */
#include <cstdio>
#include <iostream>
#include "test.h"

void tempnamtest() {
	using namespace std;
	cout << "This system can generate up to " << TMP_MAX<<" temporary names of up to "
			<< L_tmpnam<< " characters.\n";
	char pszName[L_tmpnam] = { '\0' };
	cout << "Here are ten names:\n";
	for (int i = 0; i < 10; ++i) {
		tmpnam(pszName);
		cout << pszName << endl;
	}
}


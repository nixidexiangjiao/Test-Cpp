/*
 * valarraytest.cpp
 *
 *  Created on: 2012-9-3
 *      Author: lzero
 */
#include "test.h"
#include <valarray>

void valarraytest() {
	using namespace std;
	valarray<double> vad1(3), vad2(3);
	vad2[0] = 4;
	vad2[1] = 8;
	vad2[2] = 16;
	cout << "vad2:";
	for (int i = 0; i < vad2.size(); i++) {
		cout << vad2[i] << " ";
	}
	cout << endl;
	vad1 = log(vad2);
	cout << "vad1:";
	for (int i = 0; i < vad1.size(); i++) {
		cout << vad1[i] << " ";
	}
	cout << endl;
	cout << "vad2:";
	for (int i = 0; i < vad2.size(); i++) {
		cout << vad2[i] << " ";
	}
	cout << endl;
}


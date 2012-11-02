/*
 * LacksDMA.cpp
 *
 *  Created on: 2012-8-16
 *      Author: lzero
 */

#include "LacksDMA.h"
#include <iostream>

LacksDMA::LacksDMA(int r) :
		color(r) {
	// TODO Auto-generated constructor stub
	std::cout << "LacksDMA Defualt!!\n";
}

LacksDMA::LacksDMA(const LacksDMA & rs) {
	std::cout << "LacksDMA Copy!!\n";
}

LacksDMA & LacksDMA::operator=(const LacksDMA & rs) {
	std::cout << "LacksDMA =!!\n";
	return *this;
}

void LacksDMA::test2() {
	test();
}
LacksDMA::~LacksDMA() {
	std::cout << "~LacksDMA,yeah!!\n";
}

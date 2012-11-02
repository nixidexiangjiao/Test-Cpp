/*
 * BaseDMA.cpp
 *
 *  Created on: 2012-8-16
 *      Author: lzero
 */

#include "BaseDMA.h"
#include <iostream>
#include <cstring>

BaseDMA::BaseDMA(int r) :
		rating(r) {
	// TODO Auto-generated constructor stub
	std::cout << "BaseDMA Defualt!!\n";
}

BaseDMA::BaseDMA(const BaseDMA & rs) {
	std::cout << "BaseDMA Copy!!\n";
}

BaseDMA & BaseDMA::operator=(const BaseDMA & rs) {
	std::cout << "BaseDMA =!!\n";
	return *this;
}

void BaseDMA::test() {
	std::cout << "test!!!" << std::endl;
}

BaseDMA::~BaseDMA() {
	std::cout << "~BaseDMA!!!" << std::endl;
}

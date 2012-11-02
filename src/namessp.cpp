/*
 * namessp.cpp
 *
 *  Created on: 2012-8-8
 *      Author: lzero
 */
#include <iostream>
#include "namesp.h"
#include "test.h"

void other();
void another();
//void test();

void namessp() {
	using debts::Debt;
	using debts::showDebt;

	Debt golf = { { "HYH", "Golden" }, 120 };
	showDebt(golf);
	other();
	another();
}

void other() {
	using std::cout;
	using std::endl;
	using namespace debts;
//	test();
	Person dg = { "CWJ", "XXXXX" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;

	for (i = 0; i < 3; ++i) {
		getDebt(zippy[i]);
	}
	for (i = 0; i < 3; ++i) {
		showDebt(zippy[i]);
	}
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}

void another() {
	using pers::Person;
	Person collector = { "CWJ", "XXXXXX" };
	pers::showPerson(collector);
	std::cout << std::endl;
}

//void test() {
//	std::cout << "test test test" << std::endl;
//}


/*
 * namesp.h
 *
 *  Created on: 2012-8-8
 *      Author: lzero
 */

#ifndef NAMESP_H_
#define NAMESP_H_

namespace pers
{
	const int LEN = 40;
	struct Person
	{
		char fname[LEN];
		char lname[LEN];
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person name;
		double amount;
	};

	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int n);
	void test();
}


#endif /* NAMESP_H_ */

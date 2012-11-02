/*
 * testclass.h
 *
 *  Created on: 2012-8-9
 *      Author: lzero
 */

#ifndef TESTCLASS_H_
#define TESTCLASS_H_
#include <cstring>

class ATest {
public:
	ATest();
	ATest(char * n, int m);
	void show();
	void setName(char * n) {
		std::strcpy(name, n);
	}
	void setMoney(int m) {
		money = m;
	}
	const char * getName() const {
		return name;
	}
	int getMoney() {
		return money;
	}
private:
	char name[50];
	int money;
};

class BTest {
public:
	BTest(char * n, int m, ATest * a);
	void show();
	void setName(char * n) {
		std::strcpy(name, n);
	}
	void setMoney(int m) {
		money = m;
	}
	char * getName() {
		char * temp;
		std::strcpy(temp, name);
		return temp;
	}
	int getMoney() {
		return money;
	}
	void setATestName(char * n) {
		at->setName(n);
	}
private:
	char name[50];
	int money;
	ATest * at;
};

class CTest: public ATest {
public:
	CTest();
	CTest(char * n, int m) :
			ATest(n, m) {
	}
};
#endif /* TESTCLASS_H_ */

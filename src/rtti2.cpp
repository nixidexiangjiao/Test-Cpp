/*
 * rtti2.cpp
 *
 *  Created on: 2012-8-23
 *      Author: lzero
 */

#include "test.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using namespace std;

class Grand {
private:
	int hold;
public:
	Grand(int h = 0) :
			hold(h) {
	}
	virtual void speak() const {
		cout << "I am a grand class!\n";
	}
	virtual int value() const {
		return hold;
	}
};

class Superb: public Grand {
private:

public:
	Superb(int h = 0) :
			Grand(h) {
	}
	void speak() const {
		cout << "I am a super class!!\n";
	}
	virtual void say() const {
		cout << "I hold the superb value of " << value() << "!\n";
	}
};

class Magnificent: public Superb {
private:
	char ch;
public:
	Magnificent(int h = 0, char cv = 'A') :
			Superb(h), ch(cv) {
	}
	void speak() const {
		cout << "I am a magnificent class!!!\n";
	}
	void say() const {
		cout << "I hold the character " << ch << " and the integer " << value()
				<< "!\n";
	}
};

Grand * GetOne();

void rtti2() {
	srand(time(0));
	Grand * pg;
	Superb * ps;
	for (int i = 0; i < 5; ++i) {
		pg = GetOne();
		cout << "Now processing type " << typeid(*pg).name() << ".\n";
		pg->speak();
		if (ps = dynamic_cast<Superb *>(pg)) {
			ps->say();
		}
		if (typeid(Magnificent) == typeid(*pg)) {
			cout << "Yes, you're really magnificent.\n";
		}
	}
}

Grand * GetOne() {
	Grand * p;
	switch (rand() % 3) {
	case 0:
		p = new Grand(rand() % 100);
		break;
	case 1:
		p = new Superb(rand() % 100);
		break;
	case 2:
		p = new Magnificent(rand() % 100, 'A' + rand() % 26);
		break;
	default:
		break;
	}
}

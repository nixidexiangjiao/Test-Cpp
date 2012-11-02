/*
 * testclass.cpp
 *
 *  Created on: 2012-8-9
 *      Author: lzero
 */
#include "test.h"
#include "testclass.h"
ATest::ATest() {

}

ATest::ATest(char * n, int m) {
	strcpy(name, n);
	money = m;
}

BTest::BTest(char * n, int m, ATest * a) {
	strcpy(name, n);
	money = m;
	at = a;
}

void ATest::show() {
	using std::cout;
	using std::endl;
	cout << "A's name:" << name;
	cout << "  A's money:" << money << endl;
}

void BTest::show() {
	using std::cout;
	using std::endl;
	cout << "B's name:" << name;
	cout << "  B's money:" << money;
	cout << "  B'sA's name:" << at->getName();
	cout << "  B'sA's money:" << at->getMoney() << endl;
}

void testclass() {
	using std::cout;
	using std::endl;
//	ATest test1("Test1", 100);
//	cout << "test1 :" << endl;
//	test1.show();
//
//	BTest test2("Test2", 200, &test1);
//	cout << "test2 :" << endl;
//	test2.show();
//
//	test1.setName("Test1Test1!!!");
//	cout << "test1's name has modified, then test1 :" << endl;
//	test1.show();
//	cout << "test1's name has modified, then test2 :" << endl;
//	test2.show();
//
//	BTest test3 = test2;
//	cout << "test2 to test3, then test3 :" << endl;
//	test3.show();
//
//	test3.setATestName("TTTTTTTT");
//	cout << "test3's ATestname has modified, then test3 :" << endl;
//	test3.show();
//	cout << "test3's ATestname has modified, then test2 :" << endl;
//	test2.show();
	CTest c("TTTTTT", 100);
	c.show();
}


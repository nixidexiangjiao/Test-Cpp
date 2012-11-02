/*
 * use_stuc.cpp
 *
 *  Created on: 2012-8-17
 *      Author: lzero
 */
#include "test.h"
#include "Student.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

void use_stuc() {
	Student t1(3);
	set(t1, 3);
	cout << t1.getName() << endl;
	cout << t1;
	cout << "average: " << t1.average() << endl;
}

void set(Student & sa, int n) {
	cout << "Please enter the student 's name: ";
	getline(cin, sa);
	cout << "Please enter " << n << " quiz scores.\n";
	for (int i = 0; i < n; ++i) {
		cin >> sa[i];
	}
	while (cin.get() != '\n')
		;
}

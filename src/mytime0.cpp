/*
 * mytime0.cpp
 *
 *  Created on: 2012-8-9
 *      Author: lzero
 */
#include <iostream>
#include "mytime0.h"

Time::Time() {
	hours = minutes = 0;
}

Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}

void Time::addMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= minutes / 60;
}

void Time::addHr(int h) {
	hours += h;
}

void Time::reset(int h, int m) {
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time & t) const {
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

void Time::show() const {
	std::cout << hours << " hours, " << minutes << " minutes";
}

void Time::test() {
	Time t1(10, 10);
	Time t2(10, 12);
	Time t3;
	t3 = t1 + t2;
	t3.show();
}

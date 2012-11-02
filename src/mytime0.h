/*
 * mytime0.h
 *
 *  Created on: 2012-8-9
 *      Author: lzero
 */

#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time {
public:
	Time();
	Time(int h, int m = 0);
	void addMin(int m);
	void addHr(int h);
	void reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	void show() const;
	void test();
	friend void tt();
private:
	int hours;
	int minutes;
};

#endif /* MYTIME0_H_ */

/*
 * tv.cpp
 *
 *  Created on: 2012-8-21
 *      Author: lzero
 */
#include <iostream>
#include "test.h"
#include "tv.h"
bool Tv::volup() {
	if (volume < MaxVal) {
		volume++;
		return true;
	} else {
		return false;
	}
}

bool Tv::voldown() {
	if (volume > MinVal) {
		volume--;
		return true;
	} else {
		return false;
	}
}

void Tv::chanup() {
	if (channel < maxchannel) {
		channel++;
	} else {
		channel = 1;
	}
}

void Tv::chandown() {
	if (channel > 1) {
		channel--;
	} else {
		channel = maxchannel;
	}
}

void Tv::settings() const {
	using std::cout;
	using std::endl;
	cout << "Tv is " << (state == Off ? "Off" : "On") << endl;
	if (state == On) {
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = " << (mode == Antenna ? "antenna" : "cable") << endl;
		cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

bool Remote::volup(Tv & t) {
	return t.volup();
}

void Remote::set_chan(Tv & t, int c) {
	t.channel = c;
}

void tv() {
	using std::cout;
	Tv t;
	t.onoff();
	t.settings();
	cout << "-----------!!\n";
	Remote r;
	r.volup(t);
	r.set_chan(t, 10);
	t.settings();
}

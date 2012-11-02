/*
 * bclx_15_1.cpp
 *
 *  Created on: 2012-9-13
 *      Author: lzero
 */
#include <iostream>
#include "test.h"
#include "bclx_15_1.h"
namespace bclx151 {
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

void Remote::show_style() {
	if (style == Normal) {
		std::cout << "Remote in Normal mode\n";
	} else {
		std::cout << "Remote in Interactive mode\n";
	}
}
}

void bclx_15_1() {
	using std::cout;
	using std::endl;
	using namespace bclx151;
	Tv s20;
	cout << "Initial settings for 20\" TV:\n";
	s20.settings();
	s20.onoff();
	s20.chanup();
	cout << "\nAdjusted settings for 20\" TV:\n";
	s20.settings();

	Remote grey;

	grey.set_chan(s20, 10);
	grey.volup(s20);
	grey.volup(s20);
	cout << "\n20\" setting after using remote\n";
	s20.settings();

	Tv s27(Tv::On);
	s27.set_mode();
	grey.set_chan(s27, 28);
	cout << "\n27\" settings:\n";
	s27.settings();
	grey.show_style();
	s27.rmode(grey);
	grey.show_style();
	s27.onoff();
	s27.rmode(grey);
	grey.show_style();

}


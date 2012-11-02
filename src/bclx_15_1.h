/*
 * bclx_15_1.h
 *
 *  Created on: 2012-9-13
 *      Author: lzero
 */

#ifndef BCLX_15_1_H_
#define BCLX_15_1_H_
namespace bclx151 {
class Remote;

class Tv {
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
public:
	friend class Remote;
	enum {
		Off, On
	};
	enum {
		MinVal, MaxVal = 20
	};
	enum {
		Antenna, Cable
	};
	enum {
		TV, DVD
	};
	Tv(int s = Off, int mc = 125) :
			state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(
					TV) {
	}
	void onoff() {
		state = (state == On) ? Off : On;
	}
	bool ison() const {
		return state == On;
	}
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() {
		mode = (mode == Antenna) ? Cable : Antenna;
	}
	void set_input() {
		input = (input == TV) ? DVD : TV;
	}
	void settings() const;
	void rmode(Remote & rm);
};

class Remote {
private:
	int mode;
	int style; //Normal or Interactive
public:
	friend class Tv;

	enum Style {
		Normal, Interactive
	};

	Remote(int m = Tv::TV) :
			mode(m) {
	}
	bool volup(Tv & t);
	bool voldown(Tv & t) {
		return t.voldown();
	}
	void onoff(Tv & t) {
		t.onoff();
	}
	void chanup(Tv & t) {
		t.chanup();
	}
	void chandown(Tv & t) {
		t.chandown();
	}
	void set_chan(Tv & t, int c);
	void set_mode(Tv & t) {
		t.set_mode();
	}
	void set_input(Tv & t) {
		t.set_input();
	}
	void show_style();
};

inline void Tv::rmode(Remote & r) {
	if (state == Off) {
		return;
	}
	if (r.style == Remote::Normal) {
		r.style = Remote::Interactive;
	} else {
		r.style = Remote::Normal;
	}
}
} // namespace bclx_15_1
#endif /* BCLX_15_1_H_ */

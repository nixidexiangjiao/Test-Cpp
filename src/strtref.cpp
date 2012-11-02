/*
 * strtref.cpp
 *
 *  Created on: 2012-8-6
 *      Author: lzero
 */
#include "test.h"

using namespace std;
struct sysop {
	char name[26];
	char quote[64];
	int used;
};

const sysop & use(sysop & sysopref);
const sysop & clone(sysop & sysopref);

void strtref() {
	sysop looper = { "Rick Looper", "I'm a goto kind of guy.", 0 };
	use(looper);
	cout << "Looper: " << looper.used << " user(s)\n";
	sysop copycat;
	copycat = use(looper);
	cout << "Looper: " << looper.used << " use(s)\n";
	cout << "Copycat: " << copycat.used << " use(s)\n";
	cout << "use(looper): " << use(looper).used << " use(s)\n";
	cout << "Looper: " << looper.used << " use(s)\n";
	copycat.used = 12;
	cout << "Copycat: " << copycat.used << " use(s)\n";
//	copycat.used = 10;
//	sysop & test = use(looper);
//	test.used = 11;
//	cout << "Looper: " << looper.used << " use(s)\n";
//	cout << "Copycat: " << copycat.used << " use(s)\n";
	cout << endl;
	cout << endl;
	sysop clonecat;
	clonecat = clone(looper);
	const sysop & clonecatY = clonecat;
	use(looper);
	cout << "Looper: " << looper.used << " use(s)\n";
	cout << "clonecat: " << clonecat.used << " use(s)\n";
	cout << "&clonecat: " << &clonecat << endl;
	cout << "&clonecatY: " << &clonecatY << endl;
	delete &clonecat;
}

const sysop & use(sysop & sysopref) {
	cout << sysopref.name << " says:\n";
	cout << sysopref.quote << endl;
	sysopref.used++;
	return sysopref;
}

const sysop & clone(sysop & sysopref) {
	sysop *p = new sysop;
	*p = sysopref;
	return *p;
}

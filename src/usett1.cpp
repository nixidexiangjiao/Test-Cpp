/*
 * usett1.cpp
 *
 *  Created on: 2012-8-15
 *      Author: lzero
 */
#include <iostream>
#include "test.h"
#include "RatedPlayer.h"
#include "BaseDMA.h"
#include "LacksDMA.h"

void usett1() {
	using std::cout;
	using std::endl;
//	TableTennisPlayer player1("Tara", "Boomdea", false);
//	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
//	rplayer1.name();
//	if (rplayer1.isHasTable()) {
//		cout << ": has a table.\n";
//	} else {
//		cout << ": hasn't a table.\n";
//	}
//	player1.name();
//	if (player1.isHasTable()) {
//		cout << ": has a table.\n";
//	} else {
//		cout << ": hasn't a table.\n";
//	}
//	cout << "Name: ";
//	rplayer1.name();
//	cout << "; Rating: " << rplayer1.getRating() << endl;
//	RatedPlayer rplayer2(1212, player1);
//	cout << "Name: ";
//	rplayer2.name();
//	cout << "; Rating: " << rplayer2.getRating() << endl;
//
//	TableTennisPlayer *t1 = &player1;
//	TableTennisPlayer *t2 = &rplayer1;
//	t1->test();
//	t2->test();
//	const TableTennisPlayer player1("Tara", "Boomdea", false);
//	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
//	const TableTennisPlayer *t1 = &player1;
//	RatedPlayer *t2 = &rplayer1;
//	t1->test();
//	t2->test();
	LacksDMA t1;
	LacksDMA t2;
	t2 = t1;
	BaseDMA * y = &t2;
//	LacksDMA * y1 = &t2;
	y->operator =(t1);
//	y1->operator =(t1);
	cout << "---" << endl;
	cout << "---" << endl;
	y->~BaseDMA();
//	y1->~LacksDMA();
	cout << "---" << endl;
	cout << "---" << endl;
//
//	LacksDMA t3(t1);
//	t3.test2();
//
//	cout << endl;
//	BaseDMA t4;
//	t3 = (LacksDMA &) t4;
}


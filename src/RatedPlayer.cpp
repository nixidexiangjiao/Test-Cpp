/*
 * RatedPlayer.cpp
 *
 *  Created on: 2012-8-15
 *      Author: lzero
 */
#include <iostream>
#include "RatedPlayer.h"

RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln,
		bool ht) :
		rating(r), TableTennisPlayer(fn, ln, ht) {
	// TODO Auto-generated constructor stub
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) :
		rating(r), TableTennisPlayer(tp) {

}

//void RatedPlayer::test() {
//	std::cout << "This is RatedPlayer's test.\n";
//}

void RatedPlayer::test2() {
	std::cout << "This RatedPlayer's test2.\n";
}

void RatedPlayer::test3() {
	std::cout << "This RatedPlayer's test3.\n";
}

/*
 * TableTennisPlayer.cpp
 *
 *  Created on: 2012-8-15
 *      Author: lzero
 */

#include "TableTennisPlayer.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln,
		bool ht) :
		firstname(fn), lastname(ln), hasTable(ht) {
	// TODO Auto-generated constructor stub

}

void TableTennisPlayer::name() const {
	std::cout << lastname << ", " << firstname;
}

void TableTennisPlayer::test(){
	std::cout << "This is TableTennisPlayer's test.\n";
}

//void TableTennisPlayer::test2(){
//	std::cout << "This is TableTennisPlayer's test2.\n";
//}

void TableTennisPlayer::test() const {
	std::cout << "This is TableTennisPlayer's test with const.\n";
}

void TableTennisPlayer::test3() {
	std::cout << "This is TableTennisPlayer's test3.\n";
}

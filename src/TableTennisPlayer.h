/*
 * TableTennisPlayer.h
 *
 *  Created on: 2012-8-15
 *      Author: lzero
 */

#ifndef TABLETENNISPLAYER_H_
#define TABLETENNISPLAYER_H_
#include <string>
using std::string;

class TableTennisPlayer {
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string & fn = "none", const string & ln = "none",
			bool ht = false);
	virtual ~TableTennisPlayer() {
	}
	void name() const;
	bool isHasTable() const {
		return hasTable;
	}
	void resetTable(bool v) {
		hasTable = v;
	}
	virtual void test();
	virtual void test() const;
	void test3();
//	virtual void test2();
};

#endif /* TABLETENNISPLAYER_H_ */

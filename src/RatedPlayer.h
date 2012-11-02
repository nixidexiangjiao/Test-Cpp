/*
 * RatedPlayer.h
 *
 *  Created on: 2012-8-15
 *      Author: lzero
 */

#ifndef RATEDPLAYER_H_
#define RATEDPLAYER_H_

#include "TableTennisPlayer.h"

class RatedPlayer: public TableTennisPlayer {
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "none",
			const string & ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	virtual ~RatedPlayer() {
	}
	unsigned int getRating() const {
		return rating;
	}
	void resetRating(unsigned int r) {
		rating = r;
	}
//	virtual void test();
	virtual void test2();
	void test3();
};

#endif /* RATEDPLAYER_H_ */

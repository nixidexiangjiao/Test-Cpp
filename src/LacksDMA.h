/*
 * LacksDMA.h
 *
 *  Created on: 2012-8-16
 *      Author: lzero
 */

#ifndef LACKSDMA_H_
#define LACKSDMA_H_

#include "BaseDMA.h"

class LacksDMA: public BaseDMA {
private:
	int color;
public:
	LacksDMA(int r = 0);
	LacksDMA(const LacksDMA & rs);
	virtual LacksDMA & operator=(const LacksDMA & rs);
	void test2();
	virtual ~LacksDMA();
};

#endif /* LACKSDMA_H_ */

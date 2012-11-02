/*
 * BaseDMA.h
 *
 *  Created on: 2012-8-16
 *      Author: lzero
 */

#ifndef BASEDMA_H_
#define BASEDMA_H_

class BaseDMA {
private:
	int rating;
public:
	BaseDMA(int r = 0);
	BaseDMA(const BaseDMA & rs);
	virtual BaseDMA & operator=(const BaseDMA & rs);
	virtual ~BaseDMA();
	void test();
};

#endif /* BASEDMA_H_ */

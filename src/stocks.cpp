/*
 * stocks.cpp
 *
 *  Created on: 2012-8-8
 *      Author: lzero
 */
#include <iostream>
#include <cstring>
#include "test.h"

class Stock {
public:
	void acquire(const char * co, int n, double pr);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(double price);
	void show()const;
	const Stock & topval(const Stock & s) const;
private:
	char company[30];
	int shares;
	double share_val;
	double total_val;
	void set_tot();
};

void Stock::set_tot() {
	total_val = shares * share_val;
}

void test() {
	std::cout << "just a test!!!!!" << std::endl;
}

void Stock::acquire(const char * co, int n, double pr) {
	std::strncpy(company, co, 29);
	company[29] = '\0';
	if (n < 0) {
		std::cerr << "Number of shares can't be negative. " << company
				<< " shares set to 0.\n";
		shares = 0;
	} else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void Stock::buy(int num, double price) {
	if (num < 0) {
		std::cerr << "Number of shares purchased can't be negative. "
				<< "Transaction is aborted.\n";
	} else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price) {
	using std::cerr;
	if (num < 0) {
		cerr << "Number of shares sold can't be nagative. "
				<< "Transaction is aborted.\n";
	} else if (num > shares) {
		cerr << "You can't sell more than you have! "
				<< "Transaction is aborted.\n";
	} else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price) {
	share_val = price;
	set_tot();
	test();
}

void Stock::show()const {
	using std::cout;
	using std::endl;
	cout << "Company: " << company << " Shares: " << shares << endl
			<< " Shares Price: $" << share_val << " Total Worth: $" << total_val
			<< endl;
}

const Stock & Stock::topval(const Stock & s) const {
	if (s.total_val > this->total_val) {
		return s;
	} else {
		return *this;
	}
}

void stocks() {
	using std::cout;
	using std::ios_base;
	using std::endl;
	Stock stock1, stock2;
	stock1.acquire("NanoSmart", 20, 12.50);
	stock2.acquire("NanoPod", 30, 33.60);
	cout.setf(ios_base::fixed);
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	stock1.show();
//	stock2.show();
	stock1.buy(15, 18.25);
	stock1.show();
	stock1.sell(10, 20.00);
	stock1.show();
	stock1.update(22.00);
	stock1.show();
	const Stock top = stock1.topval(stock2);
	cout << "Winner is ";
	top.show();
}


/*
 * readfile.cpp
 *
 *  Created on: 2012-8-3
 *      Author: lzero
 */
#include <iostream>
#include <fstream>
#include <cstdlib>

void readfile() {
	using namespace std;
	ifstream inFile;

	inFile.open("scores.txt");
	if (!inFile.is_open()) {
		cout << "Could not open this file.\n";
		cout << "Program teminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()) {
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof()) {
		cout << "End of file reached.\n";
	} else if (inFile.fail()) {
		cout << "Input terminated by data mismath.\n";
	} else {
		cout << "Input terminated for unknown reason.\n";
	}
	if (count == 0) {
		cout << "No data processed.\n";
	} else {
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
}


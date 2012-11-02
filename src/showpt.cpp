// showpt.cpp -- setting the precision, showing trailing point
#include <iostream>
#include "test.h"

void showpt()
{
    using std::cout;
    using std::ios_base;

    float price1 = 200.40;
    float price2 = 1.9 + 8.0 / 9.0;

    cout.setf(ios_base::showpoint);
    cout << "\"Furry Friends\" is $" << price1 << "!\n";
    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    cout.precision(2);
    cout << "\"Furry Friends\" is $" << price1 << "!\n";
    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
    
}

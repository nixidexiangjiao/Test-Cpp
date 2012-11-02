// truncate.cpp -- using get() to truncate input line, if necessary
#include <iostream>
#include "test.h"
const int SLEN = 10;
inline void eatline2() { while (std::cin.get() != '\n') continue; }
int truncate()
{
    using std::cin;
    using std::cout;
    using std::endl;

    char name[SLEN];
    char title[SLEN];
    cout << "Enter your name: ";
    cin.get(name,SLEN);
    if (cin.peek() != '\n')
        cout << "Sorry, we only have enough room for "
                << name << endl;
    eatline2();
    cout << "Dear " << name << ", enter your title: \n";
    cin.get(title,SLEN);
    if (cin.peek() != '\n')
        cout << "We were forced to truncate your title.\n";
    eatline2();
    cout << " Name: " << name
         << "\nTitle: " << title << endl;

    return 0; 
}

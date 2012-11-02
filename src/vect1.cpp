// vect1.cpp -- introducing the vector template
#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;
void vect1() {
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;

	/*vector<int> ratings(NUM);
	 vector<string> titles(NUM);
	 cout << "You will do exactly as told. You will enter\n"
	 << NUM << " book titles and your ratings (0-10).\n";
	 int i;
	 for (i = 0; i < NUM; i++)
	 {
	 cout << "Enter title #" << i + 1 << ": ";
	 getline(cin,titles[i]);
	 cout << "Enter your rating (0-10): ";
	 cin >> ratings[i];
	 cin.get();
	 }
	 cout << "Thank you. You entered the following:\n"
	 << "Rating\tBook\n";
	 for (i = 0; i < NUM; i++)
	 {
	 cout << ratings[i] << "\t" << titles[i] << endl;
	 }*/
	vector<string> titles(NUM);
	titles[0] = "Test1";
	titles[1] = "Test2";
	titles[2] = "Test3";
	titles[3] = "Test4";
	titles[4] = "Test5";
	vector<string>::iterator pd;
	pd = titles.begin();
	cout << *pd << endl;
	titles.erase(titles.begin(), titles.begin() + 1);
	cout << *pd << endl;

}

#include "cow.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
Cow::Cow()
{
	cout << "What your name?" << endl;
	cin >> name;
	cout << "What weapons do you have?" << endl;
}

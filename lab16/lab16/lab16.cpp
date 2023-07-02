#include<iostream>
#include "pair.h"
using namespace std;


int main()
{
	cout << "최준혁 20192647" << endl;
	Pair<int> p1(2, 3);
	cout << "first is " << p1.getfirst() << endl;
	p1.setfirst(5);
	cout << "first is" << p1.getfirst() << endl;

	funcex();

	Pair<char> p2('a', 'b');
	cout << "first is " << p2.getfirst() << endl;
	p2.setfirst('c');
	cout << "first is" << p2.getfirst() << endl;
} 

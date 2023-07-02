#include <iostream>

using namespace std;

int main()
{
	cout << "최준혁20192647" << endl;

	int* p1, * p2, v1 = 3, v2 = 4;
	int* p3, * p4;
	p3 = new int;
	p4 = new int;

	cout << "p3:" << p3 << endl;
	cout << "p4:" << p4 << endl;
	cout << "*p3:" << *p3 << endl;
	cout << "*p4:" << *p4 << endl;

	*p3 = 7, * p4 = 8;
	cout << "p3:" << p3 << endl;
	cout << "p4:" << p4 << endl;
	cout << "*p3:" << *p3 << endl;
	cout << "*p4:" << *p4 << endl;

	p3 = p4;
	
	cout << "p3:" << p3 << endl;
	cout << "p4:" << p4 << endl;
	cout << "*p3:" << *p3 << endl;
	cout << "*p4:" << *p4 << endl;

	delete p4;
}
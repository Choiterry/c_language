#pragma once
#include<iostream>
using namespace std;

class number
{
private:
	int value;
public:
	number();
	~number();
	void display();
	int getnumber();
	void setnumber();
	/*friend bool operator<=(const number& n1, const number& n2);*/
	bool operator<=(const number& n);
	friend istream& operator>>(istream& is, number& n);
	friend ostream& operator<<(ostream& os, const number& n);
};




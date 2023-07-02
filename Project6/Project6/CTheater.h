#pragma once
#include <string>
#include<iostream>
using namespace std;

class CTheater
{
private:
	string m_strname;
	int m_ntriptime;
	int m_pnshowtime[10];
public:
	void printschedule();
	void inputtheaterinfo(string strname, int ntriptime, int pshowtime[]);
};


#pragma once
#include<string>
#include<iostream>
using namespace std;

class ctheater
{
private : 
	string m_strname;
	int m_ntriptime;
	int m_pshowtime[10];
	static int m_numberoftheater;
public:
	ctheater();
	ctheater(string strname, int ntriptime, int*pshowtime, int nsizeofarray);
	void printschedule();
	void inputtheaterinfo(string strname, int ntriptime, int pshowtime[]);
	static void printnumberoftheater();

};


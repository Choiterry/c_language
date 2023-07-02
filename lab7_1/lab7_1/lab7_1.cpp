#include<string>
#include<iostream>
#include "ctheater.h"
using namespace std;

int main()
{
	cout << "최준혁 20192647" << endl;

	ctheater atheater;
	string strname = "cgv1";
	int ntriptime = 10;
	int pshowtime[10] = { 1130, 1330 };

	atheater.inputtheaterinfo(strname, ntriptime, pshowtime);
	atheater.printschedule();
	ctheater::printnumberoftheater();

	const int nsizeofarray = 10;
	int pshowtime2[nsizeofarray] = { 1100,1300,1500 };
	ctheater btheater("cgv2", 20, pshowtime2, nsizeofarray);
	btheater.printschedule();
	ctheater::printnumberoftheater();
	/*int pshowtime3[nsizeofarray] = { 1130,1400,1700 };
	ctheater ctheater("cgv3", 20, pshowtime3, nsizeofarray);
	ctheater.printschedule();*/

}
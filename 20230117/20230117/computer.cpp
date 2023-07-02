//#include "computer.h"
//#include <iostream>
//#include<cstring>
//using namespace std;
//
//computer::computer(const char* name)
//{
//	strcpy(owner, name);
//}
//void computer::calculate()
//{
//	cout << "요청 내용을 계산합니다." << endl;
//}
//notebookcomp::notebookcomp(const char* name, int initchag):computer(name)
//{
//	battery = initchag;
//}
//void notebookcomp::charging()
//{
//	battery += 5;
//}
//void notebookcomp::usebattery()
//{
//	battery -= 1;
//}
//void notebookcomp::movingcal()
//{
//	if (getbatteryinfo() < 1)
//	{
//		cout << "충전이 필요합니다" << endl;
//		return;
//	}
//	cout << "이동하면서..";
//	calculate();
//	usebattery();
//}
//int notebookcomp::getbatteryinfo()const
//{
//	return battery;
//}
//tablenotebook::tablenotebook(const char* name, int initchang, const char* pen):notebookcomp(name, initchang)
//{
//	strcpy(regstpenmodel, pen);
//}
//void tablenotebook::write(const char* peninfo)
//{
//	if (getbatteryinfo() < 1)
//	{
//		cout << "충전이 필요합니다" << endl;
//		return;
//	}
//	if (strcmp(regstpenmodel,peninfo))
//	{
//		cout << "등록된 펜이 아닙니다" << endl;
//		return;
//	}
//	cout << "필기내용을처리합니다.";
//	usebattery();
//}
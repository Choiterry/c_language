//#include "employeehandler.h"
//#include<iostream>
//
//using namespace std;
//
//employeehandler::employeehandler()
//{
//	empnum = 0;
//}
//void employeehandler::addemployee(parmanentworker* emp)
//{
//	worker[empnum++] = emp;
//}
//void employeehandler::showallsalaryinfo()const
//{
//	for (int i = 0; i < empnum; i++)
//	{
//		worker[i]->showsalaryinfo();
//	}
//}
//void employeehandler::showtotalsalaryinfo()const
//{
//	int sum = 0;
//	for (int i = 0; i < empnum; i++)
//	{
//		sum = sum + worker[i]->getpay();
//	}
//	cout << "total salary:" << sum << endl;
//}
//employeehandler::~employeehandler()
//{
//	for (int j = 0; j < empnum ; j++)
//	{
//		delete worker[j];
//	}
//}
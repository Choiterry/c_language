#pragma once
#include<iostream>
#include"employee.h"
class employeehandler
{
private:
	employee* emplist[50];
	int empnum;
public:
	employeehandler() : empnum(0)
	{

	}
	void addemployee(employee* emp)
	{
		emplist[empnum++] = emp;
	}
	void showallsalaryinfo() const
	{
		for (int i = 0; i < empnum; i++)
		{
			emplist[i]->showsalaryinfo();
		}
	}
	void showtotalsalary() const
	{
		int sum = 0;
		for (int i = 0; i < empnum; i++)
		{
			sum += emplist[i]->getpay();
		}
		cout << sum << endl;
	}
	~employeehandler()
	{
		for (int i = 0; i < empnum; i++)
		{
			delete emplist[i];
		}
	}
};
#pragma once
#include <iostream>
#include<cstring>
using namespace std;

class employee
{
private:
	char name[100];
public:
	employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void showyourname() const
	{
		cout << name << endl;
	}
	virtual int getpay() const = 0;
	virtual void showsalaryinfo() const = 0;
};

class permanentworker : public employee
{
private:
	int salary;
public:
	permanentworker(const char* name, int money) : employee(name)
	{
		salary = money;
	}
	int getpay() const
	{
		return salary;
	}
	void showsalaryinfo() const
	{
		showyourname();
		cout << getpay() << endl;
	}
};

class salesworker : public permanentworker
{
private:
	int salesresult;
	double bonusratio;
public:
	salesworker(const char* name, int money, double ratio):permanentworker(name, money)
	{
		bonusratio = ratio;
	}
	void addsalesresult(int value)
	{
		salesresult = 0;
		salesresult += value;
	}
	int getpay() const
	{
		return (permanentworker::getpay() + (int)(salesresult * bonusratio));
	}
	void showsalaryinfo() const // 오버라이딩을 통해 이것이 우선으로 실행된다.
	{
		showyourname();
		cout << getpay() << endl;
	}
};

class foreignsalesworker : public salesworker
{
	int risk;
public:
	foreignsalesworker(const char* name, int money, double ratio,int risk) :salesworker(name, money,ratio)
	{
		this->risk = risk;
	}
	int getriskpay() const
	{
		return (int)(salesworker::getpay() * (risk / 100.0));
	}
	int getpay() const
	{
		return (getriskpay() + salesworker::getpay());
	}
	void showsalaryinfo() const // 오버라이딩을 통해 이것이 우선으로 실행된다.
	{
		showyourname();
		cout << getpay() << endl;
	}
};


class temporaryworker : public employee
{
private:
	int worktime;
	int payperhour;
public:
	temporaryworker(const char* name, int pay) :employee(name)
	{
		worktime = 0;
		payperhour = pay;
	}
	void addworktime(int time)
	{
		worktime += time;
	}
	int getpay()const
	{
		return (worktime * payperhour);
	}
	void showsalaryinfo() const
	{
		showyourname();
		cout << getpay() << endl;
	}
};
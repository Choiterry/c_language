#include "person.h"
#include<iostream>
#include<cstring>
using namespace std;

person::person() : name(NULL), age(0)
{
	cout << "called person" << endl;
}

person::person(char* myname, int myage)
{
	int len = strlen(myname) + 1; // cstring 으로 인해 얻을 수 있는 정보로 공간할당을 효율적으로 해줄 수 있다.
	name = new char[len]; // 새로운 공간 만들어주기
	strcpy(name,myname);
	age = myage;
}
person :: ~person()
{
	delete []name;
	cout << "called destructor" << endl;
}
void person::setpersoninfo(char* myname, int myage)
{
	age = myage;
	name = myname;
}
void person::showpersoninfo() const
{
	cout << "my name is" << name << endl;
	cout << "my age is" << age << endl;
}
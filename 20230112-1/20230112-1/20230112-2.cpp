#include <iostream>
#include <cstring>

using namespace std;

class person
{
private:
	char* name;
	int age;
public:
	person()
	{
		name = NULL;
		age = 0;
	}
	person(char* myname, int myage)
	{
		age = myage;
		int len = strlen(name) + 1;
		name = new char[len];
		strcpy(name, myname);
		setpersoninfo(name, age);
	}
	void setpersoninfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void showpersoninfo()
	{
		cout << "이름:" << name << endl;
		cout << "나이:" << age << endl;
	}
	~person()
	{
		delete[]name;
		cout << "destructor called" << endl;
	}
};
int main()
{
	person *parr[2];
	char namestr[100];
	int age;
	for (int i = 0; i < 2; i++)
	{
		cout << "이름:"; cin >> namestr;
		cout << "나이:"; cin >> age;
		parr[i] = new person(namestr, age);
	}
	parr[0]->showpersoninfo();
	parr[1]->showpersoninfo();
	delete parr[0];
	delete parr[1];

	//char namestr1[100] = "terry";
	//char namestr2[100] = "jane";
	//person* p1 = new person(namestr1, 20); // 왜 이부분은 출력되지 않는가
	//person* p2 = new person(namestr2, 12);
	//p1->showpersoninfo();
	//p2->showpersoninfo();

	return 0;
}
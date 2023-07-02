#include <iostream>
#include <cstring>

using namespace std;

class person
{
private:
	char *name;
	int age;
public:
	person()
	{
		name = NULL;
		age = 0;
	}
	person(const char* myname, int myage)
	{
		int len = strlen(name) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
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
		delete []name;
		cout << "destructor called" << endl;
	}
};
int main()
{
	/*person parr[3];
	char namestr[100];
	char* strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름:"; cin >> namestr;
		cout << "나이:"; cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].setpersoninfo(strptr, age);
	}
	parr[0].showpersoninfo();
	parr[1].showpersoninfo();
	parr[2].showpersoninfo();*/
	
	
	person *p1 = new person("terry", 25); // 왜 이부분은 출력되지 않는가
	person *p2 = new person("jane", 20);

	p1->showpersoninfo();
	p2->showpersoninfo();

	return 0;
}
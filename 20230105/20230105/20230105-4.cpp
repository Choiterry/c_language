//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class person
//{
//private:
//	char* name;
//	int age;
//public:
//	person(const char* myname, int myage) // constructor - shallow copy
//	{
//		int len = strlen(name) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	person(const person& copy) // copy constructor - deep copy
//	{
//		age = copy.age; // p1의 age를 p2에 넣어주기
//		name = new char[strlen(copy.name) + 1]; // p1의 name을 p2의 name에 넣어주기
//		strcpy(name, copy.name); // strcpy
//	}
//	void showpersoninfo() const
//	{
//		cout << "이름:" << name << endl;
//		cout << "나이:" << age << endl;
//	}
//	~person()
//	{
//		delete[]name;
//		cout << "destructor called" << endl;
//	}
//};
//int main()
//{
//	person p1("terry", 25);
//	person p2(p1);
//	p1.showpersoninfo();
//	p2.showpersoninfo();
//	return 0;
//}
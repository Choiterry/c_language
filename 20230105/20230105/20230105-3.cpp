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
//	person(const char* myname, int myage)
//	{
//		int len = strlen(name) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	void showpersoninfo()
//	{
//		cout << "이름:" << name << endl;
//		cout << "나이:" << age << endl;
//	}
//	~person()
//	{
//		delete []name;
//		cout << "destructor called" << endl;
//	}
//};
//int main()
//{
//	person p1("terry", 25);
//	person p2(p1);
//	p2.showpersoninfo();
//	p1.showpersoninfo();
//	return 0;
//}
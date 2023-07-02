//#include<iostream>
//using namespace std;
//class first
//{
//public:
//	void myfunc()
//	{
//		cout << "firstfunc" << endl;
//	}
//};
//class second : public first
//{
//public:
//	void myfunc()
//	{
//		cout << "secondfunc" << endl;
//	}
//};
//class third : public second
//{
//public:
//	void myfunc()
//	{
//		cout << "thirdfunc" << endl;
//	}
//};
//int main()
//{
//	third* tptr = new third(); // third 객체 생성
//	second* sptr = new second(); // second 객체 생성
//	first* fptr = new first(); // first 객체 생성
//
//	third* tptr1 = new third(); // third 객체 생성
//	second* sptr1 = tptr1; // third 객체여도 second 변수형으로 저장 가능
//	first* fptr1 = sptr1; // second 객체여도 first 변수형을 저장 가능
//
//	tptr->myfunc(); // third
//	sptr->myfunc(); //second
//	fptr->myfunc(); //first
//
//	tptr1->myfunc(); //third
//	sptr->myfunc(); //second
//	fptr1->myfunc(); //first
//
//	return 0;
//}
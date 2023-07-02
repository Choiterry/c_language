//#include <iostream>
//#include <cstring>
//
//using namespace std;
//template <class t1>
//class point
//{
//private:
//	t1 xpos, ypos;
//public:
//	point(t1 x, t1 y) :xpos(x), ypos(y)
//	{
//
//	}
//	void showdata()
//	{
//		cout << xpos << ypos << endl;
//	}
//};
//
//template <class t2> //t2 로 template 설정 
//class simpledata
//{
//private:
//	t2 mdata; 
//public:
//	simpledata(t2 data)
//	{
//		mdata = data;
//	}
//	void showdata()
//	{
//		cout << mdata << endl;
//	}
//};
//template <>
//class simpledata <char*> // simpledata의 template specialization 을 char*로 설정
//{
//private:
//	char* mdata;
//public:
//	simpledata(const char* data) 
//	{
//		int len = strlen(data) + 1;
//		mdata = new char[len];
//		strcpy(mdata, data);
//	}
//	void showdata()const
//	{
//		cout << mdata << endl;
//		cout << "char* " << endl;
//	}
//};
//template <>
//class simpledata <point<int>> // template 을 point<in>로 설정
//{
//private:
//	point<int> mdata; // 여기에서 point<int>의 호출
//public:
//	simpledata(int num1, int num2): mdata(num1, num2) // specializtion 에 의한 생성자를 따로 설정 -> 바로 point 객체 설정(num1,num2)
//	{
//	}
//	void showdata()
//	{
//		mdata.showdata(); //point의 객체 함수를 호출
//	}
//};
//
//int main()
//{
//	simpledata<int> iwrap(5); //template specialization를 int 로 진행
//	iwrap.showdata();
//	simpledata<char*> swrap("class template"); //
//	swrap.showdata();
//	simpledata<point<int>> poswrap(3, 7);
//	poswrap.showdata();
//	return 0;
//}
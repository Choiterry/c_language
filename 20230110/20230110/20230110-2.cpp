//#include <iostream>
//using namespace std;\
//
//class simpleclass
//{
//private:
//	int num1;
//	int num2;
//public:
//	simpleclass(int n1 = 0, int n2 = 0)
//	{
//		num1 = n1;
//		num2 = n2;
//	}
//	
//	void showdata()
//	{
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//simpleclass sc1() // 함수의 선언을 클라스 안에서 해야하지 않는가?
//{
//	simpleclass sc(20, 30);
//	return sc;
//}
//
//int main()
//{
//	simpleclass sc1(); 
//	simpleclass mysc = sc1();
//	mysc.showdata();
//	return 0;
//}
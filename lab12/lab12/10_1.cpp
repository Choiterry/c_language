//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int* p1, * p2, v1 = 3, v2 = 4;
//
//	p1 = new int;
//	p2 = new int;
//
//	*p1 = 42;
//	*p2 = 53;
//
//	cout << *p1 << endl;
//	cout << *p2 << endl;
//	cout << p1 << endl;
//	cout << p2 << endl;
//
//	p1 = new int;
//	*p1 = 98;
//
//	cout << *p1 << endl;
//	cout << p1 << endl;
//
//	int* p3, * p4;
//	p3 = new int;
//	p4 = new int;
//
//	delete p3;
//
//	p3 = p4;
//
//	delete p4;
//
//	//delete p3;
//	//delete p4; 이렇게 p3 = p4 나오고 나서 delete 하면 p3에 p4 의 주소가 있기 때문에 delete p3 에서 이미 p4 도 같이 진행 되므로 delete p3는 p3 = p4 이전에 진행하여야 한다.
//
//}
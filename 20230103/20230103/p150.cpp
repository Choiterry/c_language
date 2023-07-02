//#include <iostream>
//using namespace std;
//class point
//{
//public:
//	int x; 
//	int y;
//};
//class rectangle
//{
//public:
//	point upleft;
//	point lowright;
//public :
//	void showrecinfo()
//	{
//		cout << "좌상단:" << '[' << upleft.x << ','
//			<< upleft.y<< ']' << endl;
//		cout << "우상단:" << '[' << lowright.x << ','
//			<< lowright.y << ']' << endl;
//	}
//};
//int main()
//{
//	point pos1 = { -2,4 }; //public class 의 멤벼변수가 public 이므로 이렇게 초기화가 가능하다. 
//	point pos2 = { 5,9 }; // public class 의 멤버변수가 private이면 멤버함수를 통해서 초기화가 가능하다.
//	rectangle rec = { pos2,pos1 };
//	rec.showrecinfo();
//	return 0;
//
//}
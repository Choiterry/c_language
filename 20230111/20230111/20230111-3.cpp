//#include <iostream>
//#include<cstring>
//using namespace std;
//
//class point;
//
//class pointop
//{
//private:
//	int opcnt;
//public :
//	pointop()
//	{
//		opcnt = 0;
//	}
//	point pointadd(const point&pnt1, const point&pnt2)
//	{
//		opcnt++;
//		return point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
//	}
//	};
//class point
//{
//private:
//	int x;
//	int y;
//public :
//	point(const int& xpos, const int& ypos)
//	{
//		x = xpos;
//		y = ypos;
//	}
//	friend point pointop::pointadd(const point& pnt1, const point& pnt2);
//
//};
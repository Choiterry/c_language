//#include<iostream>
//#include"boundcheckarray.h"
//#include"point.h"
//
//using namespace std;
//
//int main()
//{
//	boundcheckarray<int> iarr(5);
//	for (int i = 0; i < 5; i++)
//	{
//		iarr[i] = (i + 1) * 11;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << iarr[i];
//	}
//	boundcheckarray<point> parr(3);
//	parr[0] = point(3, 4);
//	parr[1] = point(5, 6);
//	parr[2] = point(7, 8);
//	for (int i = 0; i < parr.getarrlen(); i++)
//	{
//		cout << parr[i];
//	}
//	boundcheckarray<point*> arr(3);
//	arr[0] = new point(3, 4);
//	arr[1] = new point(5, 6);
//	arr[2] = new point(7, 8);
//	for (int i = 0; i < arr.getarrlen(); i++)
//	{
//		cout <<* (arr[i]);
//	}
//}
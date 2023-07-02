//#include "point.h"
//#include<iostream>
//using namespace std;
//
//point::point(const int& x1,  const int& y1) // 생성자를 만들어서 초기화해주는데 const 변수를 쓰고 &를 써서 값에 변화를 준다.
//{
//	x = x1; 
//	y = y1;
//}// const를 빼고 하면 안돌아간다.
//
//int point::getx() const
//{
//	return x; // const를 사용해서 반환값이 변경되지 않게 정보은닉
//}
//int point::gety() const
//{
//	return y; //const를 사용해서 반환값이 변경되지 않게 정보은닉
//}
//bool point::setx(int xpos) //xpos 가지고 와서 실행하고 반환하는것은 어차피 bool값이므로 const 필요없다.
//{
//	if (xpos < 0 || xpos > 100)
//	{
//		cout << "잘못된 범위의 값 전달" << endl;
//		return false;
//	}
//	else
//	{
//		x = xpos;
//		return true;
//	}
//		
//}
//bool point::sety(int ypos) //xpos 가지고 와서 실행하고 반환하는것은 어차피 bool값이므로 const 필요없다.
//{
//	if (ypos < 0 || ypos > 100)
//	{
//		cout << "잘못된 범위의 값 전달" << endl;
//		return false;
//	}
//	else
//	{
//		y = ypos;
//		return true;
//	}
//}
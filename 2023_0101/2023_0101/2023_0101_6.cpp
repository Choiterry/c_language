//#include <iostream>
//using namespace std;
//
//void swappointer(int* (&pref1), int* (&pref2)) // 매개변수의 형태가 포인터 변수이다 그리고 그 포인터 변수 안에 있는 pref 값을 이용하여 swap를 실행한다.
//{
//	int* ptr = pref1; //ptr1이라는 포인터 변수의 참조자 pref1을 이용하여 변수 바꾸기
//	pref1 = pref2;
//	pref2 = ptr;
//}
//void swapbyref(int &a, int& b) // call by reference 의 전형적인 방법
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int num1 = 5;
//	int* ptr1 = &num1;
//
//	int num2 = 10;
//	int* ptr2 = &num2;
//
//	cout << *ptr1 << endl;
//	cout << *ptr2 << endl;
//
//	swapbyref(num1, num2);
//
//	swappointer(ptr1, ptr2);
//
//	cout << *ptr1 << endl;
//	cout << *ptr2 << endl;
//}

#include <iostream>
using namespace std;
void swapbyvalue(int num1, int num2);
void swapbyref(int* ptr1, int* ptr2);
void swapbyref1(int* ptr1, int* ptr2);
void swapbyref2(int& ref1, int& ref2);

int main()
{
	int a = 1, b = 2;
	int *c = &a, *d = &b;

	swapbyvalue(a, b); // 여기에서는 call by value 이기때문에 아래에 출력될때는 안바꿔진 상태로출력된다
	cout << a << b << endl; // 1 2

	swapbyref(c, d); // 여기에서즌 call by reference 이기 때문에 아래에 출력될때 바꿔진 상태로 출력된다
	cout << *c << *d << endl; // 2 1

	swapbyref1(c, d);
	cout << *c << *d << endl;

	swapbyref2(a, b);
	cout << a << b << endl;
}

void swapbyvalue(int num1, int num2)
{
	int temp; // 변수 선언
	temp = num1; //대입 
	num1 = num2; // 대입
	num2 = temp; // 대입
}
void swapbyref(int* ptr1, int* ptr2) // 매개변수가 포인터 변수
{
	int temp =  *ptr1; // 일단 하나 변수 설정해주고 거기에  포인터 변수의 값을 넣어준다
	*ptr1 = *ptr2; // 또다시 그 공간에 다른 값을 넣어준다 변수를 가지고 대입하는거지 주소를 가지고 저장하지는 않는다
	*ptr2 = temp; // 다시 대입해준다
}
void swapbyref1(int* ptr1, int* ptr2) // 이건 왜 call by refernce 처럼 작동하지 않는지 알아볼것
{
	int *t = ptr1;
	ptr1 = ptr2;
	ptr2 = t;
}
void swapbyref2(int &ref1, int &ref2) // 매개변수가 주소값을 가지고 한다 참조자를 사용한 call by reference
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
	cout << ref1;
}
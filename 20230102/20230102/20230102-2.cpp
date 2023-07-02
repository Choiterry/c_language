//#include <iostream>
//using namespace std;
//void swapbyvalue(int num1, int num2);
//void swapbyref(int* ptr1, int* ptr2);
//void swapbyref1(int* ptr1, int* ptr2);
//void swapbyref2(int& ref1, int& ref2);
//
//int main()
//{
//	int a = 1, b = 2;
//
//
//	swapbyvalue(a, b); // 여기에서는 call by value 이기때문에 아래에 출력될때는 안바꿔진 상태로출력된다
//	cout << a << b << endl; // 1 2
//
//	swapbyref(&a, &b); // 여기에서즌 call by reference 이기 때문에 아래에 출력될때 바꿔진 상태로 출력된다
//	cout << a << b << endl; // 2 1
//
//	swapbyref2(a,b);
//	cout << a << b << endl;
//}
//
//void swapbyvalue(int num1, int num2) // num1이라는 공간에 a num2이라는 공간에 b를 대입하고 swap을 하지만 이 함수 바깥에서는 다시 a와 b를 출력하므로 바꿔지지 않은 상태로 출력된다
//{
//	int temp; // 변수 선언
//	temp = num1; 
//	num1 = num2; 
//	num2 = temp; //num2와 num1이 바꿔진 상태 전형적인 call by value
//}
//void swapbyref(int* ptr1, int* ptr2) // ptr1 ptr2는 값의 주소를 저장할 수 있는 포인터변수이다. 여기에 각각 a와b의 주소를 저장한다.
//{
//	int temp = *ptr1; // temp에 a의 주소의 공간에 할당된 변수를 준다
//	*ptr1 = *ptr2; // a의 주소가 가리키는 공간에 b의 주소가 가리키는 공간의 값을 준다.
//	*ptr2 = temp; // b라는 공간의 주소가 가리키는 공간에 temp라는 값을 준다.
//}
//void swapbyref2(int& ref1, int& ref2) // 참조자를 이용한 call by reference로 a라는 곳을 참조자 ref1이 가리키고 있고 b 라는 곳을 참조자 ref2가 가리키고 있다
//{
//	int temp = ref1; // 참조자ref1이 가리키는 곳의 값을 temp에게 주고...
//	ref1 = ref2; // 여기에서 ref1과 ref2를 통해 변수의 값들이 변경되면 call by value와는 다르게 값의 변경이 함수 밖에서도 이루어진다 
//	ref2 = temp; // 왜냐하면 참조자ref1은 a와 동일한 자격을 갖고있기 때문이다.
//}
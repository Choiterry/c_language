//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int val1 = 1;
//	int val2 = 2;
//	const int* ptr1 = &val1;
//	int* const ptr2 = &val2;
//
//	cout << ptr1 << endl << *ptr1 << endl;
//	cout << ptr2 << endl << *ptr2 << endl;
//
//	*ptr1 = &val2; //ptr1라는 주소에 해당하는 변수의 값을 변경할 수 없다
//	cout << ptr1 << endl << *ptr1 << endl;
//	cout << ptr2 << endl << *ptr2;
//
//	ptr2 = ptr1; // ptr2의 주소를 변경할 수 없다
//	cout << ptr1 << endl << *ptr1 << endl;
//	cout << ptr2 << endl << *ptr2;
//}
//

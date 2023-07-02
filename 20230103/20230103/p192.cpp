#include<iostream>
#include<cstring>
#include"person.h"
using namespace std;

int main()
{
	person *parr[3]; // 이거 쓰면서 생성자로 초기화하는 방법은 아래에 포인터 변수에 쓰는 ->operator 쓰면서 쓴다.
	person parr[3]; // 객체 세개 만들어줌거임
	char namestr[100];
	char* strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++) //객체 세개 만들어준거 초기화해주기
	{
		cout << "이름";
		cin >> namestr;
		cout << "나이";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].setpersoninfo(strptr, age);
	}
	parr[0].showpersoninfo();
	parr[1].showpersoninfo();
	parr[2].showpersoninfo();
	return 0;
}
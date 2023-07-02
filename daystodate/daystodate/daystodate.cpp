// daystodate.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string strdays;
	int ndays;
	cout << "오늘은 무슨 요일입니까? 입력할 때는 세글자로 입력해주세요 (예 : 일요일)" << endl;
	cin >> strdays;

	if (strdays == "일요일")
	{
		ndays = 1;
	}
	else if (strdays == "월요일")
	{
		ndays = 2;
	}
	else if (strdays == "화요일")
	{
		ndays = 3;
	}
	else if (strdays == "수요일")
	{
		ndays = 4;
	}
	else if (strdays == "목요일")
	{
		ndays = 5;
	}
	else if (strdays == "금요일")
	{
		ndays = 6;
	}
	else if (strdays == "토요일")
	{
		ndays = 7;
	}
	
	cout << "오늘은" << strdays << "입니다. 숫자로는" << ndays << "입니다" << endl;
	
	switch (ndays)
	{
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		cout << "주중엔 열심히 일하자" << endl;
		break;

	case 7:
	case 1:
		cout << "주말엔 즐겁게 놀자" << endl;
		break;

	default:
			cout << "ndays가 1에서 7까지의 숫자이어야 합니다" << endl;
	}
}

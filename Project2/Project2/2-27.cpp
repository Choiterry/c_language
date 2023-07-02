#include <iostream>
#include <string>
using namespace std;
int main()
{
	string strDays;
	int nDays = 0;

	cout << "오늘은 무슨 요일입니까? 입력할 때는 세글자로 입력해주세요 (예 : 일요일)" << endl;
	cin >> strDays;

	if (strDays == "일요일")
	{
		nDays = 1;
	}
	else if (strDays == "월요일")
	{
		nDays = 2;
	}
	else if (strDays == "화요일")
	{
		nDays = 3;
	}
	else if (strDays == "수요일")
	{
		nDays = 4;
	}
	else if (strDays == "목요일")
	{
		nDays = 5;
	}
	else if (strDays == "금요일")
	{
		nDays = 6;
	}
	else if (strDays == "토요일")
	{
		nDays = 7;
	}
	cout << "오늘은" << strDays << "입니다.숫자로는" << nDays << "입니다" << endl;

	switch (nDays)
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
		cout << "nDays 가 1에서 7 사이의 숫자여야 하는데 잘못 입력하셨습니다." << endl;
		cout << "20192647_최준혁" << endl;
	}
	return 0;
}
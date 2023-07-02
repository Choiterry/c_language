#include "fruitseller.h"
#include <iostream>
using namespace std;

fruitseller::fruitseller(int a,int b,int c)
{
	apple_price = a;
	numofapples = b;
	mymoney = c;
}
int fruitseller::salesapples(int money) // 여기에 const 못 붙이는 이유는 numofapples 와 같은 멤 버변수를 수정하기 때문이다.
{
	int num = money / apple_price;
	numofapples -= num;
	mymoney += money;
	return num;
}
void fruitseller::showsalesresult()const
{
	cout << "과일 판매지의 현황 " << endl;
	cout << "남은사과:" << numofapples << endl;
	cout << "판매수익" << mymoney << endl;
}
fruitbuyer::fruitbuyer(int a) // 여기도 const가 붙지 못한다.
{
	mymoney = a;
	numofapples = 0;

}
void fruitbuyer::buyapples(fruitseller &seller,int money)
{
	numofapples += seller.salesapples(money);
	mymoney -= money;
}
void fruitbuyer::showbuyresult()const // 여기는 단지 출력이기 때문에 const 붙일 수 이따.
{
	cout << "과일구매지의 현황 " << endl;
	cout << "현재 잔액:" << mymoney << endl;
	cout << "사과 갯수:" << numofapples << endl;
}
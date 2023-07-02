#include<iostream>
#include"fruitseller.h"
using namespace std;

int main()
{
	fruitseller seller(1000, 20, 0);
	fruitbuyer buyer(5000);

	buyer.buyapples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.showsalesresult();
	cout << "과일 구매자의 현황" << endl;
	buyer.showbuyresult();
	return 0;
}
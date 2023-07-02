#include "credit.h"
using namespace std;


void credit::work()
{

}
void credit::work(char *name, char *id, double money)
{
	
	p_name = name;
	p_id = id;
	p_money = money;

}
void credit::a()
{
	cout << "[계좌개설]" << endl;
	cout << "계좌 id :";
	cin >> id;
	cout << "이름 :";
	cin >> name;
	cout << "입금액 :";
	cin >> money;
	work(name, id, money);
	sum = sum + money;
	cout << "입금완료" << endl;
}
void credit:: b()
{
	cout << "[입금]" << endl;
	cout << "계좌 id :";
	cin >> id;
	cout << "이름 :";
	cin >> name;
	cout << "입금액 :";
	cin >> money;
	work(name, id, money);
	sum = sum + money;
	cout << "입금완료" << endl;
}
void credit:: c()
{

}
void credit:: d()
{

}

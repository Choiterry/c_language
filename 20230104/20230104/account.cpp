//#include "account.h"
//#include <iostream>
//#include<cstring>
//#include<string.h>
//using namespace std;
//
//account::account()
//{
//	accid = 0;
//	balance = 0;
//	username = NULL;
//}
//account::account(int accid, int balance, char* username)
//{
//	this->accid = accid;
//	this->balance = balance;
//	this->username = new char[strlen(username) + 1];
//	strcpy(this->username, username);
//}
//account::~account()
//{
//	delete[]username;
//	cout << "called destructor" << endl;
//}
//int account::getid()
//{
//	return this->accid;
//}
//void account::deposit(int money)
//{
//	balance = balance + money;
//}
//int account::withdraw(int money) // 원래 남은 금액에서 momey만큼 빼고 return momney를한다.
//{
//	if (balance < money)
//		return 0;
//	balance = balance - money;
//	return balance;
//}
//void account::showaccinfo()
//{
//	cout << "계좌id:" << accid << endl;
//	cout << "이름:" << username << endl;
//	cout << "잔액:" << balance << endl;
//}
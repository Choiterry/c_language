#include <iostream>
#include <cstring>
#include"bankfunc.h"
using namespace std;

enum {make =1,deposit,withdraw,inquire,EXIT};

int main()
{
	bankfunc manager;
	int choice;

	while (1)
	{
		manager.showmenu();
		cout << "선택" << endl;
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case make:
			manager.makeaccount();
			break;
		case deposit:
			manager.depositmoney();
			break;
		case withdraw:
			manager.withdrawmoney();
			break;
		case inquire:
			manager.showallaccinfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "illegal selection" << endl;
		}
	}
}
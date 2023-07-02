//#include <iostream>
//#include <cstring>
//#include"account.h"
//using namespace std;
//void showmenu();
//void makeaccount();
//void depositmoney();
//void withdrawmoney();
//void showaccinfo();
//
//account *accarr[100]; // 100개의 account 생성하여 100개의 사용자를 만들어낼 수 있다. 
// 포인터변수로 클래스를 만들지 않았을때 그냥 클래스의 객체를 쓸때 자동으로 생성자가 실행된다 만약 이렇게 포인터변수를 통해서 동적할당을
// 한다면 원할 때 원하는 변수를 생성해서 사용할 수 있다.
//int accnum = 0; //전역변수를 사용함으로서 얻을 수 있는 이점
//
//int main()
//{
//	int choice;
//	while(1) // 무한반복
//	{
//		showmenu();
//		cout << "선택";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			makeaccount();
//			break;
//		case 2:
//			depositmoney();
//			break;
//		case 3:
//			withdrawmoney();
//			break;
//		case 4:
//			showaccinfo();
//			break;
//		case 5:
//			for (int i = 0; i < accnum; i++)
//			{
//				delete accarr[i];
//				return 0;
//			}
//		default :
//			cout << "illegal" << endl;
//		}
//	}
//	return 0;
//}
//void showmenu()
//{
//		cout << "------menu------" << endl;
//		cout << "1 계좌개설" << endl;
//		cout << "2. 입금" << endl;
//		cout << "3. 출금" << endl;
//		cout << "4. 계좌정보 전체 출력" << endl;
//		cout << "5. 프로그램 종료" << endl;
//}
//void makeaccount()
//{
//	int money;
//	int id;
//	char name[100];
//	cout << "[계좌개설]" << endl;
//	cout << "계좌 id : "; cin >> id;
//	cout << "이름 : "; cin >> name;
//	cout << "입금액 : "; cin >> money;
//	cout << endl;
//	accarr[accnum++] = new account(id, money, name); // 새로운 계좌생성- 포인터 변수를 사용함으로써 new 연산자를 사용해서 생성자로 초기화한다
//}
//void depositmoney()
//{
//	int money;
//	int id;
//	cout << "[입금]" << endl;
//	cout << "계좌 id : "; cin >> id;
//	cout << "입금액 : "; cin >> money;
//	cout << endl;
//	for (int i = 0; i < accnum; i++) // 
//	{
//		if (accarr[i]->getid() == id)//반복문을 통하여 사용자의 id를 비교하여 맞으면 deposit을 하고 리턴한다
//		{
//			accarr[i]->deposit(money);
//			cout << "입금완료" << endl;
//			return;
//		}
//		cout << "유효하지 않은 id 입니다" << endl; // 위에서 걸리지 않으면 알아서 출력 만약 위에서 걸렸으면 이미 리턴해서 나갔을것
//	}
//}
//void withdrawmoney()
//{
//	int money;
//	int id;
//	cout << "[입금]" << endl;
//	cout << "계좌 id : "; cin >> id; 
//	cout << "출금액 : "; cin >> money;
//	cout << endl;
//	for (int i = 0; i < accnum; i++)
//	{
//		if (accarr[i]->getid() == id)
//		{
//			if (accarr[i]->withdraw(money) == 0)
//			{
//				cout << "잔액부족" << endl;
//				return;
//			}
//			cout << "출금완료" << endl;
//			return;
//		}
//		cout << "유효하지 않은 id 입니다" << endl;
//	}
//}
//void showaccinfo()
//{
//	for (int i = 0; i < accnum; i++)
//	{
//		accarr[i]->showaccinfo(); // 생성된 모든 계좌를 출력한다
//		cout << endl;
//	}
//}
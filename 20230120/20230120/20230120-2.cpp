#include<iostream>
#include"employeehandler.h"
namespace risk_level
{
	enum
	{
		risk_a=1,risk_b,risk_c
	};
}
using namespace std;

int main()
{
	employeehandler handler;

	handler.addemployee(new permanentworker("kim", 2000)); // 그냥 permanenet의 객체생성하고 바로 add하기
	handler.addemployee(new permanentworker("lee", 1500)); // 그냥 permanenet의 객체생성하고 바로 add하기

	temporaryworker* alba = new temporaryworker("jung", 700); // temporaryworker 객체생성하고 바로 add하지 않고 worktime 넣고 add하기
	alba->addworktime(5);
	handler.addemployee(alba);

	salesworker* seller = new salesworker("hong", 1000, 0.1); // salesworker 객체생성하고 salesresult 넣고 add 하기
	seller->addsalesresult(7000);
	handler.addemployee(seller);

	foreignsalesworker* fseller = new foreignsalesworker("hong", 1000, 0.1, risk_level::risk_a); // foreignworker 객체생성하고 risk와 salesresult 넣고 add하기
	fseller->addsalesresult(7000);
	handler.addemployee(fseller);


	handler.showallsalaryinfo();
	handler.showtotalsalary();

	return 0;
}
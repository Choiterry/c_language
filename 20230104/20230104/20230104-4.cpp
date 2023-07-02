#include<iostream>
#include"cdyna.h"
using namespace std;

int main()
{
	int psch[3] = { 100,200,300 };

	cdyna* cd;
	cd = new cdyna();
	cd->setinfo(3, psch);
	cd->showschedule();

}
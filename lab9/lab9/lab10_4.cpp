#include <iostream>
#include "cdyna.h"
using namespace std;

int main()
{
	cout << "20192647 최준혁" << endl;

	cdyna adyna;
	adyna.showschedule();
	const int nsize = 3;
	int psch[nsize] = { 900,1100,1300 };

	cdyna* pdyna;
	pdyna = new cdyna();
	pdyna->setinfo(nsize, psch);
	pdyna->showschedule();

	cdyna anotherdyna;
	anotherdyna = *pdyna;
	anotherdyna.showschedule();

	delete pdyna;
}
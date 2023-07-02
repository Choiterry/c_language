#include "linked.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "20192647 최준혁" << "\n";
	char c;
	Queue <cmyclass> q;

	while (1)
	{
		cin >> c;
		if (c == '.')
			break;
		q.enQueue(c);
	}
	while (!q.isempty())
	{
		cout << "Q : " << q.deQueue() << *"\n";
	}
	return 0;
}
ostream& operator<<(ostream& outStream, const cmyclass& c) {
	outStream << "Data : " << c.number << "\n" ;
	return outStream;
}
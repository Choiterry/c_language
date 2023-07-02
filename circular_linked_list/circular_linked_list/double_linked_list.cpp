#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	cout << "DS2023-HW1-가반-최준혁-20192647";
	list l;
	elementtype i;
	cout << "type excpet 0" << "\n";
	cin >> i;
	while (i!=0) // if i=0 break
	{
		l.inserthead(i);
		cin >> i;
	}
	elementtype element;
	bool empty(l.first(element));
	while (empty)
	{
		cout << element;
		empty = l.next(element);
		
	}
	if (empty == false)
		empty = true;
	cout << "\n";
	while (empty)
	{
		cout << element;
		empty = l.previous(element);
	}
	return 0;
}
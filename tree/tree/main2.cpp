#include <iostream>
#include "bst.h"
using namespace std;

int main()
{
  cout << "20192647 최준혁" << endl;
	typedef bst<int> intbst;
	typedef intbst* intbstptr;
	
	intbstptr b(new intbst);
	b->insert(17);
	b->insert(10);
	b->insert(26);
	b->insert(6);
	b->insert(14);
	b->insert(20);
	b->insert(28);
	b->insert(11);
	b->insert(31);
	b->insert(37);
	b->insert(12);
	
	intbstptr get11((bst<int>*)b->retrieve(11));
	if (get11->isempty())
	{
		cout << "11 not found" << "\n";
	}
	else
	{
		cout << "11 found" << "\n";
	}
	intbstptr get13((bst<int>*)b->retrieve(13));
	if (get13->isempty())
	{
		cout << "13 not found" << "\n";
	}
	else
	{
		cout << "13 found" << "\n";
	}
	return 0;
}

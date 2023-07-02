//#include <iostream>
//#include <cassert>
//
//using namespace std;
//typedef int elementtype;
//const int maxlist = 1000;
//class list
//{
//private:
//	elementtype listarray[1000];
//	int numberofelements;
//	int currentposition;
//public:
//	list()
//	{
//		numberofelements = 0;
//		currentposition = -1;
//	}
//	void insert(const elementtype& elem)
//	{
//		assert(numberofelements < maxlist);
//		listarray[numberofelements] = elem;
//		numberofelements++;
//	}
//	bool first(elementtype& elem)
//	{
//		if (numberofelements == 0)
//			return false;
//		else
//		{
//			currentposition = 0;
//			elem = listarray[currentposition];
//			return true;
//		}
//	}
//	bool next(elementtype& elem)
//	{
//		assert(currentposition >= 0);
//		if (currentposition >= numberofelements-1)
//			return false;
//		else
//		{
//			currentposition++;
//			elem = listarray[currentposition];
//			return true;
//		}
//	}
//};
//
//int main()
//{
//	cout << "DS2023-HW1-가반-최준혁-20192647\n";
//	list l;
//	elementtype i;
//
//	cout << "enter items to add to list , add o to stop" << "\n";
//	cin >> i;
//	while (i != 0)
//	{
//		l.insert(i);
//		cin >> i;
//	}
//	cout << "her is the itmes in the list\n";
//	elementtype elem;
//	bool notempty(l.first(elem));
//	while (notempty)
//	{
//		cout << elem << endl;
//		notempty = l.next(elem);
//	}
//	return 0;
//}
//#include<iostream>
//#include<cassert>
//using namespace std;
//
//typedef int elementtype;
//
//class list
//{
//private:
//	struct node;
//	struct node
//	{
//		elementtype elem;
//		node* next;
//	};
//	node* head;
//	node* current;
//	node* tail;
//public:
//	list()
//	{
//		head = 0;
//		current = 0;
//		tail = 0;
//	}
//	~list()
//	{
//		while (head != 0)
//		{
//			node* delnode = head;
//			head = head->next;
//			delete delnode;
//		}
//	}
//	bool first(elementtype& elem)
//	{
//		if (head == 0)
//		{
//			return false;
//		}
//		else
//		{
//			elem = head->elem;
//			current = head;
//			return true;
//		}
//	}
//	bool next(elementtype& elem)
//	{
//		assert(current);
//		if (current->next == 0)
//			return false;
//		else
//		{
//			current = current->next;
//			elem = current->elem;
//			return true;
//		}
//	}
//	void inserttail(elementtype& elem)
//	{
//		node* addednode = new node;
//		assert(addednode);
//		addednode->elem = elem;
//		if (head == 0)
//		{
//			head = addednode;
//			tail = addednode;
//		}
//		else
//		{
//			tail->next = addednode;
//			tail = addednode;
//			tail->next = 0;
//		}
//	}
//	/*void inserthead(elementtype& elem)
//	{
//		node* addednode = new node;
//		assert(addednode);
//		addednode->elem = elem;
//		if (tail == 0)
//		{
//			head = addednode;
//			tail = addednode;
//		}
//		else
//		{
//			addednode->next = head;
//			head = addednode;
//		}
//	}*/
//};
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
//		l.inserttail(i);
//		cin >> i;
//	}
//	cout << "her is the itmes in the list\n";
//	elementtype elem;
//	bool notempty(l.first(elem));
//	while (notempty)
//	{
//		cout << elem << " ";
//		notempty = l.next(elem);
//	}
//	return 0;
//}
//	
//#include<iostream>
//#include"cassert"
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
//		node* next;
//		elementtype elem;
//	};
//	node* head;
//	node* tail;
//	node* current;
//public:
//	list()
//	{
//		head = new node;
//		current = 0;
//		tail = 0;
//		head->next = 0;
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
//		if (head->next == 0)
//		{
//			return false;
//		}
//		else
//		{
//			current = head->next;
//			elem = current->elem;
//			return true;
//		}
//	}
//	bool next(elementtype& elem)
//	{
//		assert(current != 0);
//		if (current->next == 0)
//		{
//			return false;
//		}
//		else
//		{
//			current = current->next;
//			elem = current->elem;
//			return true;
//		}
//	}
//	void insertdummy(elementtype& elem)
//	{
//		node* addednode = new node;
//		assert(addednode);
//		addednode->elem = elem;
//		node* pred = head;
//	
//		while (pred->next!=0 && pred->next->elem < addednode->elem)
//			{
//				pred = pred->next;
//			}
//			addednode->next = pred->next;
//			pred->next = addednode;
//		
//	}
//	void remove(int target)
//	{
//		node* delnode;
//		node* pred;
//		assert(head);
//		for (pred = head; pred->next->elem < target; pred = pred->next);
//		if (pred && pred->next && pred->next->elem == target)
//		{
//			delnode = pred->next;
//			pred->next = delnode->next;
//			delete delnode;
//		}
//	}
//	/*list()
//	{
//		head = new node;
//		assert(head);
//		head->next = 0;
//		current = 0;
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
//		
//	bool first(elementtype& elem)
//	{
//		if (head->next == 0)
//		{
//			return false;
//		}
//		else
//		{
//			current = head->next;
//			elem = current->elem;
//			return true;
//		}
//	}
//	bool next(elementtype& elem)
//	{
//		if (current->next == 0)
//		{
//			return false;
//		}
//		else
//		{
//			current = current->next;
//			elem = current->elem;
//			return true;
//		}
//	}
//	void insertdummy(elementtype& elem)
//	{
//		node* addednode = new node;
//		assert(addednode);
//		addednode->elem = elem;
//		node* pred = head;
//		while (pred ->next != 0 && pred->next->elem < addednode->elem)
//		{
//			pred = pred->next;
//		}
//		addednode->next = pred->next;
//		pred->next = addednode;
//	}*/
//	/*void remove(const elementtype& target)
//	{
//		assert(head);
//		node* pred;
//		node* delnode;
//		for (pred = head; pred->next != 0 && pred->next->elem < target; pred = pred->next);
//		if (pred && pred->next&&pred->next->elem == target)
//		{
//			delnode = pred->next;
//			pred->next = delnode->next;
//			delete delnode;
//		}
//	}*/
//};
//int main()
//{
//	cout << "DS2023-HW1-가반-최준혁-20192647\n";
//	list l;
//	elementtype q;
//	cout << "type it \n";
//	cin >> q;
//	while (q != 0)
//	{
//		l.insertdummy(q);
//		cin >> q;
//	}
//	l.remove(5);
//	cout << "here is the element\n";
//	elementtype element;
//	bool notempty(l.first(element));
//	while (notempty)
//	{
//		cout << element << "\n";
//		notempty = l.next(element);
//	}
//	return 0;
//
//}
//

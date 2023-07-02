#include<iostream>
#include<cassert>

using namespace std;
typedef int elementtype;

class list
{
private:
	struct node;
	struct node
	{
		node* next;
		elementtype elem;
	};
	node* head;
	node* current;
public:
	list()
	{
		head = 0;
		current = 0;
	}
	~list()
	{
		while (head != 0)
		{
			node* delnode = head;
			head = head->next;
			delete delnode;
		}
	}
	bool first(elementtype& elem)
	{
		if (head == 0)
		{
			return false;
		}
		else
		{
			elem = head->elem;
			current = head;
			return true;
		}
	}
	bool next(elementtype& elem)
	{
		assert(current);
		if (current->next == 0)
		{
			return false;
		}
		else
		{
			current = current->next;
			elem = current->elem;
			return true;
		}
	}
	void insertinorder(elementtype& elem)
	{
		node* addednode = new node;
		assert(addednode);
		addednode->elem = elem;
		if (head == 0 || elem < head->elem)
		{
			addednode->next = head;
			head = addednode;
		}
		else
		{
			node* pred = head;
			while (pred->next != 0 && pred->next->elem < elem)
			{
				pred = pred->next;
			}
			addednode->next = pred->next;
			pred->next = addednode;

		}
		

	}
};


int main()
{
	cout << "DS2023-HW1-가반-최준혁-20192647\n";
	list l;
	elementtype q;
	cout << "type it \n";
	cin >> q;
	while (q!=0)
	{
		l.insertinorder(q);
		cin >> q;
	}
	cout << "here is the element\n";
	elementtype element;
	bool notempty(l.first(element));
	while (notempty)
	{
		cout << element << "\n";
		notempty = l.next(element);
	}
	return 0;

}
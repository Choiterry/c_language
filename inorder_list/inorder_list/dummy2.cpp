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
		head = new node;
		head->next = 0;
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
		if (head->next == 0)
		{
			return false;
		}
		else
		{
			current = head->next;
			elem = current->elem;
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
	void insertdummy(elementtype& elem)
	{
		node* addednode = new node;
		assert(addednode);
		addednode->elem = elem;
		node* pred = head;
		while (pred->next!=0 && pred->next->elem < addednode->elem)
		{
			pred = pred->next;
		}
		addednode->next = pred->next;
		pred->next = addednode;
	}
	void remove(elementtype& target)
	{
		node* delnode;
		node* pred;
		assert(head);
		for (pred = head; pred->next->elem < target; pred = pred->next);
		if (pred && pred->next && pred->next->elem == target)
		{
			delnode = pred->next;
			pred->next = delnode->next;
			delete delnode;
		}
	}

};

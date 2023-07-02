#include "list.h"
list::list() //initialize
{
	head = 0;
	current = 0;
}
list::~list() // delete
{
	node* delnode = head;
	head = head->next;
	delete delnode;
}
void list::inserthead(const elementtype& elem)
{
	//standard
	node* addednode = new node;
	assert(addednode);
	addednode->elem = elem;
	
	if (head==0)
	{
		addednode->next = head;
		addednode->prev = 0;
		head = addednode;
	}
	else
	{
		addednode->next = head;
		head->prev = addednode;
		addednode->prev = 0;
		head = addednode;
	}
	
}
bool list::first(elementtype& elem)
{
	//standard
	assert(head);
	if (head == 0)
		return false;
	else
	{
		elem = head->elem;
		current = head;
		return true;
	}
}
bool list::next(elementtype& elem)
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
bool list::previous(elementtype& elem)
{
	assert(current);
	if( (current->prev) == 0)
	{
		return false;
	}
	else
	{
		current = current -> prev;
		elem = current->elem;
		return true;
	}
}

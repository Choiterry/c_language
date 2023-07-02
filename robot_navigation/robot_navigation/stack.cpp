#include "stack.h"
template <class stackelementtype>
stack <stackelementtype>::stack()
{
	topindex = -1;
}

//template <class stackelementtype>
//void stack <stackelementtype>::push(stackelementtype item)
//{
//	++topindex;
//	assert(topindex < maxstacksize);
//	stackarray[topindex] = item;
//}
template <class stackelementtype>
void stack <stackelementtype>::push(stackelementtype item)
{
	node* addednode = new node;
	assert(addednode);
	addednode->elem =item;
	head->next = addenode->next;
	head = addenode;
}
template <class stackelementtype>
stackelementtype stack <stackelementtype>::pop()
{
	assert(topindex >= 0);
	int returnindex(topindex);
	--topindex;
	return stackarray[returnindex];
}
template <class stackelementtype>
stackelementtype stack <stackelementtype>::pop()
{
	node* delnode = new node;
	assert(delnode);
	delnode = head;
	head = head->next;
	delete delnode;
	return head->elem;
}

template <class stackelementtype>
stackelementtype stack <stackelementtype>::top()
{
	assert(topindex >= 0);
	return stackarray[topindex];
}

template <class stackelementtype>
bool stack <stackelementtype>::isempty()
{
	return bool(topindex == -1);
}
template <class stackelementtype>
bool stack <stackelementtype>::isfull()
{
	return bool(topindex == 999);
}

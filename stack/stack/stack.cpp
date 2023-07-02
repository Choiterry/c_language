//#include "stack.h"
//
//template <class stackelementtype>
//stack <stackelementtype>::stack()
//{
//	head = 0;
//}
//template <class stackelementtype>
//void stack<stackelementtype>::push(stackelementtype item)
//{
//	node* addednode = new node;
//	assert(addednode);
//	addednode->data = item;
//	addednode->next = head;
//	head = addednode;
//	topindex++;
//}	
//template <class stackelementtype>
//stackelementtype stack <stackelementtype>::pop()
//{
//	assert(head != 0);
//	topindex--;
//	node delnode = head;
//	stackelementtype e;
//	e = delnode->data;
//	head = head->next;
//	delete  delnode;
//	return e;
//}
//template <class stackelementtype>
//stackelementtype stack <stackelementtype>::top()
//{
//	assert(head != 0);
//	return head->data;
//}
//template <class stackelementtype>
//bool stack <stackelementtype>::isempty()
//{
//	return bool(head==0);
//}
//template <class stackelementtype>
//bool stack <stackelementtype>::isfull()
//{
//	return bool( topindex == maxstacksize-1);
//}

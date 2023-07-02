#pragma once
#include"cassert"
typedef char stackelementtype;
const int maxstacksize = 1000;
template <class stackelementtype>
class stack
{
private:
	stackelementtype stackarray[maxstacksize];
	int topindex;
	struct node;
	struct node
	{
		node*next ;
		stackelementtype elem;
	};
	node* head;
public:
	stack();
	void push(stackelementtype item);
	stackelementtype pop();
	stackelementtype top();
	bool isempty();
	bool isfull();
};


#pragma once
#include"cassert"
typedef int elementtype;
class list
{
private:
	struct node;
	struct node
	{
		node* next; 
		node* prev;
		elementtype elem;
	};
	node* head;
	node* current;
public:
	list();
	~list();
	void inserthead(const elementtype& elem);
	bool first(elementtype& elem);
	bool next(elementtype& elem);
	bool previous(elementtype& elem);
		
};


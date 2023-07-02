#include<iostream>
using namespace std;

template <class listelementtype>
class listiter;

template <class listelementtype>
class list
{
public:
	list() :head(0) {}
	virtual void insert(const listelementtype& elem);
	friend class listiter<listelementtype>;
protected:
	struct node;
	typedef node* link;
	struct node {
		listelementtype elem;
		link next;
	};
	link head;
};
template <class listelementtype>
void
list<listelementtype>::insert(const listelementtype& elem)
{
	link addednode = new node;
	assert(addednode);
	addednode->elem = elem;
	addednode->next = head;
	head = addednode;
}

template <class listelementtype>
class listiter
{
public:
	listiter(const list<listelementtype>& L, listelementtype endflag) :mylist(L), myendflag(endflag), iterptr(0) {}
	virtual listelementtype operator++();
protected:
	const list<listelementtype>& mylist;
	typename list <listelementtype>::link iterptr; //여기 이렇게 수정함
	listelementtype myendflag;
};

template <class listelementtype>
listelementtype
listiter<listelementtype>::operator++()
{
	if (iterptr == 0)
		iterptr = mylist.head;
	else
		iterptr = iterptr->next;
	if (iterptr)
		return iterptr->elem;
	else
		return myendflag;
}

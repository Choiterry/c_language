#pragma once
#include <iostream>
#include <cassert>
using namespace std;

class cmyclass
{
private:
	int number;
public:
	cmyclass()
	{
		number = 0;
	}
	cmyclass(int n)
	{
		number = n;
	}
	friend ostream& operator<<(ostream& outStream, const cmyclass& c);
};
typedef cmyclass Queueelementtype;

template <class Queueelementtype>
class Queue
{
private:
    struct node;
	typedef node* nodeptr;
    struct node
    {
        Queueelementtype elem;
        nodeptr next;
    };
    nodeptr f;
    nodeptr r;
public:
    Queue();
    ~Queue();
    void enQueue(Queueelementtype e);
    Queueelementtype deQueue();
    Queueelementtype front();
    bool isempty();
};

template <class Queueelementtype>
Queue <Queueelementtype> ::Queue()
{
	r = 0;
	f = 0;
}
template <class Queueelementtype>
Queue <Queueelementtype> :: ~Queue()
{
	while (f != 0)
	{
		nodeptr delNode = f;
		f = f->next;
		delete delNode;
	}
}
template <class Queueelementtype>
void Queue <Queueelementtype> ::enQueue(Queueelementtype e)
{
	nodeptr addednode(new node);
	assert(addednode);
	addednode->next = 0;
	addednode->elem = e;
	if (f != 0)
	{
		r->next = addednode;
		r = addednode;
	}
	else
	{
		f = addednode;
		r = addednode;
	}
}
template <class Queueelementtype>
Queueelementtype Queue <Queueelementtype> ::deQueue()
{
	assert(f); //delete 할 수 있는 칸이 있는지 확인
	nodeptr del = f; //앞에서 부터 지운다
	Queueelementtype delelem = f->elem; //del 의 elem을 미리 받아놓는다
	f = f->next; //f를 한칸 next한다
	delete del;//delete 한다
	if (f == 0) //남은 게 없다
	{
		r = 0;
	}
	return delelem; //delete한 elem return
}
template <class Queueelementtype>
Queueelementtype Queue <Queueelementtype> ::front()
{
	assert(f); //맨앞이 살아있는지 확인
	return f->elem; //맨앞 elem return 
}
template <class Queueelementtype>
bool Queue <Queueelementtype> ::isempty()
{
	return (f == 0);
}


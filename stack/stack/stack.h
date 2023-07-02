//#pragma once
//#include<cassert>
//#include<iostream>
//
//const int maxstacksize = 1000;
//template <class stackelementtype>
//class stack
//{
//private:
//	struct node;
//	struct node
//	{
//		stackelementtype data;
//		node* next;
//	};
//	node* head;
//	int topindex;
//public:
//	stack();
//	void push(stackelementtype item);
//	stackelementtype top();
//	stackelementtype pop();
//	bool isempty();
//	bool isfull();
//};
// 
//
#include <cassert>

//#ifndef __MB_CX8_1__
#define __MB_CX8_3__
//#include "dslib.h"
const int maxStackSize = 1000;
template < class StackElementType >

class Stack {
public:
    Stack();
    void push(StackElementType item);
    StackElementType pop();
    StackElementType top();
    bool isEmpty();
    bool isFull();
private:
    StackElementType stackArray[maxStackSize];
    int topIndex;
};

template < class StackElementType >
Stack < StackElementType >::Stack() {
    topIndex = -1;
}

template < class StackElementType >
void
Stack < StackElementType >::push(StackElementType item) {
    ++topIndex;
    assert(topIndex < maxStackSize);
    stackArray[topIndex] = item;
}

template < class StackElementType >
StackElementType
Stack < StackElementType >::pop() {
    assert(topIndex >= 0);
    int returnIndex(topIndex);
    --topIndex;
    return stackArray[returnIndex];
}

template < class StackElementType >
StackElementType
Stack < StackElementType >::top() {
    assert(topIndex >= 0);
    return stackArray[topIndex];
}

template < class StackElementType >
bool
Stack < StackElementType >::isEmpty() {
    return bool(topIndex == -1);
}

template < class StackElementType >
bool
Stack < StackElementType >::isFull() {
    return topIndex == maxStackSize - 1;
}



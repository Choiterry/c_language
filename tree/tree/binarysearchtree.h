#pragma once
#include<iostream>
#include<cassert>
using namespace std;

template <class btelementtype>
class binarytree
{
public:
	binarytree();
	bool isempty() const;
	btelementtype getdata() const;
	virtual void insert(const btelementtype& data);
	binarytree* left();
	binarytree* right();
	void makeleft(binarytree* t1);
	void makeright(binarytree* t1);
protected: //트리의 전형적인 형태
	bool nulltree; //만약 true이면 비어있는 트리
	btelementtype treedata; //data를 넣는 공간
	binarytree* lefttree; //왼쪽 트리의 주소값
	binarytree* righttree; //오른쪽 트리의 주소값
};

template <class btelementtype>
binarytree<btelementtype> ::binarytree()
{
	nulltree = true;
	lefttree = 0;
	righttree = 0;
}
template <class btelementtype>
bool binarytree<btelementtype> ::isempty()const
{
	return nulltree;
}
template <class btelementtype>
btelementtype binarytree <btelementtype>::getdata() const
{
	assert(!isempty());
	return treedata;
}
template <class btelementtype>
void binarytree <btelementtype>::insert(const btelementtype& data)
{
	treedata = data;
	if (nulltree)
	{
		nulltree = false;
		lefttree = new binarytree;
		righttree = new binarytree;
	}
}
template <class btelementtype>
binarytree<btelementtype>* binarytree<btelementtype>::left()
{
	assert(!isempty());
	return lefttree;
}
template <class btelementtype>
binarytree<btelementtype>* binarytree<btelementtype>::right()
{
	assert(!isempty());
	return righttree;
}
template <class btelementtype>
void binarytree<btelementtype>::makeleft(binarytree* t1)
{
	assert(!isempty());
	assert(left()->isempty());
	delete left();
	lefttree = t1;
}

template <class btelementtype>
void binarytree<btelementtype>::makeright(binarytree* t1)
{
	assert(!isempty());
	assert(right()->isempty());
	delete right();
	lefttree = t1;
}

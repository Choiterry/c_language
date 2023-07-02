#pragma once
#include<iostream>
#include<cassert>
using namespace std;

class graph
{
public:
	graph(int size) :n(size), m(0) {}
	virtual int vertexsize() { return n; }
	virtual int edgesize() { return m; }
	virtual void addedge(int fromv, int tov) = 0;
protected:
	int n;
	int m;
};

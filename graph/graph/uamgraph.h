#pragma once
#include"amgraph.h"
class uamgraph : public amgraph
{
public : 
	uamgraph(int size, int initialvalue = 0) : amgraph(size)
	{}
	virtual void addedge(int fromv, int tov);
};

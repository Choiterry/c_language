#pragma once
#include"amgraph.h"
class damgraph : public amgraph
{
public: 
	damgraph(int size, int initialvalue = 0) : amgraph(size)
	{

	}
	virtual void addedge(int fromv, int tov);
};


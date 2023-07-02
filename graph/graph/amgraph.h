#pragma once
#include"graph.h"

class amgraph : public graph
{
public:
	amgraph(int size);
	virtual bool edgemember(int fromv, int tov);
protected:
	int** am;
};
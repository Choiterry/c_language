#include "amgraph.h"

amgraph::amgraph(int size) : graph(size)
{
	int i;
	am = new int* [n];
	assert(am);
	for (i = 0; i < n; i++)
	{
		am[i] = new int[n];
		assert(am[i]);
		int j;
		for (j = 0; j < n; j++)
		{
			am[i][j] = 0;
		}
	}
}
bool amgraph::edgemember(int fromv, int tov)
{
	assert(fromv < n && tov < n && fromv >= 0 && tov >= 0);
	return bool(am[fromv][tov] != 0);
}



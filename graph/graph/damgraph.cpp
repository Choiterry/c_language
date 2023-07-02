#include "damgraph.h"
void damgraph::addedge(int fromv, int tov)
{
	assert(fromv < n && tov < n && fromv >= 0 && tov >= 0);
	if (!edgemember(fromv, tov))
	{
		m++;
		am[fromv][tov] = 1;
	}
}
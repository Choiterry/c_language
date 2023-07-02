#include<iostream>
#include"uamgraph.h"
#include<fstream>
int main()
{
	cout << "20192647최준혁" << endl;
	const char* infilename = "graph2.dat";
	ifstream ifs(infilename);
	assert(ifs);
	int n;
	ifs >> n;
	uamgraph G(n);
	cout << "creates graph; n =" << G.vertexsize() << endl;
	int u, v;
	while (ifs >> u)
	{
		ifs >> v;
		G.addedge(u-1, v-1);
	}
	for (u = 0; u < n; u++)
	{
		cout << u << "\t"; 
		for (v = 0; v < n; v++)
		{
			cout << (G.edgemember(u, v) ? "T" : "F");
		}
		cout << endl;
	}
	return 0;
 }
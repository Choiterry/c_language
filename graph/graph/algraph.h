//#pragma once
//#include"graph.h"
//#include"list.h"
//typedef list<int> intlist;
//typedef listiter<int> intlistiter;
//
//class algraph : public graph
//{
//public:
//	algraph(int size) : graph(size)
//	{
//		vertexlist = new intlist[n];
//		assert(vertexlist);
//	}
//	friend class neighboriter;
//protected:
//	intlist* vertexlist;
//};
//
//class neighboriter : public intlistiter
//{
//public:
//	neighboriter(const algraph& G, int startvertex) :intlistiter(G.vertexlist[startvertex], G.n)
//	{
//		assert(startvertex < G.n);
//	}
//};
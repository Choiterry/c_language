//#include"algraph.h"
//
//class ualgraph : public algraph
//{
//public:
//	ualgraph(int size) : algraph(size)
//	{}
//	virtual void addedge(int fromv, int tov);
//};
//
//void
//ualgraph::addedge(int fromv, int tov)
//{
//	assert(fromv < n&& fromv >= 0 && tov < n&& tov >= 0);
//	vertexlist[fromv].insert(tov);
//	vertexlist[tov].insert(fromv);
//	m++;
//}
//#include <iostream>
//#include"cassert"
//const int maxqueue = 20;
//
//template <class queueelementtype> 
//class queue
//{
//private:
//    int f;
//    int r;
//	  int m_element;
//    queueelementtype element[maxqueue];
//public:
//    queue();
//    void enqueue(queueelementtype e);
//    queueelementtype dequeue();
//    queueelementtype front();
//	  int nextpos(int p);
//    bool isempty();
//    bool isfull();
//};
//template <class queueelementtype>
//queue < queueelementtype>::queue()
//{
//	f = 0;
//	r = 0;
//	m_element = 0;
//}
//
//template <class queueelementtype>
//void queue<queueelementtype>::enqueue(queueelementtype e)
//{
//	assert(!isfull());// rear 의 nextpos가 f 랑 안겹치면 
//	r = nextpos(r); // r을 한칸 넘기고
//	m_element++;
//	element[r] = e; //그 칸에 값을 넣는다
//}
//template <class queueelementtype>
//queueelementtype queue<queueelementtype>::dequeue()
//{
//	assert(!isempty()); // f 랑 r 이 다를 때만 뺀다
//	f = nextpos(f); // f를 한칸 넘긴다
//	m_element--;
//	return element[f];
//}
//template <class queueelementtype>
//queueelementtype queue<queueelementtype>::front()
//{
//	assert(f != r);
//	return element[nextpos(f)];
//}
//template <class queueelementtype>
//bool queue<queueelementtype>::isempty()
//{
//	return bool(m_element == 0);
//}
//template <class queueelementtype>
//bool queue<queueelementtype>::isfull()
//{
//	return bool(m_element == 20);
//}
//template <class queueelementtype>
//int queue<queueelementtype>::nextpos(int p)
//{
//	if (p == maxqueue - 1)
//	{
//		return 0;
//	}
//	else
//	{
//		return p + 1;
//	}
//}
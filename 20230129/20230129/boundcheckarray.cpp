//#include "boundcheckarray.h"
//template<typename t>
//boundcheckarray <t>::boundcheckarray(int num)
//{
//	arrlen = num;
//	aaa = new t[num];
//}
//template<typename t>
//t& boundcheckarray <t>::operator[](int num)
//{
//	if (num < 0 || num >= arrlen)
//	{
//		cout << "error" << endl;
//		exit(1);
//	}
//	return aaa[num];
//}
//template<typename t>
//t boundcheckarray <t>::operator[](int num)const
//{
//	if (num < 0 || num >= arrlen)
//	{
//		cout << "error" << endl;
//		exit(1);
//	}
//	return aaa[num];
//}
//template<typename t>
//int boundcheckarray<t>::getarrlen()const
//{
//	return arrlen;
//}
//template<typename t>
//boundcheckarray<t>::~boundcheckarray()
//{
//	delete[]aaa;
//}
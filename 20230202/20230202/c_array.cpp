//#include "c_array.h"
//
//c_array::c_array():n_data(0), n_count(0), n_maxsize(0)
//{
//
//}
//
//c_array::c_array(int maxsize) :n_maxsize(maxsize)
//{
//	n_data = new int[maxsize];
//}
//c_array::~c_array()
//{
//	delete []n_data;
//}
//
//void c_array::reallocate()
//{
//	n_maxsize = n_maxsize * 2;
//	int* tmp = new int[n_maxsize];
//	for (int i = 0; i < n_count; i++)
//	{
//		tmp[i] = n_data[i];
//	}
//	delete[]n_data;
//	n_data = tmp;
//}
//
//void c_array::pushback(const int& data)
//{
//	if (n_count>=n_maxsize)
//	{
//		reallocate();
//	}
//	n_data[n_count++] = data;
//}
//void c_array::pushfront(const int& data)
//{
//	if (n_count >= n_maxsize)
//	{
//		reallocate();
//	}
//	//새로운 함수로 한칸씪 밀리게 한 다음 첫번째 인뎃ㄱ스에 값 입력 그리고 ncount++ 
//}
//
//void c_array::show()
//{
//	for (int i = 0; i < n_count; i++)
//	{
//		cout << n_data[i] << endl;
//	}
//	cout << n_count << endl;
//	cout << n_maxsize<< endl;
//}

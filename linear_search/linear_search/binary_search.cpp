//#include<iostream>
//using namespace std;
//
//int binarysearch(int a[], int size, int key)
//{
//	int first(0), last(size - 1);
//
//	while (first <= last)
//	{
//		int middle = (last + first) / 2;
//		if (key == a[middle])
//		{
//			return middle;
//		}
//		else if (key < a[middle])
//		{
//			last = middle;
//		}
//		else if (key > a[middle])
//		{
//			first = middle;
//		}
//	}
//	return -1;
//}
//	
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	cout << binarysearch(a, 10, 6);
//	return 0;
//}
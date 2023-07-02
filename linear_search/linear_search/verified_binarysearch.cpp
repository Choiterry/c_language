//#include<iostream>
//using namespace std;
//int verifiedbinarysearch(int a[], int target, int size)
//{
//	int max(size - 1), min(0);
//	while (max >= min)
//	{
//		int mid = (max + min) / 2;
//		if (target < a[mid])
//		{
//			max = mid - 1;
//		}
//		else if (target > a[mid])
//		{
//			min = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	cout << verifiedbinarysearch(a, 5, 10);
//	return 0;
//}
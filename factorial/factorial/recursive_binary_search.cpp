//#include<iostream>
//using namespace std;
//int recursive_binary_search(int a[], int first, int last, int target)
//{
//	int mid = (first + last) / 2;
//	if (first > last) //데이터가 없을 때를 대비해서만들어 놓은 return 값
//	{
//		return -1;
//	}
//	if (a[mid] > target)
//	{
//		return recursive_binary_search(a, first, mid - 1, target);
//	}
//	else if (a[mid] < target)
//	{
//		return recursive_binary_search(a, mid + 1, last, target);
//	}
//	else if (a[mid] == target)
//	{
//		return mid;
//	}
//}
//
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	cout << recursive_binary_search(a, 0, 9, 5);
//	return 0;
//}
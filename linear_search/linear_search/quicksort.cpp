//#include<iostream>
//
//using namespace std;
//void quicksort(int a[], int first, int last, int nsize)
//{
//	int left = first, right = last;
//	int pivot = a[(int)(first + last) / 2];
//	while (first <= last)
//	{
//		for (; pivot > a[first]; first++)
//		{
//		}
//		for (; pivot < a[last]; last--)
//		{
//		}
//		int temp1 = a[first];
//		int temp2 = a[last];
//		int temp3 = temp1;
//		temp1 = temp2;
//		temp2 = temp3;
//		first++;
//		last--;
//	}
//	if (first < last)
//	{
//		quicksort(a, left, right, 10);
//	}
//	if (last > first)
//	{
//		quicksort(a, left, right, 10);
//	}
//
//}
//
//int main()
//{
//	int a[10] = { 2,6,4,7,89,1,7,8,2,10 };
//	quicksort(a,0,9,10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << "\n";
//	}
//	return 0;
//}
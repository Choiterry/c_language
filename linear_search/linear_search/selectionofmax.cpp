//#include<iostream>
//using namespace std;
//void swapelement(int a[], int maxpos, int last)
//{
//	int temp = a[maxpos];
//	a[maxpos] = a[last];
//	a[last] = temp;
//}
//int maxselect(int a[], int size)
//{
//	int maxpos(0), currentpos(1);
//	while (currentpos < size)
//	{
//		if (a[currentpos] < a[maxpos])
//		{
//			maxpos = currentpos;
//		}
//		currentpos++;
//	}
//	return maxpos;
//}
//void selectionsort(int a[], int n)
//{
//	int last = n;
//	int maxpos;
//	while (last > 0)
//	{
//		maxpos = maxselect(a, last+1);
//		swapelement(a, maxpos, last);
//		last--;
//	}
//}
//int main()
//{
//	int a[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	selectionsort(a, 9);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i];
//	}
//	
//	return 0;
//}
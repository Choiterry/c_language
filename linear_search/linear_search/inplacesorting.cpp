//#include<iostream>
//using namespace std;
//
//void swapelements(int a[], int maxpos, int last)
//{
//	//int temp = a[maxpos]; // maxpos의 원소 값 저장
//	//for (int i = maxpos; i < last; i++) // maxpos 부터 뒤까지 한칸씩 앞으로 밀려나오기
//	//{
//	//	a[i] = a[i + 1];
//	//}
//	//a[last] = temp; // last 의 원소에 maxpos값 저장해둔거 대입
//	int temp = a[maxpos];
//	a[maxpos] = a[last];
//	a[last] = temp;
//
//}
//int maxselect(int a[], int n)
//{
//	int maxpos(0), currentpos(1);
//	while (currentpos < n)
//	{
//		if (a[maxpos] < a[currentpos])
//		{
//			maxpos = currentpos;
//		}
//		currentpos++;
//	}
//	return maxpos;
//}
//void selectionsort(int a[], int n)
//{
//	int last(n - 1), maxpos(0); // last = 9, maxpos 0 으로 초기화
//	while (last > 0)
//	{
//		maxpos = maxselect(a, last+1); //last+1 까지의 원소를 비교해서 그중에 maxpos를 얻어내기
//		swapelements(a, maxpos, last); // maxpos의 원소를 sorted array 에 추가
//		last--; // 전체 array 에서 sorted 하나 추가 unsorted 하나 감소
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << "\n";
//	}
//}
//int main()
//{
//	cout << "DS2023-HW1-가반-최준혁-20192647" << "\n";
//	int a[10] = { 5,32,6,3,7,3,37,78,9,10 };  // a[0] - a[9]
//	selectionsort(a, 10);
//	return 0;
//}
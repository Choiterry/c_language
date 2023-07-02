#include<iostream>
using namespace std;
void bubblesort(int a[], int size);
void bubblesortphase(int a[], int nindex);
void swapelements(int a[], int index1, int index2);

void bubblesort(int a[], int size)
{
	for (int i = size; i >0; i--)
	{
		bubblesortphase(a, i - 1); // i-1 한 이유는 size는 maxindex+1 이므로 
	}
}
void bubblesortphase(int a[], int nindex)
{
	for (int i = 0; i < nindex; i++)
	{
		if (a[i] > a[i + 1])
		{
			swapelements(a, i, i + 1); // 비교 후 바꾸기 를  인덱스 갯수만큼 진행
		}
	}
}
void swapelements(int a[], int index1, int index2)
{
	int temp;
	temp = a[index1];
	a[index1] = a[index2];
	a[index2] = temp;
}
int main()
{
	int a[9] = { 17,9,21,6,3,32,37,41,45 };
	bubblesort(a, 9);
	for (int i = 0; i < 9; i++)
	{
		cout << a[i]<< "\n";
	}
	return 0;
}
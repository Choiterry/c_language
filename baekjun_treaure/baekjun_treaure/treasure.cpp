#include<iostream>
#include <ctime>

using namespace std;
void setinfo(int* num, int c);
void showinfo(int* num, int c);
void ascendswap(int* num1, int a);
void decendswap(int* num2, int a);
void sum(int* num1, int* num2, int a);
int main()
{
	srand(time(NULL));
	int a;
	cin >> a;
	cout << endl;
	int *num1 = new int[a]; // 동적할당
	int *num2 = new int[a]; // 동적할당 
	// int num1[a] 이렇게 하려면 a 는 const int 로 하고 초기화해준 상태이어야한다.
	setinfo(num1, a);
	setinfo(num2, a);
	showinfo(num1, a);
	showinfo(num2, a);
	ascendswap(num1, a);
	decendswap(num2, a);
	sum(num1, num2, a);
	return 0;

}
void setinfo(int *num, int c)
{
	for (int i = 0; i < c; i++)
	{
		num[i] = rand() % 11;
	}
}
void showinfo(int* num, int c)
{
	for (int i = 0; i < c; i++)
	{
		cout << num[i] << ' ';
	}
	cout << endl;
}
void ascendswap(int* num1,int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = i; j < a; j++)
		{
			if (num1[j] < num1[j + 1])
			{
				int temp = num1[j];
				num1[j] = num1[j + 1];
				num1[j + 1] = temp;
			}
			else 
				continue;
		}
	}
}
void decendswap(int* num2, int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (num2[j] > num2[j + 1])
			{
				int temp = num2[j];
				num2[j] = num2[j + 1];
				num2[j + 1] = temp;
			}
			else
				continue;

		}
	}
}
void sum(int *num1, int *num2,int a)
{
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		sum = sum + (num1[i] * num2[i]);
	}
	cout << sum << endl;
}
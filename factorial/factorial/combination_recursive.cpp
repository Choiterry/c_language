#include<iostream>
using namespace std;

int comb(int n, int k)
{
	if (k == 1)
	{
		return n;
	}
	else if (k == n)
	{
		return 1;
	}
	else
	{
		return comb(n - 1, k - 1) + comb(n - 1, k); //recursive 방안을 채택하면 시간은 오래걸려도 이렇게 n이 큰 숫자일때도 계산이 가능하다. 
		                                            //반복되는 작업을 많이 하기 때문이다.
	}
}

int main()
{
	cout << "DS2023-HW1-가반-최준혁-20192647" << "\n";
	cout << comb(100, 3);
	return 0;
}
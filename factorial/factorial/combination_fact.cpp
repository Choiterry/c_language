#include <iostream>
using namespace std;
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*fact(n - 1);
	}
}
int comb(int n, int k)
{
	return fact(n) / (fact(k) * fact(n - k)); // 여기서는 n에 큰 숫자가 오면 오류가 뜬다 대신에 속도는 빠르다
}

int main()
{
	cout << comb(5, 3);
	return 0;
}
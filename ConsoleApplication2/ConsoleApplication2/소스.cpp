#include <iostream>

using namespace std;
bool x(int rate);

int main()
{
	int a = 0;
	cin >> a;
	if (x(a))
	{
		cout << "rate is valid";
	}
	return 0;
}

bool x(int rate)
{
	return (((rate >= 10) && (rate < 20)) || (rate == 0));
}
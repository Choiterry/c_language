#include <iostream>
#include <cstdlib>

using namespace std;
class boundcheckintarray
{
private:
	int* arr;
	int arrlen;
public:
	boundcheckintarray(int len)
	{
		arrlen = len;
		arr = new int[len];
	}
	int& operator[](int idx)
	{
		if ((idx < 0) || idx > arrlen)
		{
			cout << "오류" << endl;
			exit(1);
		}
		else
		{
			return arr[idx];
		}
	}
	~boundcheckintarray()
	{
		delete[]arr;
	}

};
int main()
{
	boundcheckintarray arr(5);

	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1) * 11;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
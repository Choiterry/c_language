#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char *str1 = "abc 123 ";
	char *str2 = "def 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy_s(str3, str1);
	strcat_s(str3, str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "long" << endl;
	else
		cout << "short" << endl;

	return 0;

}
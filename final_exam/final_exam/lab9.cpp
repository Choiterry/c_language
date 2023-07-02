#include<iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string line;
	cin >> n;
	cin.ignore(10, '\n');
	getline(cin, line);

	cout << n << endl << line << endl;

}
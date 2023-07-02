#include<iostream>
#include"stack.h"
#include<string>

using namespace std;

int main()
{
	cout << "20192647_최준혁" << "\n";
	cout << "input RPN Equation" << "\n";

	Stack <double> s;
	double op1, op2;
	char c;
	
	while ((c = cin.peek()) != '\n')
	{
		if (isdigit(c))
		{
			cin >> op1;
			s.push(op1);
		}
		else
		{
			cin >> c;
			op2 = s.pop();
			op1 = s.pop();
			switch (c)
			{
			case '+':
				s.push(op1 + op2);
				break;
			case '-':
				s.push(op1 - op2);
				break;
			case '*':
				s.push(op1 * op2);
				break;
			case '/':
				if (op2 == 0)
					cerr << "division by zero\n";
				else
					s.push(op1 / op2);
				break;
			}
		}
		while ((c = cin.peek()) == ' ')
		{
			cin.ignore(1, ' ');
		}
	}
	cout << "results:" << s.pop();
	return 0;
}

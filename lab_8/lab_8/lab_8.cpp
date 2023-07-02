#include <iostream>
#include "cmoney.h"

using namespace std;

//const cmoney operator+(const cmoney& amount1, const cmoney& amount2);

int main()
{
	cout << "최준혁20192647" << endl;

	cmoney amoney(10, 30);
	cmoney bmoney(20, 20);
	cout << amoney << "+" << bmoney;
}

ostream& operator <<(ostream& outputstream, const cmoney& amoney)
{
	int absdollar = abs(amoney.m_dollar);
	int abscent = abs(amoney.m_cent);

	if (amoney.m_dollar < 0 || amoney.m_cent < 0)
	{
		outputstream << "$-";
	}
	else
	{
		outputstream << "$";
	}
	outputstream << absdollar;
	if (abscent >= 10)
	{
		outputstream << "." << abscent;
	}
	else
	{
		outputstream << ".0" << abscent;
	}
	outputstream << " ";
	return outputstream;
}


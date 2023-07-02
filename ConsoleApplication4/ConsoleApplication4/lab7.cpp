#include <iostream>
#include <cmath>
#include "cmoney.h"

using namespace std;
/*const cmoney operator +(const cmoney& ammount1, const cmoney& amount2);*/ 
bool operator == (const cmoney & amount1, const cmoney & amount2);
const cmoney operator -(const cmoney& amount1, const cmoney& amount2);
const cmoney operator -(const cmoney& amount);
void printmoney(const cmoney& amount);
int main()
{
	cmoney amoney(34, 30), bmoney(27, 90), summoney , submoney, minusmoney;
	/*summoney = addtwo(amoney, bmoney);*/
	summoney = amoney + bmoney; 
	submoney = amoney - bmoney;

	cout << "$" << summoney.getdollar() <<"." << summoney.getcent() << endl;
	if (amoney == bmoney)
	{
		cout << "two moneys are same" << endl;
	}
	else
	{
		cout << "two moneys are different" << endl;
	} 
	printmoney(submoney);
	minusmoney = -submoney;
	printmoney(minusmoney);
	
}
const cmoney operator +(const cmoney& amount1, const cmoney& amount2)
{
	int allcents1 = amount1.m_ncent+ 100*amount1.m_ndollar;
	int allcents2 = amount2.m_ncent + 100*amount2.m_ndollar;
	int sumallcent = allcents1 + allcents2;
	int absallcent = abs(sumallcent);
	int finaldollar = absallcent / 100;
	int finalcent = absallcent % 100;

	if (sumallcent < 0)
	{
		finaldollar = -finaldollar;
		finalcent = -finalcent;

	}
	return cmoney(finaldollar, finalcent);
}

const cmoney operator -(const cmoney& amount1, const cmoney& amount2)
{
	int allcents1 = amount1.getcent() + 100 * amount1.getdollar();
	int allcents2 = amount2.getcent() + 100 * amount2.getdollar();
	int suballcent = allcents1 - allcents2;
	int absallcent = abs(suballcent);
	int finaldollar = absallcent / 100;
	int finalcent = absallcent % 100;

	if (suballcent < 0)
	{
		finaldollar = -finaldollar;
		finalcent = -finalcent;

	}
	return cmoney(finaldollar, finalcent);
}

bool operator == (const cmoney & amount1, const cmoney & amount2)
{
	return ((amount1.getdollar() == amount2.getdollar()) && (amount1.getcent() == amount2.getcent()));
}

const cmoney operator -(const cmoney& amount)
{
	return cmoney(-amount.getdollar(), -amount.getcent()); 
}
void printmoney(const cmoney& amount)
{
	int absdollar = abs(amount.getdollar());
	int abscent = abs(amount.getcent());
	if (amount.getdollar() < 0 || amount.getcent() < 0)
		cout << "$-";
	else
		cout << "$";
	cout << absdollar << ".";
	if (abscent < 10)
		cout << "0" << abscent << endl;
	else
		cout << abscent << endl;
}
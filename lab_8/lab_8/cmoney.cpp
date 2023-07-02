#include<iostream>
#include "cmoney.h"
using namespace std;

cmoney::cmoney()
{
	m_dollar = 0;
	m_cent = 0;
}
cmoney::cmoney(int dollar, int cent) 
{
	m_dollar = dollar;
	m_cent = cent;
}
int cmoney::getdollar() const
{
	return m_dollar;
}
void cmoney::setdollar(int dollar) 
{
	m_dollar = dollar;
}
int cmoney::getcent() const
{
	return m_cent;
}
void cmoney::setcent(int cent)
{
	m_cent = cent;
}
//const cmoney cmoney::operator+(const cmoney& amount2)
//{
//	int acent = m_cent + m_dollar * 100;
//	int bcent = amount2.m_cent + amount2.m_dollar * 100;
//	int sumcent = acent + bcent;
//	int abscent = abs(sumcent);
//	int finaldollar = abscent / 100;
//	int finalcent = abscent % 100;
//
//	if (sumcent < 0)
//	{
//		finaldollar = -finaldollar;
//		finalcent = -finalcent;
//	}
//	return cmoney(finaldollar, finalcent);
//}
#include "cmoney.h"
#include <cmath>

cmoney::cmoney()
{
	m_ndollar = 0;
	m_ncent = 0;
}
cmoney::cmoney(int ndollar, int ncent)
{
	m_ndollar = ndollar;
	m_ncent = ncent;
}
int cmoney::getdollar() const
{
	return m_ndollar;
};

void cmoney::setdollar(int ndollar)
{
	m_ndollar = ndollar;
};
int cmoney::getcent() const
{
	return m_ncent;
};
void cmoney::setcent(int ncent)
{
	m_ncent = ncent;
};
//const cmoney cmoney::operator+(const cmoney& amount2)
//{
//	int allcents1 = m_ncent + 100 * m_ndollar;
//	int allcents2 = amount2.m_ncent + 100 * amount2.m_ndollar;
//	int sumallcent = allcents1 + allcents2;
//	int absallcent = abs(sumallcent);
//	int finaldollar = absallcent / 100;
//	int finalcent = absallcent % 100;
//
//	if (sumallcent < 0)
//	{
//		finaldollar = -finaldollar;
//		finalcent = -finalcent;
//
//	}
//	return cmoney(finaldollar, finalcent);
//}
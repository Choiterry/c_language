#include "cdyna.h"
#include <iostream>
#include <string.h>
using namespace std;

cdyna::cdyna()
{
	m_nsize = 0;
	m_pnschedule = NULL;
}
cdyna::~cdyna()
{
	if (m_pnschedule != NULL)
	{
		delete[] m_pnschedule;
	}
}
void cdyna::showschedule()
{
	if (m_pnschedule != NULL)
	{
		for (int i = 0; i < m_nsize; i++)
		{
			cout << m_pnschedule[i] << endl;
		}
	}
}

void cdyna::setinfo(int nsize, int* psch)
{
	m_nsize = nsize;
	if (m_pnschedule != NULL)
	{
		delete[] m_pnschedule;
	}
	m_pnschedule = new int[m_nsize];
	for (int i = 0; i < m_nsize; i++)
	{
		m_pnschedule[i] = psch[i];
	}
}

cdyna& cdyna::operator=(const cdyna& rtside)
{
	if (this == &rtside)
	{
		return *this;
	}
	else
	{
		m_nsize = rtside.m_nsize;
		if (m_pnschedule != NULL)
		{
			delete[] m_pnschedule;
		}
		m_pnschedule = new int[m_nsize];
		for (int i = 0; i < m_nsize; i++)
		{
			m_pnschedule[i] = rtside.m_pnschedule[i];
		}
	}
	return *this;
}
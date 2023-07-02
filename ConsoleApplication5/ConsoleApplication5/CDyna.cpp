#include "CDyna.h"

CDyna::CDyna()
{
	m_nsize = 0;
	m_pnschedule = NULL;

}
CDyna::~CDyna()
{

}

void CDyna::showschedule()
{
	if (m_pnschedule != NULL)
	{
		for (int nindex = 0; nindex < m_nsize; nindex++)
		{
			cout << m_pnschedule[nindex] << endl;
		}
	}
}

void CDyna::setinfo(int nsize, int* psch)
{
	m_nsize
}
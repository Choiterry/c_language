#include "ctheater.h"
using namespace std;

int ctheater::m_numberoftheater = 0;

ctheater::ctheater()
{
	m_numberoftheater++;
}
ctheater::ctheater(string strname, int ntriptime, int* pshowtime, int nsizeofarray)
{
	m_strname = strname;
	m_ntriptime = ntriptime;
	for (int i = 0; i < nsizeofarray; i++)
	{
		m_pshowtime[i] = pshowtime[i];
	}
	m_numberoftheater++;
}
void ctheater::printschedule() 
{
	cout << m_strname << "is" << m_ntriptime << "away" << endl;
	cout << "this schedule is" << endl;
	for (int i = 0; i < 10; i++)
	{
		int a = m_pshowtime[i];
		if (a == 0)
			break;
		cout << a << endl;
	}
}
void ctheater::inputtheaterinfo(string strname, int ntriptime, int pshowtime[])
{
	m_strname = strname;
	m_ntriptime = ntriptime;
	for (int i = 0; i < 10; i++)
	{
		m_pshowtime[i] = pshowtime[i];
	}
}
void ctheater::printnumberoftheater()
{
	cout << "number of theeater is " << m_numberoftheater<< endl;
}
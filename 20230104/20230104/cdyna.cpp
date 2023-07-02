#include "cdyna.h"
#include<iostream>
using namespace std;
cdyna::cdyna()
{
	m_pnschedule = NULL;
	m_nsize = 0;
}
//cdyna::cdyna(int nsize , int *psch)
//{
//	if (m_pnschedule == NULL)
//	{
//		cout << "공간이 할당 안됨" << endl;
//	}
//	else
//	{
//		cout << *m_pnschedule << endl;
//	}
//}
cdyna::~cdyna()
{
	if (m_pnschedule != NULL)
	{
		delete[]m_pnschedule;
	}
	
}
void cdyna::setinfo(int nsize, int* psch)
{
	m_nsize = nsize;
	if (m_pnschedule != NULL)
	{
		delete[]m_pnschedule;
	}
	m_pnschedule = new int[m_nsize];
	for (int i = 0; i < m_nsize; i++)
	{
		m_pnschedule[i] = psch[i];
	}
}

void cdyna::showschedule()
{
	if (m_pnschedule != NULL)
	{
		for (int i = 0; i < m_nsize ; i++)
		{
			cout << m_pnschedule[i] << endl;
		}
	}
}
cdyna& cdyna::operator=(const cdyna& rtside) // 리턴값을 cdyna의 형태로 설정한다. cdyna의 영역에 해당되는 operator 함수에 상수인 rtside의 주소를 매개변수로한다.
{
	if (this == &rtside) // 만약 오른쬭 값이 왼쪽과 같다면 
	{
		return *this; // this라는 주소에 해당하는 값을 리턴한다.
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
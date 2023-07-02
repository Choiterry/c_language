#pragma once
#include <iostream>
using namespace std;

class CDyna
{
public:
	int m_nsize;
	int* m_pnschedule;
	CDyna();
	~CDyna();
	void showschedule();
	void setinfo(int sizxe, int* psch);

};


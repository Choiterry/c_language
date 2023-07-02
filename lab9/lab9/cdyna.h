#pragma once
class cdyna
{
private : 
	int m_nsize;
	int* m_pnschedule;

public : 
	cdyna();
	~cdyna();
	cdyna& operator= (const cdyna& rtside);
	void showschedule();
	void setinfo(int nsize, int* psch);
};


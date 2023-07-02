#pragma once
class cdyna
{
private:
	int m_nsize;
	int* m_pnschedule;
public:
	cdyna();
	/*cdyna(int nsize, int* psch);*/
	~cdyna();
	void showschedule();
	void setinfo(int nsize, int *psch);
	cdyna& operator=(const cdyna& rtside);
};


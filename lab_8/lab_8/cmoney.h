#pragma once
#include <iostream>
using namespace std;
class cmoney
{
private:
	int m_dollar;
	int m_cent;
public:
	cmoney();
	cmoney(int dollar, int cent);
	int getdollar() const;
	void setdollar(int dollar);
	int getcent() const;
	void setcent(int cent);

	friend const cmoney operator +(const cmoney& amount1, const cmoney& amount2);
	friend ostream& operator <<(ostream& outputstream, const cmoney& amoney);
};


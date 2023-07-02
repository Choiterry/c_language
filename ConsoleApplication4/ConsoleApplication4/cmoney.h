#pragma once
class cmoney
{
private :
	int m_ndollar;
	int m_ncent;
	
public:
	cmoney(int ndollar, int ncent);
	cmoney();
	/*const cmoney operator+(const cmoney& amount2);*/

	int getdollar() const;
	void setdollar(int ndollar);
	int getcent() const;
	void setcent(int ncent);
	friend const cmoney operator +(const cmoney& amount1, const cmoney& amount2);
};


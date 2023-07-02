#pragma once
class fruitseller
{
private:
	int mymoney;
	int apple_price;
	int numofapples;

public:
	fruitseller(int a, int b, int c);
	int salesapples(int money);
	void showsalesresult()const;
	
};
class fruitbuyer
{
private: 
	int mymoney;
	int apple_price;
	int numofapples;
public:
	fruitbuyer(int a);
	void buyapples(fruitseller &seller ,int money);
	void showbuyresult()const;
};


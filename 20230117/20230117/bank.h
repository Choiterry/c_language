#pragma once
const int namelen = 20;
class bank
{
private:
	char accname[namelen];
	int accid;
	int accbalance;
public :
	bank(int id, int balance, const char* name) :accid(id), accbalance(balance)
	{
		strcpy(accname, name);
	}
	bank(const bank& ref)
	{
		;
	}
	int getaccid()const
	{
		return accid;
	}
	void deposit(int money)
	{

	}

};


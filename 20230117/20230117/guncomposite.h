//#pragma once
//#include<iostream>
//using namespace std;
//class gun
//{
//private:
//	int bullets;
//public:
//	gun(int bullet)
//	{
//		bullets = bullet;
//	}
//	void shot()
//	{
//		cout << "bang bullet" << endl;
//		bullets--;
//	}
//	int info()
//	{
//		return bullets;
//	}
//};
//class police 
//{
//private:
//	int handcuffs;
//	gun* pistol;
//public:
//	police(int bullet, int handcuff) 
//	{
//		handcuffs = handcuff;
//		
//		if (bullet > 0)
//		{
//			pistol = new gun(bullet);
//		}
//		else
//			pistol = NULL;
//	}
//	void puthandcuff()
//	{
//		cout << "bang handcuff" << endl;
//		handcuffs--;
//	}
//	void shot()
//	{
//		if (pistol == NULL)
//		{
//			cout << "i have no gun" << endl;
//		}
//		else
//		{
//			pistol->shot();
//		}
//			
//	}
//	void showinfo()
//	{
//		if (pistol != NULL)
//			cout << "pistol is " << pistol->info() << endl;
//		else
//			cout << "pistol is 0" << endl;
//		
//		cout << "handcuffs is" << handcuffs << endl;
//	}
//};
//

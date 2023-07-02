//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class gun	
//{
//private:
//	int bullets;
//public:
//	gun(int bullet) :bullets(bullet)
//	{}
//	void shot()
//	{
//		cout << "bang" << endl;
//		bullets--;
//	}
//	gun& operator=(const gun& ref)
//	{
//		cout << "gun operaotr =" << endl;
//		bullets = ref.bullets;
//		return *this;
//	}
//	void show()
//	{
//		cout << bullets << endl;
//	}
//};
//class police 
//{
//private:
//	int handcuffs;
//	gun *pistols;
//public:
//	police(int handcuff, int guns) :handcuffs(handcuff)
//	{
//		delete[]pistols;
//		pistols = new gun(guns);
//	}
//	void shot()
//	{
//		if (pistols == NULL)
//		{
//			cout << "huntbbang" << endl;
//		}
//		else
//		{
//			pistols->shot();
//		}
//			
//	}
//	void puthandcuff()
//	{
//		cout << "gottcha" << endl;
//		handcuffs--;
//	}
//	police& operator=(const police& ref)
//	{
//		pistols = ref.pistols;
//		handcuffs = ref.handcuffs;
//		return *this;
//	}
//	void show()
//	{
//		pistols->show();
//		cout << handcuffs << endl;
//	}
//
//};
//int main()
//{
//	police p1(5, 3);
//	police p2 = p1;
//	p2.puthandcuff();
//	p2.shot();
//
//	police p3(2, 4);
//	p3 = p1;
//	p3.puthandcuff();
//	p3.shot();
//	
//	p2.show();
//	p3.show();
//
//	return 0;
//}
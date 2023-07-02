//#include<iostream>
//using namespace std;
//
//class car
//{
//private: 
//	const int name_size = 10;
//	char* name;
//	int size;
//protected:
//	int speed;
//public:
//	car()
//	{
//		this->name = new char(name_size);
//		size = 0;
//		speed = 0;
//	}
//	car(int size)
//	{
//		this->size = size;
//	}
//	~car()
//	{
//		delete this->name;
//	}
//	virtual void speedup()
//	{
//		speed+=5;
//	}
//	virtual void showinfo()
//	{
//		cout << speed << endl;
//	}
//};
//class sportcar : public car
//{private:
//	int nitro;
//public:
//	sportcar(int nitros) :car()
//	{
//		nitro = nitros;
//	}
//	void speedup()
//	{
//		this->speed += 20;
//	}
//	void showinfo()
//	{
//		car::showinfo();
//		cout << nitro << endl;
//	}
//};
//int main()
//{
//	car* car1 = new car();
//	car* car2 = new sportcar(100);
//	sportcar* car3 = new sportcar(50);
//
//	car1->speedup();
//	car1->showinfo();
//	car2->speedup();
//	car2->showinfo();
//	car3->speedup();
//	car3->showinfo();
//
//	delete car1;
//	delete car2;
//	delete car3;
//
//	return 0;
//}
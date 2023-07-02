//#include <iostream>
//using namespace std;
//
//class point
//{
//private:
//	int xpos, ypos;
//public:
//	point(int x, int y) :xpos(x), ypos(y)
//	{
//
//	}
//	void* operator new(size_t size)
//	{
//		cout << "operator new" << size << endl;
//		void* adr = new char[size];
//		return adr;
//	}
//	void* operator new[](size_t size)
//	{
//		cout << "operator new[]" << size << endl;
//		void* adr = new char[size];
//		return adr;
//	}
//	void operator delete(void* adr)
//	{
//		cout << "operator delete" << adr << endl;
//		delete[]adr;
//	}
//	void operator delete[](void* adr)
//	{
//		cout << "operator delete[]" << adr << endl;
//		delete[]adr;
//	}
//	friend ostream& operator <<(ostream& os, const point& pos);
//};
//ostream& operator << (ostream& os, const point& pos)
//{
//
//}
//
//int main()
//{
//	point* ptr = new point(3, 4);
//	point* arr = new point[3];
//	delete ptr;
//	delete[]arr;
//
//	return 0;
//}
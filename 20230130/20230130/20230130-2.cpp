#include <iostream>
using namespace std;

class point
{
private:
	int xpos, ypos;
public:
	point(int x=0, int y=0) :xpos(x), ypos(y)
	{

	}
	void showpoint()const
	{
		cout << xpos << ypos << endl;
	}
	const point operator+(const point& ref1, const point& ref2)
	{
		point pos = new point();
		ref1.

	}
	point& operator++() // 전위
	{
		xpos++;
		ypos++;
		return *this;
	}
	point operator--() // 전위
	{
		xpos--;
		ypos--;
		return *this;
	}
	friend point operator++(point& ref,int); //후위
	friend point operator--(point& ref,int);//후위
};
point operator++(point& ref,int)
{
	const point tmp(ref);
	ref.xpos++;
	ref.ypos++;
	return tmp;
}
point operator--(point& ref,int)
{
	const point tmp = ref;
	ref.xpos--;
	ref.ypos--;
	return tmp;
}
int main()
{
	point p1(3, 4);

	point p2 = p1++;
	p1.showpoint();
	p2.showpoint();
	point p4 = --p2;
	point p3 = p1--;
	p2.showpoint();
	p3.showpoint();
	p4.showpoint();
	return 0;
}
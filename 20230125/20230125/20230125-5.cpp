#include<iostream>
using namespace std;

class point
{
private:
	int xpos;
	int ypos;
public:
	point(int x = 0, int y = 0) :xpos(x), ypos(y)
	{

	}
	void showposition()const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend ostream& operator<<(ostream& os, const point& pos);
	friend istream& operator>>(istream& is, point& ref);
};
ostream& operator<<(ostream& os, const point& pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}
istream& operator>>(istream& is, point& ref)
{
	is >> ref.xpos >> ref.ypos;
	return is;
}
int main()
{
	point pos1;
	cout << "x,y input" << endl;
	cin >> pos1;
	cout << pos1;

	point pos2;
	cout << "x,y input" << endl;
	cin >> pos2;
	cout << pos2;

	return 0;
}
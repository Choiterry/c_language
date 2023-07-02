#include "number.h"
number::number() :value(0)
{ 

}
number::~number()
{

}
void number::display()
{
	cout << value << endl;
}
int number::getnumber()
{
	return value;
}
void number::setnumber()
{
	cin >> value;
}
//bool operator<=(const number& n1, const number& n2)
//{
//	if (n1.value <= n2.value)
//	{
//		return true;
//	}
//	else
//		return false;
//}
bool number::operator<=(const number& n)
{
	if (this->value <= n.value)
	{
		return true;
	}
	else
		return false;
}
istream& operator>>(istream& is, number& n)
{
	is >> n.value;
	return is;
}
ostream& operator<<(ostream& os, const number& n)
{
	os << n.value;
	return os;
}


#pragma once
#include <iostream>
using namespace std;

template <class T>

class Pair
{
public:
	Pair();
	Pair(T firstval, T secondval);
	T getfirst() const;
	void setfirst(T firstval);
	T getsecond() const;
	void setsecond(T secondval);
	friend void funcex();
private:
	T first;
	T second;
};

template <class T>
Pair<T>::Pair()
{
	first = 0;
	second = 0;//nothing to do
}
template <class T>
Pair<T>::Pair(T firstval, T secondval)
{
	first = firstval;
	second = secondval;
}
template <class T>
T Pair<T>::getfirst() const
{
	return first;
}
template <class T>
void Pair<T>::setfirst(T firstval)
{
	first = firstval;
}
template <class T>
T Pair<T>::getsecond() const
{
	return second;
}
template <class T>
void Pair<T>::setsecond(T secondval)
{
	second = secondval;
}

void funcex()
{
	cout << "friend example" << endl;
}
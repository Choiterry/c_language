#include <iostream>

using namespace std;
int sim = 0;
int cmx = 0;
class simple
{
public : 
	simple()
	{
		sim++;
		cout << sim << "번째 simple 객체" << endl;
	}
};
class complex
{
public :
	complex()
	{
		cmx++;
		cout << cmx << "번째 complex 객체" << endl;
	}
	complex(complex& copy)
	{
		cmx++;

	}

};
int main()
{

}
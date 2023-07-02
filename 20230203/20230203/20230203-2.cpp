#include<iostream>
#include <string>
const int maxsize = 30;
class number
{
private:
	int top;
	int arr[maxsize];
public:
	number():top(-1)
	{
	}
	~number()
	{
	}
	void push(int num)
	{
		arr[++top] = num;
	}
	int pop()
	{
		return arr[top--];
	}
	int peep()
	{
		return arr[top];
	}
	void display()
	{
		for (int i = 0; i <= top; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	int size()
	{
		return top + 1;
	}
};
number& intopost(number& ref)
{

}
int calculation(const string& ref)
{
	number num;
	number op;
	for (int i = 0; i < num.size(); i++)
	{
		if(0<ref[i]<99)
		char c = ref
	}
	
}
int main()
{

}
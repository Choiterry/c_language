#include <iostream>
#include <cstring>

namespace comp_pos
{
	enum
	{
		clerk = 0, senior = 1
	};	
}
using namespace std;
class namecard
{
private:
	char *name;
	char *id;
	char *number;
	int position;
public:
	namecard(const char* myname, const char* myid, const char* mynumber, int mypos)
	{
		position = mypos;
		name = new char[strlen(myname) + 1];
		id = new char[strlen(myid) + 1];
		number = new char[strlen(mynumber) + 1];
		strcpy(name, myname);
		strcpy(id, myid);
		strcpy(number, mynumber);
	}
	namecard(const namecard& copy)
	{
		name = new char[strlen(copy.name) + 1];
		id = new char[strlen(copy.id) + 1];
		number = new char[strlen(copy.number) + 1];
		strcpy(name, copy.name);
		strcpy(id, copy.id);
		strcpy(number,copy.number);
		position = copy.position;
	}
	void showinfo() const
	{
		cout << name << endl;
		cout << id << endl;
		cout << number << endl;
	}
	~namecard()
	{
		delete[]name;
		delete[]id;
		delete[]number;
	}
};
int main()
{
	namecard manclerk("lee", "abceng", "010-1111-2222", comp_pos::clerk);
	namecard copy1(manclerk);
	namecard mansenior("hong", "orangeeng", "010-3333-4444", comp_pos::senior);
	namecard copy2(mansenior);
	
	copy1.showinfo();
	copy2.showinfo();
	return 0;
}
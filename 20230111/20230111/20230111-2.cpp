#include <iostream>
#include<cstring>
using namespace std;
class girl;

class boy
{
private:
	int height;
	friend class girl; // boy class가 girl을 친구라고 설정하였으므로 girl클래스가 boy 클래스의 멤버를 직접소환 가능하다.
public:
	boy(int len) : height(len)
	{

	}
	void showyourfriendinfo(girl& name);
	
};
class girl
{
private :
	char phnum[20];
	friend class boy;
public:
	girl(const char* num) //. const가 붙어야 작동한다.이유는??
	{
		strcpy(phnum, num);
	}
	void showyourfriendinfo(boy& name)
	{
		cout << "his height" << name.height << endl;
	}
};

void boy::showyourfriendinfo(girl& name) // 여기에 girl을 호출하기 위해 앞에 4줄에 class girl을 선언해준다
{
	cout << name.phnum << endl; // 여기에서 오류가 생긴다 정의되지 않은 형식 girl을 사용했다고 한다
}

int main()
{
	boy terry(188);
	girl jane("01025927881");
	terry.showyourfriendinfo(jane);
	jane.showyourfriendinfo(terry);
	return 0;
}
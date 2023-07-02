#include<iostream>
#include "link.h"
using namespace std;

int main()
{
	list l;
	elementtype i;
	cout << "enter items to add to list, add 0 to stop";
	cin >> i; //여기서 하나 받고
	while (i != 0)
	{
		l.inserthead(i); //  여기서 하나저장하고
		cin >> i; //여기서 만약 0이면 저장안하고 바로 탈출할 수 있게 함
	}
	
	cout << "here is the element in the list" << "\n";
	
	elementtype elem; //여기서 변수를 이렇게 설정해도 중요한건 객체인 l에 있으므로 elem은 상관없음
	bool notempty(l.first(elem)); //만약 l.first(elem)이 true인자 false인지 나올거임 아니면 true인 걸로 변수 설정하고 대입
	while (notempty) // notempty가 0이 아니면 여기서 true라면 계속 작동
	{
		cout << elem << "\n"; // 그럼 출력
		notempty = l.next(elem); //여기서 하나씩 다음꺼 notempty에 넣어서 비었는지 확인해보기
	}
	return 0;

}
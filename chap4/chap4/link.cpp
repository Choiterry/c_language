#include "link.h"
list::list() :head(0), current(0), tail(0)
{
	//head의 elem=0, current의 elem=0, tail의 elem=0 이다
	current = head;
}
list::~list()
{
	while (head != 0)
	{
		node* delnode = head; // 삭제할 노드를 새로 지정 하고 head 넣기
		head = head->next; // head에 head 의 next를 지정함으로써 한번에 지울 수 있게한다.
		delete delnode; // 지우기
	}
}
void list::inserttail(const elementtype& elem) // 뒤에 붙이는 기능 tail와 head는 주소만 가지고있지 값을 가지지는 못한다.
{
	node* addednode = new node; //새로운 노드를 생성
	assert(addednode); //new node에 공간을 잘 넣은건지 확인하기 
	addednode->elem=elem; //새로운 노드에 값을 넣고
	if (head == 0)
		head = addednode; // head가 비어있으면 head와 tail이 가리키는 주소에 addednode의 주소를 준다
	else
		tail->next = addednode; //head가 비어있지 않으면 tail의 뒤에 붙이는 것이므로 next는 addednode가 되고
	tail = addednode; // tail에는 addednode의 주소를 준다
	addednode->next = 0; //addednode가 tail 역할 대신 하려면 next가 0이 되어야 한다
}
void list::inserthead(const elementtype& elem) // 앞에 붙이는 기능
{
	node* addednode = new node; //새로운 노드를 생성
	assert(addednode); // 새로운 new node에 공간을 할당 잘 했는지 확인하기
	addednode->elem = elem; //새로운 노드에 값을 넣고
	if (head == 0)
		tail = addednode; 
	else
		addednode->next = head;
	head = addednode;
}
bool list:: first(elementtype& elem)
{
	if (head == 0) //head 가 비어있으면 false
		return false;
	else
	{
		elem = head->elem;//head의 변수 elem을 꺼내기
		current = head; // current = head는 무조건 next 나오기 전에 나와야 하는데 그게 next 안에 있으면 
		//	여러번 반복하면서 계속 current 값이 안변하는 경우가 생기므로 여기다가 어차피 한번 시행하는 first에다가
		//  넣어준다. current = head 를 대신 넣을 수 있는 공간으로는 생성자가 있지만 이는 이후에 시행할 때 예외상황을 만들기 때문에 그냥 여기다가 넣어준다.
		return true;
	}
}
bool list::next(elementtype& elem)
{
	assert(current); //current 값이 없으면 next를 진행할 수 없다.
	if (current->next == 0) // 현재 current 의 다음값이 0이면 중단
		return false;
	else
	{
		current = current->next; //현재 current 값의 노드 next을 지금의 current로 넣는걸로 하나 다음값으로 진행하는것을 뜻함
								//이게 먼저 나온 이유는 first를 통해 이미 한번 했기 때문에 먼저 하나 올리고 변수값 넣어준다
		elem = current->elem; //변수 elem 은 current의 elem을 넣어준다
		return true;
	}
}
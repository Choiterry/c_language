//dummy head 정적인 head로 관리용으로 사용
//list 를 전체를 출력하는 함수 만들기
//이제는 while 문으로 만들것
//node list 로 생성하면 m alloc이 나오니까 free를 만들어줘야하는데 test할 때엔 나중에
//
#include <stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct NODE
{
	char data[64];
	struct NODE* next;
}NODE;

NODE* g_head = NULL;

void printlist()
{
	NODE* phead = g_head;
	while (phead != NULL)
	{
		printf("[%p]%s, next[%p]\n",phead, phead->data,phead->next);
		phead = phead->next;
	}
	
}
int insertnew(char* data)
{
	NODE* pnode = (NODE*)malloc(sizeof(NODE)); //새로운 container 생성
	memset(pnode, 0, sizeof(NODE)); 
	strcpy_s(pnode->data, sizeof(pnode->data),data);

	if (g_head == NULL) // 만약 전역변수인 g_head가 비어있으면 
		g_head = pnode;
	else
	{
		pnode->next = g_head; //대체하기전에 next를통해서 전값을 이어가도록 설정
		g_head = pnode; // 새로운 데이터를 대입하기 단, 데이터와 next가 있으므로 그 전의 값도 불러오게끔 함
	}
	return 1;
}
int main()
{
	//list test를 위한 메인코드생성
	insertnew("test01");
	printlist(); // test01

	insertnew("test02");
	printlist(); //test02 test01

	insertnew("test03");
	printlist();//test03 test02 test01

	return 0;
}
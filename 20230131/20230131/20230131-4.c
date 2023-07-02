////singled linked list (container) 연결 리스트
////data 관리하는 것 
////포인터 숫자가 한개이고 자기 다음을 가리키는 것이 특징
////체인처럼 줄줄이 포인터로 연결 된다 (재귀함수 참고)
////node(container) + next(pointer) -> node(container) + next(pointer) ->...NULL
////일차원적이고 선형적임 // 데이터 베이스(구조체)
////list & array
//
//#include<stdio.h>
//
//typedef struct NODE
//{
//	int ndata;
//	struct NODE* next;
//}NODE;
//int main()
//{
//	NODE list[5] = { 0 };
//	//초기화
//	list[0].ndata = 100;
//	list[1].ndata = 200;
//	list[2].ndata = 300;
//	list[3].ndata = 400;
//	list[4].ndata = 500;
//
//	//연결 리스트 설정
//	list[0].next = &list[1];
//	list[1].next = &list[2];
//	list[2].next = &list[3];
//	list[3].next = &list[4];
//	list[4].next = 0;
//
//	
//
//	for (int i = 0; i < 5; i++)
//		printf("list [%d] : %d\n", i, list[i].ndata);
//
//	NODE* ptmp = &list[0];
//	while (ptmp != NULL)
//	{
//		printf("%p : %d\n", ptmp, ptmp->ndata);
//		ptmp = ptmp->next; //ptmp의 값이 연산자에 의해 오버라이팅 된다
//	}
//	return 0;
//}
//#include<iostream>
//#include<malloc.h>
////변수
////지역(스택)
////전역, 정적, 외부(데이터)
//
//// 실행도중에 대응이 가능한, 런타임중에 가능한 dynamic한 
//// 변수를 생성하는 것이 동적할당
//// heap영역
//int main()
//{
//	int * pint = (int*)malloc(100); //main stack pint에 heap 영역에 100byte 메모리를 잡고 그 주소를 전달
//	return 0;
//}									//형 변환 꼭 해주기 malloc의 반환 타입은 void인데 이는 100byte를 받아서 메모리를 잡고
//									//malloc의 반환값은 주소의 첫번째 주소 값
//									//free(pint)를 통해서  pint를 통해서 거기에 있는 heap 메모리를 해제한다.
				`					// 만약 할당된 공간이 부족하면 부족한 크기만큼이 아니라 새로 할당해주어야 한다
									// 그리고 원래 가르키던 곳은 풀어준다
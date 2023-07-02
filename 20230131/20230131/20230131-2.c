////재귀호출// 기본적으로 반복문이랑 동일한 구조
//// 사용하는 이유는 call stack 관리 때문에 //
////디버그 모드 실행하기//
////f9시작점 잡고 -> f5 디버그 실행 - > f11로 창 키고 -> f10으로 한줄씩 넘기면서보기//
//
//#include <stdio.h>
//int test(int num)
//{
//	printf("test(%d)\n", num);
//	if (num <= 0)
//	{
//		return;
//	}
//	return test(--num);
//}
//int main()
//{
//	test(5);
//	return 0;
//}
//// thread 는 stack 의 크기가 1mb밖에 안된다.//
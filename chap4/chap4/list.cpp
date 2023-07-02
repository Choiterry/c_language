//#include "list.h"
//list::list()
//	{
//		currentposition = -1; // currentposition 을 -1로 두는 이유는 insert하지 않고 
//		numberofelements = 0;
//	}
//list::~list()
//{
//
//}
//void list::insert(listelementtype& elem)
//{
//	assert(numberofelements < maxlistsize); // 만약 이게 성립이 안되면 stop한다 성립하면 그냥 넘어간다
//	listarray[numberofelements] = elem; // lsit에 추가하기 위해서 거기에 같은 type의 data인 elem 넣기
//	numberofelements++; // 추가하고 나서는 크기 하나 증가
//}
//bool list::first(listelementtype& elem)
//{
//	if (numberofelements == 0)
//	{
//		return false; //비어있으면 false
//	}
//	else // 비어있지 않을 때 실행
//	{
//		currentposition = 0; // current를 앞으로 하고
//		elem = listarray[currentposition]; //elem 에 기억할 수 있게 &를 사용했으므로 인덱스 0의 값을 반환
//		return true; // true 리턴해주기
//	}
//}
//bool list::next(listelementtype& elem)
//{
//	assert(currentposition >= 0); // currentposition이 -1이면 first도 진행안한 상황이니까 중지
//	if (currentposition >= numberofelements - 1) // currentposition은 numberofelements-1보다 작아야한다
//	{
//		return false; //false 반환
//	}
//	else
//	{
//		currentposition++; // current값을 올리면서
//		elem = listarray[currentposition]; // elem을 증가한 current 값으로 바꾸고
//		return true; // true 반환
//	}
//}
//

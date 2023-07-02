//#include <iostream>
//#include "myclass.h"
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	const int nsize = 3; //nsize라는 변수에 3이라는 숫자를 설정한다
//	int psch[nsize] = {900, 1100,1300}; // psch라는 변수에 3개의 배열을 생성한다, 900 1100 1300으로 초기화한다
//
//	cdyna adyna;// cdyna에 객체설정해준다
//	adyna.setinfo(nsize, psch); //setinfo함수의 매개변수는 int와 int* 이므로 첫번째로는 nsize가 들어가고 두번째로는 포인터변수에 해당하는 공간에 대한 변수인 psch가 들어간다. 
//	adyna.showschedule(); //showschedule 함수를 이용해서 현재상태를 출력한다
//
//	cdyna* pdyna; // 객체설정하는데 이번에는 
//	pdyna = new cdyna();
//	pdyna->setinfo(nsize, psch);
//	pdyna->showschedule();
//
//	cdyna anotherdyna;
//	anotherdyna = *pdyna;
//	anotherdyna.showschedule();
//
//	delete pdyna;
//
//
//}
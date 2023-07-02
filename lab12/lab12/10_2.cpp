//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int* p5, ** p6; // p5은 1차원 배열 주소값,  p6 은 2차원 배열 주소값
//	int nsize = 3; // 사이즈가 3
//
//	p5 = new int[nsize]; // p5은 3개의 배열을 새로 만들어준다
//	for (int i = 0; i < nsize; i++)
//	{
//		p5[i] = i + 1; // P5의 배열에 1부터 3까지 반복문 이용하여 넣기
//		cout << p5[i] << endl; // 출력하기
//	}
//
//	p6 = new int* [nsize]; //일단 P6에 새로운 배열의 주소를 만들어준다
//	for (int j = 0; j < nsize; j++)
//	{
//		p6[j] = new int[4]; //P6[]의 배열안에 새로운 배열을 반복문으로 만들어준다 이중반복문을 이용하여 만들어준다.
//	}
//	int ncnt = 1; 
//	for (int k = 0 ; k < 3 ; k++)
//	{
//		for (int p = 0 ; p < 4 ; p++)
//		{
//			p6[k][p] = ncnt++; // P6응 이중반목분을 이용하여 차례로 1부터 넣어준다
//			cout << p6[k][p] << endl; // 출력한다
//		}
//	}
//	delete []p5; // 공간 P5을 삭제해준다
//	for (int t = 0; t < nsize; t++)
//	{
//		for (int y = 0; y < 4; y++)
//		{
//			delete[]p6[y]; // P6의 주소를 가진 배열을 이중반복문을 통해서 일단 지워준다
//		}
//		
//	}
//	delete[]p6; // P6이라는 배열을 지워준다
//}
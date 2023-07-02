//#include<iostream>
//using namespace std;
//int linearsearch(int a[], int nsize, int target)
//{
//	if (nsize <= 0)
//		return -1; // 오류 화면 설정
//	if (a[nsize-1] == target) //뒤에서부터 하나씩 비교
//	{
//		return nsize - 1; // 맞으면 리턴
//	}
//	else
//	{
//		return linearsearch(a, nsize - 1, target);//다르면 다음단계에서 검색 그 다음 뒤에서부터 이어서 하기 
//	}
//}
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	cout << linearsearch(a, 10, 5); // 4로 리턴
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//#include<string>
//
//using namespace std;
//int main()
//{
//	char chstring1[30] = "hello", chstring2[30]; // chstring1을 설정 하고 chstring2을 빈공간으로 설정
//	char next; // 문자를 받기 위한 변수 설정
//	strcpy_s(chstring2,"kim"); // chstring2 에 kim 을 넣기
//	if (strcmp(chstring1, chstring2)) // chstring1 과 chstring2 를 비교하여서 ㅏㅓㅡㅜ
//	{
//		cout << "different" << endl; // 다르면 0이 아닌 다른 값이 나온다
//	}
//	else
//		cout << "same" << endl; // 같으면 0이 나오면서 조건문 탈출하여 이곳으로 나온다
//
//	cin >> chstring2; // chstring2에 입력하기
//	cout << chstring2 << endl; //chstring2를 출력하기
//
//	cin.get(next); 
//	cout << next << endl;
//	cout << chstring2 << endl; // chstring2를 출력하기
//
//	cout.put('a') << endl; // a 를 단순 출력하기
//	cout.put(chstring1[1]) << endl; // chstring1의 두번째 인덱스 출력하기
//
//	strcat_s(chstring1, chstring2); // chstring1의 뒤에 chstring2를 이어 붙이기
//	cout << chstring1; // chstring1를 출력하기
//	cout << "please enter the sentence" << endl;
//	cin.ignore(100,'!'); // ! 가 나오기전까지 최대 100개는 무시
//	cin.getline(chstring2, 30); // chstring2에 30개 이하까지의 문자열을 받는다.
//	cout << chstring2 << endl;
//}

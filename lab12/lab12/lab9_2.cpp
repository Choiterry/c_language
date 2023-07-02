//#include <iostream>
//#include <string> //string 라이브러리 열기
//
//using namespace std;
//
//int main()
//{
//	char chstring1[30] = "hello", chstring2[30]; // chstring1에 hello 넣고  chstring2는 비워놓기
//	int k; // 
//	string a = "hello"; //char string이 아니라 그냥 string
//	string b = "kim"; // 위와 동일
//
//	cout << a + b; //string에서는 두개의 문자열을 합칠때 char string과는 달리 그냥 + 로 가능하다
//
//	string line;
//	string line2;
//	string line3;
//	string line4; 
//
//	cout << "enter";
//	getline(cin, line,'?'); // line 이라는 문자열 공간에 문자열 받기, 단 물음표가 나오기 전까지
//	cout << line << endl; // line 문자열에 받은 거 출력
//
//	getline(cin, line) >> line2; // line 이라는 문자열에 받고 나서 이를 line2 에 전달
//
//	cin >> k; // 숫자 입력받기
//	cin.ignore(30, '\n'); // 엔터 무시하기
//	getline(cin, line3); // 문자열 line3에 받기
//	cout << line3 << endl; // 문자열 line3 출력하기
//
//	string strex; // strex 라는 문자열 설정
//	strex = "how are you?"; //strex에 문자열 저장
//	int nloc; // 로케이션 찾기 위한 숫자 설정
//	nloc = strex.find("are"); // 문자열 함수 이름.fine("문자")을 사용하여 그 위치를 찾고 이를 nloc 에 저장한다.
//	cout << "lkocation of are is " << nloc << endl; // 로케이션 출력
//	
//	strex = chstring1; // strex 에 chstring1을 넣는 건 가능하다 문자열에 문자배열을 넣는 건 가능
//	cout << strex << endl;
//
//	strcpy_s(chstring1, strex.c_str()); // 문자배열애 문자열을 넣는건 단순 삽입이 아니라 문자열을 문자배열 형태로 변경해야 가능하다 이름.c_str() 을 통해서 한다
//	cout << chstring1 << endl;
//}
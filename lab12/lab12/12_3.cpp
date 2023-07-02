#include <fstream>
#include<iostream>

using namespace std;

int main()
{
	cout << "최준혁20192647" << endl;
	fstream filestream; //ifstream = instream , ofstream = outstream 으로 객체선언 하는거 줄여서 fstream = filestream 으로 객체 선언
	
	filestream.open("rwfile", ios::out | ios::binary); // out 이라고 설정
	for (int i = 1; i < 1000; i++)
	{
		filestream.write((char*)&i, sizeof(int)); // sizeof(int)는 int의 크기 (char*)&i는 i의 주소를 포인터변수로 저장한다는 뜻이다. 
	}
	filestream.close();


	filestream.open("rwfile", ios::in | ios::out | ios::binary); //out 과 in 을 모두 할 수 있도록 설정 binary는 이진법 모드설정
	if (filestream.fail()) // 잘 열렸는지 확인
	{
		cout << "file open failed";
		exit(1);
	}
	
	int num; //
	for (int j = 0; j < 10; j++) // 10개까지만 일단 읽고 출력하기
	{
		filestream.read((char*)&num, sizeof(int)); // int 의 크기인 4bit씩 읽고 저장하는데 num의 주소를 포인터변수에다가 하나씩 저장하고 
		cout << num << " "; // 그 num에 해당하는 값을 출력한다.
	}
	//cout << num << endl; // 이곳에서 출력되는 값은 결국 마지막 num의 값이다.
	cout << endl;
	filestream.seekp((4- 1) * sizeof(int)); // write에서 sixeof(int)를 곱해주어야 제대로 된 다섯번째 위치로 커서가 이동한다 
	num = 6; // num = 6 으로 설정
	filestream.write((char*)&num, sizeof(int)); //5번째 이동해서 그 위치에 6번째 값을 입력
	filestream.seekg(0); // read에서 다시 커서를 0번으로 이동
	for (int j = 0; j < 10; j++)
	{
		filestream.read((char*)&num, sizeof(int)); // 처음부터 10번까지 계속 읽고 출력하기
		cout << num << " ";
	}

	return 0;
}
//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	cout << "최준혁20192647" << endl;
//	ifstream instream; // 객체선언
//	ofstream outstream; //객체선언
//
//	int nsizemax = 100; //인덱스 갯수 설정
//	int* pndata; // 포인터 변수생성
//	pndata = new int[nsizemax]; // 포인터 변수에 배열 생성
//
//	instream.open("infile.txt"); // infile 연결 이름을 입력받을수도 있다-cin<<filename ; instream.open(filename);
//	if (instream.fail()) // 만약 인파일이 안열리면 알리기
//	{
//		cout << "file open failed";
//		exit(1);
//	}
//
//	outstream.open("outfile.txt", ios::app); // outfile 연결하고 뒤에 이어쓰기
//	
//	int ncnt = 0; // infile 에 있는 것 몇개인지 세기 위한 초기 갯수값
//	while (!instream.eof()) // infile 에 있는 것 마지막까지 읽기 위한 루프 문 
//	{
//		instream >> pndata[ncnt]; // 하나씩 읽어서 배열에 저장
//		cout << pndata[ncnt]; // 하나씩 쓰기
//		ncnt++; //갯수 더하기
//	}
//		/*int first, second, third;
//	instream >> first >> second >> third;*/
//	int nsum = 0; //infile 에 있는 것 총합을 구하기 위한 초기값
//	for (int i = 0; i < ncnt; i++) // 배열에 있는 값 모두 더하기 위한 루프문 
//	{
//		nsum = nsum + pndata[i];
//	}
//	outstream << "the sum of the \n" << ncnt
//		<< "numbers in infile.txt\n"
//		<< "is" << nsum
//		<< endl;
//
//	instream.close();
//	outstream.close();
//
//	return 0;
//}
//cout << setprecision(2) << 10.5 << 20.9  // 한번만 제시하면 뒤에 모든 것들에 영향을 끼친다
//cout << setw() << "hello" << setw(7) << 10  // 계속 세팅 해주어야 한다.
//setf( ios::fixed | ios::showpoint | ios::right) // 고정된 소수점 오른쪽 
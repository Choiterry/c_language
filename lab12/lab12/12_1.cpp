//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	cout << "최준혁20192647" << endl;
//	ifstream instream; // ifstream 에 대한 객체 설절
//	ofstream outstream;  // ofstream 에 대한 객체 설정
//
//	instream.open("infile.txt"); // 객체설정한거 infiil에 연겷해주기
//	if (instream.fail()) // 만약에 infile을 열지 못했으면 알리기 oufile은 만들면 되는거라 상관 없는데 infile은 없으면 못 읽어내서 꼭 있어야한다
//	{
//		cout << "file open failed";
//		exit(1);
//	}
//
//	outstream.open("outfile.txt",ios::app); // oustream 을 연결하는데 ios::app를 통해서 기존에 oufile에 있는것에 뒤에 붙여서 입력한다
//
//	int first, second, third; // first seoond third를  설정한다 
//	instream >> first >> second >> third; // 차례대로 스페이스바나 엔터를 통해 분류하여 세개의 숫자를 instream에서 가져와서 넣는다
//	outstream << "the sum of the first 3\n" // 
//		<< "numbers in infile.txt\n"
//		<< "is" << (first + second + third) // 숫자들을 더해서 출력한다
//		<< endl;
//
//	instream.close(); // instream 닫기
//	outstream.close(); // outsrtream 닫기
//
//	return 0;
//}
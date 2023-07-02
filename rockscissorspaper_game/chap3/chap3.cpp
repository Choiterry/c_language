
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
   
    string choice;
    int a ;
    srand(time(0));
    while (1)
    {
        a = rand() % 3;
        cout << " 지금부터 가위바위보 게임을 실시하겠습니다." << "무엇을 내겠습니까?" << endl; //출력하기
        cin >> choice; //입력받기

        if (a == 0) // 가위를 a=0 이라고 가정 
        {
            if (choice == "가위")
            {
                cout << "비겼습니다." << endl;
            }
            else if (choice == "바위")
            {
                cout << "이겼습니다." << endl;
            }
            else if (choice == "보")
            {
                cout << "졌습니다." << endl;
            }
        }
        if (a == 1) // 바위를 a=1 이라고 가정
        {
            if (choice == "가위")
            {
                cout << "졌습니다." << endl;
            }
            else if (choice == "바위")
            {
                cout << "비겼습니다." << endl;
            }
            else if (choice == "보")
            {
                cout << "이겼습니다." << endl;
            }
        }
        if (a == 2)// 보를 a=2 이라고 가정
        {
            if (choice == "가위")
            {
                cout << "이겼습니다." << endl;
            }
            else if (choice == "바위")
            {
                cout << "졌습니다." << endl;
            }
            else if (choice == "보")
            {
                cout << "졌습니다." << endl;
            }
        }
    }
    
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

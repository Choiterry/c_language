//#include <iostream>
//using namespace std;
//class sinivelcap
//{
//public :
//    void take()const
//    {
//        cout << "콧물이 싹 납니다" << endl; // 콧물클라스의 함수
//    }
//};
//class sneezecap 
//{
//public :
//    void take() const
//    {
//        cout << "재채기가 멎습니다" << endl; // 재채기 클라스의 함수
//    }
//};
//class snufflecap
//{
//public:
//    void take() const
//    {
//        cout << "코가 뻥 뚤립니다" << endl; // 코 클라스의 함수
//    }
//};
//class coldpatient
//{
//public :
//    void takesinivel(const sinivelcap &cap) const // 매개변수가 콧물 클래스의 타입의 변수의 참조자 cap
//    {
//        cap.take();  // 참조자cap을 이용한 그 클라스의 함수 take 호출
//    }
//    void takesneeze(const sneezecap& cap) const
//    {
//        cap.take();
//    }
//    void takesnuffle(const snufflecap& cap) const
//    {
//        cap.take();
//    }
//};
//int main()
//{
//    sinivelcap scap;
//    sneezecap zcap;
//    snufflecap ncap;
//
//    coldpatient suffer;
//    suffer.takesinivel(scap);
//    suffer.takesneeze(zcap);
//    suffer.takesnuffle(ncap);
//}

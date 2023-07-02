//#include <iostream>
//using namespace std;
//class sosimple
//{
//private:
//    int num;// private 변수 생성
//public:
//    sosimple(int n) // 생성자
//    {
//        num = n;
//    }
//    sosimple(const sosimple& copy) // 복사생성자로 매개변수의 변수형이  클래스의 참조자이고 const로 변경불가하게 만든다 
//    {
//        num = copy.num; // 인자로 받은 클래스의 객체의 멤버변수인 num을 새로운 객체에 대입해준다
//        cout << "called sosimple (sosimple & s)" << endl;
//    }
//    void showsimpledata()
//    {
//        cout << num << endl;
//    }
//};
//int main()
//{
//    sosimple sim1(15);
//    sosimple sim2(sim1); //simm2에 복사생성자를 사용하여 sim1이라는 객체의 멤버변수를 대입해준다
//    sim1.showsimpledata();
//    sim2.showsimpledata();
//
//    return 0;
//}
//

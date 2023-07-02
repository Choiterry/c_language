//#include <iostream>
//#include <cstring>
//using namespace std;
//class sosimple
//{
//private:
//    int num;
//public:
//    sosimple(int n) : num(n) // 생성자로 초기화
//    {
//        cout << "num = " << num <<"," << endl;
//        cout << "address=" << this << endl; // this pointer를 사용하여 클래스의 주소를 표현
//    }
//    sosimple *getthinspointer()
//    {
//        return this; // 리턴값을 통해 포인터 객체의 주소값을 전달
//    }
//    void showsimpledata()
//    {
//        cout << num << endl; // 출력
//    }
//
//};
//int main()
//{
//    sosimple sim1(100); // 생성자로 초기화
//    sosimple* ptr1 = sim1.getthinspointer(); // 클래스의 객체ptr1은 포인터변수로서 sim1이라는 객체의 멤버함수getthispointer를 통해 return
//    cout << ptr1 << ","; // prt1을  출력하면 주소가 나올것이다
//    ptr1->showsimpledata(); // ptr1의 주소를 가지 객체의 멤버함수를 실행
//    
//    sosimple sim2(200);
//    sosimple *ptr2 = sim2.getthinspointer();
//    cout << ptr2 << ",";
//    ptr2->showsimpledata();
//
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//class sosimple
//{
//private: 
//    int num;
//public: 
//    sosimple(int n) :num(n){}
//    sosimple& addnum(int n) 
//    { num += n; 
//    return *this; 
//    }
//    void simplefunc() 
//    {
//        cout << "simple" <<num<< endl;
//    }
//    void simplefunc()const
//    {
//        cout << "const simple" <<num<< endl;
//    }
//};
//void yourfunc(const sosimple& obj)
//{
//    obj.simplefunc(); // const 객체를 불러오므로 const 붙은 함수만 호출 가능하다
//}
//int main()
//{
//    sosimple obj1(2);
//    const sosimple obj2(20);
//
//    //ss.addnum(20); 이건 const 함수가 아니므로 부를 수 없다.
//    obj1.simplefunc(); // simple2
//    obj2.simplefunc(); // const simple20
//
//    yourfunc(obj1); // const simple2
//    yourfunc(obj2); // const simple 20
//    return 0;
//}

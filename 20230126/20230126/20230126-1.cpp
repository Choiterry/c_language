//#include <iostream>
//#include <cstring>
//
//using namespace std;
//class first
//{
//private:
//    char *name;
//    int age;
//public:
//    first(const char* myname, int myage) // 생성자 선언
//    {
//        int len = strlen(myname) + 1; //여기에는 operator가 작동하지는 않음
//        name = new char[len]; 
//        strcpy(name, myname);
//        age = myage;
//    }
//    first& operator= (const first& ref) // 연산자 선언
//    {
//        delete []name; // 
//        int len = strlen(name) + 1;
//        name = new char[len];
//        strcpy(name, ref.name);
//        age = ref.age;
//        return *this;
//    }
//    void showinfo()const
//    {
//        cout << name << age << endl;
//    }
//    ~first()
//    {
//        cout << "destructed" << endl;
//    }
//};
//int main()
//{
//    first person1("terry", 25);
//    first person2("jane", 23);
// 
//    person1 = person2; //person1.operator=(person2) 이므로 person1을 delete 시키고 새로 할당받고 person2의 객체를 대입
//    person1.showinfo();
//    person2.showinfo();
//
//    return 0;
//}

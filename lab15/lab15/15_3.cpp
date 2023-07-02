#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Pet // class pet 설정
{
public:
    string name; //  string 변수 name 설정
    virtual void print() const; // virtual 함수 print() 
};

class Dog : public Pet // pet으로부터 상속받은 dog 클래스
{
public:
    string breed; 
    virtual void print() const; // virtual 함수 print 부모클래스에서 정의했으므로 따로 정의 안해도 되긴 함
};

int main()
{
    Dog vdog;
    Pet vpet;

    vdog.name = "Tiny";
    vdog.breed = "Great Dane";
    vpet = vdog; // 부모클래스는 자식클래스가 될 수 있으나 slicing 을 거쳐 brees는 실행 할 수 없다.
    cout << "The slicing problem:\n";
    //vpet.breed; is illegal since class Pet has no member named breed.
    vpet.print(); // virtual 함수이고, vpet이므로 부모클래스의 print 함수 실행
    cout << "Note that it was print from Pet that was invoked.\n";

    cout << "The slicing problem defeated:\n";
    Pet* ppet; // 주소를 저장
    ppet = new Pet; // 주소값에 해당하는 공간 생성
    Dog* pdog; // 주소 생성
    pdog = new Dog; // 주소값에 해당하는 공간 생성

    pdog->name = "Tiny"; //  주소를 이용한 클래스 정의 이므로 -> 사용한다
    pdog->breed = "Great Dane"; // 위와 마찬가지
    ppet = pdog; // 주소값을 대입하는 것이므로 slicing은 없다
    ppet->print(); // ppet의 주소는 pdog이므로 pdog의 print() 실행
    pdog->print(); // pdog의 print 실행

    //The following, which accesses member variables directly
    //rather than via virtual functions would produce an error:
    //cout << "name: " << ppet->name << "  breed: " 
    //     << ppet->breed << endl;
    //It generates an error message saying 
    //class Pet has no member named breed.

    return 0;
}

void Dog::print() const
{
    cout << "name: " << name << endl;
    cout << "breed: " << breed << endl;
}

void Pet::print() const
{
    cout << "name: " << name << endl;
}
//#include <iostream> // 여기에서 쓰이는 포인터 변수와 참조자에 대해서 유의해서 볼것
//using namespace std;
//class aaa // 클래스 선언
//{private :
//	int num;
//public:
//	aaa() :num(0) {} //디폴트생성자로써 num을 0으로 초기화 한다. 인자를 받지 않아도 초기화는 할 수 있다. 가장 큰 특징이 인자를 안받는 것이다.
//	aaa& createinit(int n)const // aaa클래스의 함수createinit은 매개변수 n을 받아서 아래와 같이 행동
//	{
//		aaa *ptr = new aaa(n); //클래스 aaa의 새로운 객체를 선언해서 ptr에 저장한다 이때 객체는 private 객체임.
//		return *ptr; // 포인터변수로 리턴하면 
//	}
//	void showyourname()const
//	{
//		cout << num << endl;
//	}
//private:
//	aaa(int n) :num(n)
//	{
//
//	}
//};
//
//int main()
//{
//	aaa base; // 디폴트 생성자 쓴다
//	base.showyourname(); // num 의 값이 0일 때 
//
//	aaa& obj = base.createinit(3);
//	obj.showyourname(); // num 의 값이
//
//	aaa& obj2 = base.createinit(12);
//	obj2.showyourname();
//
//	delete& obj;
//	delete& obj2;
//	return 0;
//}

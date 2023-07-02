//#include "myclass.h" // 클래스헤더파일을 연결해주기
//#include < iostream> //iostream 라이브러리 추가
//#include <string> // 문자열 라이브러리 추가해주기
//
//using namespace std;
//
//cdyna::cdyna() // constructor설정해주기 constructor는 객체를 초기화하느 역할을 하기 때문에 꼭 필요하다 쓰는 방법은 클래스::클래스 이다 리턴 값은 없다
//{
//	int m_nsize = 0; 
//	int *m_pnschedule = NULL;
//}
//cdyna::~cdyna() // destructor는 
//{
//	if (m_pnschedule != NULL)
//	{
//		delete[]m_pnschedule;
//	}
//}
//void cdyna::showschedule() // 데이터타입 클래스명 ::함수명와 같은 형식으로 쓴다
//{
//	if (m_pnschedule != NULL) // m_pnschedule 이라는 주소를 나타내는 변수 가 비어있지 않다면 
//	{
//		for (int i = 0; i < m_nsize; i++)
//		{
//			cout << m_pnschedule[i] << endl; //그값을 출력한다
//		}
//		/*while (*m_pnschedule != NULL)
//		{
//			cout << m_pnschedule << endl;
//			m_pnschedule++;
//		}*/
//	}
//	else
//		cout << "not assigned";
//}
//void cdyna::setinfo(int nsize , int *psch) // 데이터타입 클래스명::함수명 와 같은 형식으로 쓴다 매개변수로는 nsize와 *psch을 쓴다.
//{
//	m_nsize = nsize; // 클래스의 private 변수인 m_nsize에 nsize를 대입한다
//	if (m_pnschedule != NULL) // 만약 private 변수인 m_pnschedule라는 주소값이 비어있지 않다면 
//	{
//		delete[]m_pnschedule; //일단 지운다
//	}
//	m_pnschedule = new int[m_nsize]; // 그리고 다시 m_pnschedule이라는 주소값에 배열을 새로 만들어준다
//	for (int i = 0; i < m_nsize; i++) 
//	{
//		m_pnschedule[i] = psch[i]; //배열을 지정할 때에는 이렇게 반복문을 통해서 지정해준다 *m_pnschedule은 m_pnschedule[0]의 주소 값과 동일하다. 
//									//그리고 메인함수에서 받아오는 psch라는 주소가 저장되는 변수를 불러와서 직접 반복문을 통해서 넣어준다.
//	}
//}
//cdyna& cdyna::operator=(const cdyna& rtside) // 리턴값을 cdyna의 형태로 설정한다. cdyna의 영역에 해당되는 operator 함수에 상수인 rtside의 주소를 매개변수로한다.
//{
//	if (this == &rtside) // 만약 오른쬭 값이 왼쪽과 같다면 
//	{
//		return *this; // this라는 주소에 해당하는 값을 리턴한다.
//	}
//	else
//	{
//		m_nsize = rtside.m_nsize;
//		if (m_pnschedule != NULL)
//		{
//			delete[] m_pnschedule;
//		}
//		m_pnschedule = new int[m_nsize];
//		for (int i = 0; i < m_nsize; i++)
//		{
//			m_pnschedule[i] = rtside.m_pnschedule[i];
//		}
//	}
//	return *this;
//}
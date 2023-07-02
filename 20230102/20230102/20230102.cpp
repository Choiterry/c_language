//#include <iostream>
//#define ID_LEN 20
//#define MAX_SPD 200
//#define FUEL_STEP 2
//#define ACC_STEP 10
//#define BRK_STEP 10
//
//using namespace std;
//struct car
//{
//	char gamerid[ID_LEN]; // 사용자 아이디 크기를 설정 초기화는 안함
//	int fuelgauge;
//	int curspped;
//};
//void showcarstate(const car& car) // 매개변수가 car이라는 구조체(변수type)의 변수 car를 사용함
//{
//	cout << "소유자 id:" << car.gamerid << endl; 
//	cout << "연료량" << car.fuelgauge << endl;
//	cout << "현재속도" << car.curspped << endl;
//}
//void accel(car& car)
//{
//	if (car.fuelgauge <= 0)
//	{
//		return;
//	}
//	else
//		car.fuelgauge -= FUEL_STEP;
//	if (car.curspped + ACC_STEP >= MAX_SPD)
//	{
//		car.curspped = MAX_SPD;
//		return;
//	}
//	car.curspped += ACC_STEP;
//}
//void Break(car & car)
//{
//	if (car.curspped < BRK_STEP)
//	{
//		car.curspped = 0;
//		return;
//	}
//	car.curspped -= BRK_STEP;
//}
//int main()
//{
//	car run99 = { "run99", 100 , 0 }; // 초기화 하는 방법 중 하나
//	accel(run99); // 함수 실행  car의 변수인 run 99를 사용
//	accel(run99);
//	showcarstate(run99);
//	Break(run99);
//	showcarstate(run99);
//
//	car sped77 = { "sped77", 100, 0 };
//	accel(sped77);
//	Break(sped77);
//	showcarstate(sped77);
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//namespace carspace
//{
//	enum
//	{
//		ID_LEN = 20,MAX_SPD = 200,FUEL_STEP = 2,ACC_STEP = 10,BRK_STEP = 10
//	};
//}
//class car
//{
//private:
//	char gamerid[carspace::ID_LEN]; // 사용자 아이디 크기를 설정 초기화는 안함
//	int fuelgauge;
//	int curspped;
//public:
//	void initmembers(char* id, int fuel);
//	void showcarstate();
//	void accel();
//	void Break();
//};
//
//void car::initmembers(char* id, int fuel)
//{
//	strcpy_s(gamerid, id);
//	fuelgauge = fuel;
//	curspped = 0;
//}
//void car::showcarstate() 
//{
//	cout << "소유자 id:" <<gamerid << endl; 
//	cout << "연료량" << fuelgauge << endl;
//	cout << "현재속도" << curspped << endl;
//}
//void car::accel()
//{
//	if (fuelgauge <= 0)
//	{
//		return;
//	}
//	else
//		fuelgauge -= carspace::FUEL_STEP;
//	if (curspped + carspace::ACC_STEP >= carspace::MAX_SPD)
//	{
//		curspped = carspace::MAX_SPD;
//		return;
//	}
//	curspped += carspace::ACC_STEP;
//}
//void car::Break()
//{
//	if (curspped < carspace::BRK_STEP)
//	{
//		curspped = 0;
//		return;
//	}
//	curspped -= carspace::BRK_STEP;
//}
//int main()
//{
//	car run99; // 초기화 하는 방법 중 하나
//	run99.initmembers("run99", 100);
//	run99.showcarstate();
//	run99.accel();
//	run99.accel();
//	run99.accel();
//	run99.showcarstate();
//	run99.Break();
//	run99.showcarstate();
//	return 0;
//
//
//}

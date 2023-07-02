#include<iostream>
using namespace std;

class TIME
{
	//characteristic
	//precondition
	//postcondition
	//returns

private:
	int minutes;
public:
	TIME() :minutes(0) // 여기는 비어도 되는게 맞는지
	{

	}

	void readtime(bool& errorflag) // bool을 사용하는 특별한 이유가 있는지?
	{
		int hour, minute;
		enum am_pm { AM, PM } AM_OR_PM; //  AM=0, PM=1 으로 하고 뒤에 있는 AM_OR_PM은 이에 대한 객체이름인지? am_pm은 데이터 타입이고 AM_OR_PM은 객체이름이다.
		const char delimeter(':');
		errorflag = true;
		/*cin >> hour;*/
		if (!(cin >> hour)) // 첫번째 읽어들이는 hour값이 int 값이 아니면 return;
		{
			return;
		}
		if (hour < 0 || hour>12) // 만약 hour 값이 0 미만 12 초과면 return
		{
			return;
		}

		char c;
		cin >> c;
		if (c != delimeter) // 만약 delimeter이 : 가 아니면 return 
		{
			return;
		}
		/*cin >> minute;*/
		if (!(cin >> minute)) // 읽어들이는게 int 값이 아니면 오류->return
		{
			return;
		}
		if (minute < 0 || minute >59) // 만약 minute이 0보다 아래와 59이상이면 return
		{
			return;
		}
		//////////////////////////////////////////////////////////////////am or pm
		cin >> c;
		if (c == 'a' || c == 'A')
			AM_OR_PM = AM;
		else if (c == 'p' || c == 'P')
			AM_OR_PM = PM;
		else
			return;
		cin >> c;
		if (c != 'm' && c != 'M')
		{
			return;
		}
		errorflag = false;// 여기까지 return 안하고 왔으면 errorflag는 false로 인정해준다. 제대로 받았다는 것
		if (hour == 12)
			minutes = minute; // 12시면 0시이다.
		else
			minutes = hour * 60 + minute;
		if (AM_OR_PM == PM)
			minutes += 60 * 12;
	}
	int subtracttime(TIME t)
	{
		return minutes - t.minutes;
	}
	void addtime(int t)
	{
		minutes = minutes + t;
		if ((minutes / 60) >= 12)
		{
			cout << "expected time is " << minutes / 60 - 12 << ":" << minutes % 60 << "pm";
		}
		else
		{
			cout << "expected time is " << minutes / 60 << ":" << minutes % 60 << "am";
		}
	}
};

int main()
{
	cout << "DS2023 - HW1 - 가반 - 최준혁 - 20192647" << "\n";
	int numberofvisit(0);
	int totalwaitingtime(0);
	char answer;
	TIME arrival;
	TIME seenbydoctor;
	TIME clk;
	do
	{
		bool errorflag; // 초기화 안해줘도 되는지

		cout << "enter arrival time" << endl;
		arrival.readtime(errorflag); // 여기서 errorflag가 false로 나와야 하는데 안나오면 아래에 while 문에 걸린다.
		while (errorflag) // erroflag가 true일때 다시 반복해서 받기
		{
			cin.clear();//
			cin.ignore(INT_MAX, '\n');//
			cout << "arrival time was inccorrectly formatted; try again";
			arrival.readtime(errorflag);
		}
		cout << "enter time seen by doctor" << endl;
		seenbydoctor.readtime(errorflag); //여기서 errorflag가 false로 나와야 한다.
		while (errorflag)//errorflag가 true일때 다시 반복해서 받기
		{
			cin.clear();//
			cin.ignore(INT_MAX, '\n');//
			cout << "arrival time was inccorrectly formatted; try again";
			seenbydoctor.readtime(errorflag);
		}
		numberofvisit++; // 총인원수 세기
		totalwaitingtime += (seenbydoctor.subtracttime(arrival)); //계산하기

		cout << "done? enter 'y' to quit, anything else to continue";
		cin >> answer;
	} while (answer != 'y');

	cout << "number of visit" << numberofvisit << "\n";
	cout << "total waiting time" << totalwaitingtime << "\n";
	cout << "average waiting time is " << totalwaitingtime / numberofvisit << "minutes" << "\n";
	bool error(true);
	cout << "when did you arrive ?" << "\n";
	clk.readtime(error);

	clk.addtime(totalwaitingtime / numberofvisit);
	return 0;
}
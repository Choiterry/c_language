//#include<iostream>
//using namespace std;
//class TIME
//{
//private: 
//	int minutes;
//public :
//	void gettime()
//	{
//		int hour, minute;
//		char c;
//		cin >> hour;
//		if (hour < 0 || hour>12)
//		{
//			return ;
//		}
//		cin >> c;
//		if (c != ':')
//		{
//			return ;
//		}
//		cin >> minute;
//		if (minute < 0 || minute > 59)
//		{
//			return ;
//		}
//		cin >> c;
//		if (c == 'a' || c == 'A')
//		
//		else if (c == 'p' || c == 'P')
//		
//		else
//			return;
//		cin >> c;
//		if (c != 'm' && c != 'M')
//		{
//			return;
//		}
//		if (AM_OR_PM != PM)
//		{
//			minutes = hour * 60 + minute;
//		}
//		else
//		{
//			minutes = hour * 60 + minute + 720;
//		}
//	}
//	int subtracttime(TIME t)
//	{
//		return this->minutes - t.minutes;
//	}
//
//};
//int main()
//{
//	int numberofvisit(0);
//	int totalwaitingtime(0);
//	char answer;
//	TIME patient;
//	TIME doctor;
//	do
//	{
//		cout << "enter arrival time" << endl;
//		patient.gettime(); 
//		/*while (errorflag)
//		{
//			cout << "arrival time was inccorrectly formatted; try again";
//			arrival.readtime(errorflag);
//		}*/
//		cout << "enter time seen by doctor" << endl;
//		doctor.gettime();
//		/*while (errorflag)
//		{
//			cout << "arrival time was inccorrectly formatted; try again";
//			seenbydoctor.readtime(errorflag);
//		}*/
//		numberofvisit++;
//		totalwaitingtime += (doctor.subtracttime(patient));
//
//		cout << "done? enter 'y' to quit, anything else to continue";
//		cin >> answer;
//	} while (answer != 'y');
//
//	cout << "number of visit" << numberofvisit << "\n";
//	cout << "total waiting time" << totalwaitingtime << "\n";
//	cout << "average waiting time is " << totalwaitingtime / numberofvisit << "minutes" << "\n";
//	return 0;
//}
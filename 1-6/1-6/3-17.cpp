//#include <iostream>
//#include <cmath>
//#include <string>
//#include <xloctime>
//
//using namespace std;
//
//int main()
//{
//	int nwin = 0;
//	string struserinput;
//	cout << "Let's play rock,paper,scissors game" << endl;
//	cout << "imput your choice (R,P,S)" << endl;
//	cin >> struserinput;
//
//	int ncominput;
//	srand(time(0));
//	
//	ncominput = rand() % 3;
//	string strncominput;
//
//
//	switch (ncominput)
//	{
//	case 0:
//		strncominput = "r";
//		break;
//	case 1:
//		strncominput = "p";
//		break;
//	case 2:
//		strncominput = "s";
//		break;
//	}
//
//	if (struserinput == strncominput)
//	{
//		nwin = 0;
//	}
//	else
//	{
//		if (struserinput == "r")
//		{
//			if (strncominput == "p")
//			{
//				nwin = -1;
//			}
//			else if (strncominput == "s")
//			{
//				nwin = 1;
//			}
//		}
//		else if (struserinput == "p")
//		{
//			if (strncominput == "r")
//			{
//				nwin = 1;
//			}
//			else if (strncominput == "s")
//			{
//				nwin = -1;
//			}
//		}
//		else if (struserinput == "s")
//		{
//			if (strncominput == "p")
//			{
//				nwin = 1;
//			}
//			else if (strncominput == "r")
//			{
//				nwin = -1;
//			}
//		}
//	}
//
//		cout << "user input is " << struserinput << " and computer choice is " << strncominput << endl;
//		string strresult;
//		switch (nwin)
//		{
//		case -1:
//			strresult = "you lose";
//			break;
//		case 0:
//			strresult = "draw";
//			break;
//		case 1:
//			strresult = "you win";
//			break;
//		}
//		cout << strresult << endl;
//		cout << "20192647_최준혁";
//	return 0;
//}

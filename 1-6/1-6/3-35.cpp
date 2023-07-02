//#include <iostream>
//#include <cmath>
//#include <string>
//#include <xloctime>
//
//using namespace std;
//
//int amiwin(string strrpcinput, string strrpccom);
//int main()
//{
//	string strresult;
//	int amiwin(string strrpcinput, string strrcpcom);
//	int nwin = 0;
//	string struserinput;
//	
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
//	nwin = amiwin(struserinput, strncominput);
//	cout << "user input is " << struserinput << " and computer choice is " << strncominput << endl;
//	
//
//	cout << strresult << endl;
//	cout << "20192647_최준혁";
//	return 0;
//}
//int amiwin(string strrpcinput, string strrpccom)
//{
//	int nwin;
//	if (strrpcinput == strrpccom)
//	{
//		nwin = 0;
//	}
//	else
//	{
//		if ( strrpccom == "r")
//		{
//			if (strrpccom == "p")
//			{
//				nwin = -1;
//			}
//			else if (strrpccom == "s")
//			{
//				nwin = 1;
//			}
//		}
//		else if (strrpcinput == "p")
//		{
//			if (strrpccom == "r")
//			{
//				nwin = 1;
//			}
//			else if (strrpccom == "s")
//			{
//				nwin = -1;
//			}
//		}
//		else if (strrpcinput == "s")
//		{
//			if (strrpccom == "p")
//			{
//				nwin = 1;
//			}
//			else if (strrpccom == "r")
//			{
//				nwin = -1;
//			}
//		}
//	}
//	return nwin;
//}

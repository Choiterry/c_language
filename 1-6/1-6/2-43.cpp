//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int pwaiting[7] = {22,21,24,20,18,25,23};
//
//	int nmaxval, nmaxpos;
//	nmaxpos = -1;
//	nmaxval = 0;
//
//	for (int index = 0; index < 7; index++)
//	{
//		int ncurrentval = pwaiting[index];
//		if (ncurrentval == 21)
//		{
//			break;
//		}	
//		if (ncurrentval % 2 != 0)
//		{
//			continue;
//		}
//		if (ncurrentval > nmaxval)
//		{
//			nmaxval = ncurrentval;
//			nmaxpos = index;
//		}
//	}
//	cout << "max value is " << nmaxval << "max pos is" << nmaxpos << endl;
//	cout << "20192647_최준혁" << endl;
//	return 0;
//}
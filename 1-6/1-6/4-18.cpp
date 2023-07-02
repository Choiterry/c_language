//#include <iostream>
//
//using namespace std;
//double FindClosetPoint(double* pSample, int nSizeOfArray, double target, double& nearest);
//
//int main()
//{
//	const int nSizeOfArray = 5;
//	double pSample[5] = { 0.3,0.6,0.1,0.4,0.8 };
//	double target,diff,nearest;
//
//	cout << "please input a double number in range of (0,1)" << endl;
//	cin >> target;
//
//	diff = FindClosetPoint(pSample, nSizeOfArray, target, nearest);
//	cout << "closet point is " << nearest << "its diff is " << diff << endl;
//	cout << "20192647_최준혁" << endl;
//	return 0;
//}
//
//double FindClosetPoint(double *pSample, int nSizeOfArray, double target, double &nearest)
//{
//	double mindiff = 1;
//	double diff = 1;
//	for (int index = 0; index < nSizeOfArray; index++)
//	{
//		double val = pSample[index];
//		diff = abs(target - val);
//		if (diff < mindiff)
//		{
//			mindiff = diff;
//			nearest = val;
//		}
//	}
//	return mindiff;
//}
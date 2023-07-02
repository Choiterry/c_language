//#include <iostream>
//
//using namespace std;
//double FindClosetPoint(double* pSample, int nSizeOfArray, double target, double& nearest);
//int FindClosetPoint(int* pSampleInt, int nSizeOfArray, int target, int& nearest,bool babsdiff = true);
//
//int main()
//{
//	const int nSizeOfArray = 5;
//	double pSample[5] = { 0.3,0.6,0.1,0.4,0.8 };
//	int pSampleInt[5] = { 3,6,1,4,8 };
//	double target, diff, nearest;
//	int ntarget, ndiff, nnearest;
//	
//	/*cout << "please input a double number in range of (0,1)" << endl;
//	cin >> target;
//	diff = FindClosetPoint(pSample, nSizeOfArray, target, nearest);
//	cout << "closet point is " << nearest << "its diff is " << diff << endl;*/
//
//	
//	cout << "please input a integer number in range of (0,10)" << endl;
//	cin >> ntarget;
//	bool babsdiff = false;
//	ndiff = FindClosetPoint (pSampleInt, nSizeOfArray, ntarget, nnearest, babsdiff);
//	cout << "closet point is " << nnearest << "its diff is " << ndiff << endl;
//
//	cout << "20192647_최준혁" << endl;
//	return 0;
//}
//
//double FindClosetPoint(double* pSample, int nSizeOfArray, double target, double& nearest)
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
//int FindClosetPoint (int* pSampleInt, int nSizeOfArray,int target, int& nearest, bool babsdiff )
//{
//	int mindiff = 10;
//	int diff = 1;
//	for (int index = 0; index < nSizeOfArray; index++)
//	{
//		int val = pSampleInt[index];
//		if (babsdiff)
//		{
//			diff = abs(target - val);
//		}
//		else
//		{
//			diff = target - val;
//		}
//		diff = abs(target - val);
//		if (diff < 0)
//			continue;
//
//		if (diff <= mindiff)
//		{
//			mindiff = diff;
//			nearest = val;
//		}
//	}
//	return mindiff;
//}
//#include<iostream>
//using namespace std;
//void fillarray(int *a, int size, int& numberused);
//void sort(int *a, int numberused);
//void swapvalues(int& v1, int& v2);
//int indexofsmallest (const int *a, int startindex, int numberused);
//
//const int nsize = 10;
//
//int main()
//{
//	cout << "sorting program" << endl;
//	int samplearray[nsize], numberused;
//	fillarray(samplearray,nsize, numberused);
//	sort(samplearray, numberused);
//
//	cout << "sorted results" << endl;
//	for (int index = 0; index < numberused; index++)
//	{    
//		cout << samplearray[index] << " ";
//	}
//	cout << endl;
//	cout << "20192647_최준혁";
//	return 0;
//}
//
//void fillarray(int *a, int size, int& numberused)
//{
//	cout << "enter up to " << size << "nonnegative whole numbers" << endl
//		<< "mark the end of the list with a negative number" << endl;
//	int next, index = 0;
//	cin >> next;
//	while ((next >= 0) && (index < size))
//	{
//		a[index] = next;
//		index++;
//		cin >> next;
//	}
//	numberused = index;
//}
//
//void sort(int *a, int numberused)
//{
//	int indexofnextsmallest;
//	for (int index = 0; index < numberused - 1; index++)
//	{
//		indexofnextsmallest = indexofsmallest(a, index, numberused);
//		swapvalues(a[index], a[indexofnextsmallest]);
//
//	}
//}
//void swapvalues(int& v1, int& v2)
//{
//	int temp;
//	temp = v1;
//	v1 = v2;
//	v2 = temp;
//}
//int indexofsmallest(const int *a, int startindex, int numberused)
//{
//	int min = a[startindex], indexofmin = startindex;
//	for (int index = startindex + 1; index < numberused; index++)
//	{
//		if (a[index] < min)
//		{
//			min = a[index];
//			indexofmin = index;
//		}
//	}
//	return indexofmin;
//}
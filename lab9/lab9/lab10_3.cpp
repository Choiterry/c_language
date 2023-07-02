//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	cout << "최준혁20192647" << endl;
//
//	int* p5, ** p6;
//	int nsize = 3;
//	int nsizecol = 4;
//
//	p5 = new int[nsize];
//	p5[0] = 1, p5[1] = 2, p5[2] = 3;
//	for (int i = 0; i < nsize; i++)
//	{
//		cout << p5[i] << " " ;
//	}
//	cout << endl;
//
//	p6 = new int* [nsize];
//	int ncent = 1;
//	for (int i = 0; i < nsize; i++)
//	{
//		p6[i] = new int[nsizecol];
//		for (int j = 0; j < nsizecol; j++)
//		{
//			p6[i][j] = ncent++;
//		}
//	}
//
//	for (int i = 0; i < nsize; i++)
//	{
//		for (int j = 0; j < nsizecol; j++)
//		{
//			cout << p6[i][j] << " ";
//		}
//		cout << endl;
//	}
//	delete[]p5;
//	for (int i = 0; i < nsize; i++)
//	{
//		for (int j = 0; j < nsizecol; j++)
//		{
//			delete[]p6[j];
//		}
//	}
//	delete[]p6;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class boundcheckintarray
//{
//private:
//	int* arr;
//	int arrlen;
//	boundcheckintarray(const boundcheckintarray& ref)
//	{
//
//	}
//	boundcheckintarray& operator=(const boundcheckintarray& ref)
//	{
//
//	}
//public:
//	boundcheckintarray(int len):arrlen(len)
//	{
//		arr = new int[len];
//	}
//	int& operator[](int idx) // 상황에 맞추어 오버로딩을 통해서 원하는 작동을 할 수 있게끔 한다.
//	{
//		if((idx < 0) || (idx >= arrlen))
//		{
//			cout << "error" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	int operator[](int idx)const // 여기에 오버로딩을 가능하게끔 하여 위에 함수도 사용하고 때에따라 이 함수를 적용할 수 있도록 한다.
//	{
//		if ((idx < 0) || (idx >= arrlen))
//		{
//			cout << "error" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	int getarrlen() const 
//	{ return arrlen; }
//	~boundcheckintarray() { delete[]arr; }
//};
//void showalldata(const boundcheckintarray& ref)
//{
//	int len = ref.getarrlen();
//	for (int i = 0; i < len; i++)
//	{
//		cout << ref[i] << endl;
//	}
//}
//int main()
//{
//	boundcheckintarray arr(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = (i + 1) * 11;
//	}
//	showalldata(arr);
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//const int maxsize(30);
//
//class arraystack
//{
//private:
//	
//	int top;
//	int arr[maxsize];
//public:
//	arraystack():top(-1)
//	{
//	}
//	~arraystack()
//	{
//	}
//	bool empty()
//	{
//		return (top == -1);
//	}
//	bool full()
//	{
//		return (top == maxsize-1);
//	}
//	void push(int a)
//	{
//		arr[++top] = a;
//	}
//	int pop()
//	{
//		if (empty())
//		{
//			throw "empty";
//		}
//		else 
//			return arr[top--];
//	}
//	int peep()
//	{
//		return arr[top];
//	}
//	void display()
//	{
//		for (int i = 0; i <= top; i++)
//		{
//			cout << arr[i] << endl;
//		}
//	}
//	int size()
//	{
//		return top+1;
//	}
//};
//bool check_matching(const string& ref)
//{
//	arraystack arr1;
//	for (int i = 0; i < ref.size(); i++)
//	{
//		char ch = ref[i];
//		if ('(' == ch || '[' == ch || '{' == ch)
//		{
//			arr1.push(ch); // 해당되는 기호면 일단 저장
//		}
//		else if (')' == ch || ']' == ch || '}' == ch) //위에 해당안되고 여기에도 해당안되면 그냥 계속진행
//		{
//			if (arr1.empty()) // 만약 앞에서 걸리지 않고 앞에가 비어있으면 잘못 된거임
//			{
//				cout << "wrong" << endl;
//				return false; // 종료
//			}
//			else // 뒤에거가 발견됐는데 앞에뭔가가 있으면 어떻게든 하나는 걸린거
//			{
//				int opench = arr1.pop();// 삭제하고 확인
//				if ((ch == '[' && opench != ']') || (ch == '{' && opench != '}') || (ch == '[' && opench != ']')) //지우긴 할건데 만약 일치하지 않으면 false
//					return false;
//			}
//		}
//	}
//	return arr1.empty();
//}
//int main()
//{
//	if (check_matching("(ihave a{good})"))
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	return 0;
//}
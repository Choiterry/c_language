//#include <iostream>
//using namespace std;
//class point
//{
//private:
//    int xpos, ypos;
//public:
//    point(int x, int y) : xpos(x), ypos(y)
//    {
//    }
//    void showinfo()const
//    {
//        cout << xpos << ", " << ypos << endl;
//    }
//};
//template <typename t >
//void swapdata(t& data1, t& data2)
//{
//    t tmp = data1;
//    data1 = data2;
//    data2 = tmp;
//
//}
//template <class t1>
//t1 sumarray(t1 arr[], int len)
//{
//    t1 sum = t1(0);
//    for (int i = 0; i < len; i++)
//    {
//        sum += arr[i];
//    }
//    return sum;
//}
//int main()
//{
//    point p1(2, 3);
//    point p2(5, 6);
//    swapdata(p1, p2);
//    p1.showinfo();
//    p2.showinfo();
//   
//
//    int arr[] = {1,2,3,4,5};
//    char arr1[] = { 'c','f','e' };
//    cout << sumarray(arr, 5) << endl;
//    cout << sumarray(arr1,sizeof(arr1)/sizeof(char)) << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void insertnextitem(int a[], int i)
//{
//   
//    int insertpos = i; // 초기값은 nsize로 준다
//    int newitem = a[i]; // temporary 값으로 a[insertpos-1]
//    for (; insertpos && newitem < a[insertpos - 1]; insertpos--) // insertpos가 0이 아니고 newitem이 앞에 것보다 작으면 
//    {
//        a[insertpos] = a[insertpos - 1];
//        a[insertpos - 1] = newitem;
//    }
//}
//void insertionsort(int a[], int nsize)
//{
//    for (int i = 1; i < nsize; i++)
//    {
//        insertnextitem(a, i);
//    }
//}
//int main()
//{
//    cout << "DS2023-HW1-가반-최준혁-20192647"<<"\n";
//    int nsize(5);
//
//    int *a = new int[nsize];
//
//    for (int i = 0; i < nsize; i++)
//    {
//        cin >> a[i]; // 배열에 들어갈 데이터 입력받기
//    }
//   
//    insertionsort(a, nsize);
//  
//    for (int i = 0; i < nsize; i++)
//    {
//        cout << a[i] << endl;
//    }
//    return 0;
//}

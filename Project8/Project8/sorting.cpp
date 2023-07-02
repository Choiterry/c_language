#define ARRMAX 10

#include <iostream>
using namespace std;

void swapElements(int a[], int val1, int val2)
{
    int temp = a[val2];
    a[val2] = a[val1];
    a[val1] = temp;
}
int maxSelect(int a[], int k)
{
    int maxNum = a[k];
    int maxPos = k;
    for (int i = k + 1; i < ARRMAX; i++)
    {
        if (a[i] > maxNum)
        {
            maxNum = a[i];
            maxPos = i;
        }
    }
    return maxPos;
}
int main()
{
    int arr[ARRMAX] = { 39,28,39,49,10,3,80,99,101,20 };
    int maxPos;
    for (int i = 0; i < ARRMAX - 1; i++)
    {
        maxPos = maxSelect(arr, i);
        swapElements(arr, i, maxPos);
    }

    for (int i = 0; i < ARRMAX; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';
    return 0;
}

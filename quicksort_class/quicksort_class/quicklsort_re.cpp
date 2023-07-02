#include<iostream>
#include"number.h"
using namespace std;
// quicksort는 반으로 반으로 범위를 쪼개가면서 sorting 하는것으로 complexity가 0(n log n) 형태가 된다.
// selection sort에서 파생된 형태
// 기준값 pivot을 기준으로 작은것과 큰 것으로 나누면서 쪼개간다
// 쪼개다가 결국 1개씩밖에 안 남으면 루프종료
// pivot은 중간 값으로 하는데 정렬하는게 아니라 여러 방법이 있다
// 3개를 뽑고 그중에 중간값을 pivot으로 정하기
// 큰값과 작은값을 뽑아서 더하고 반으로 나누기
// 인덱스의 가운데 값을 그냥 pivot으로 정하고 진행하기
// 맨 왼쪽거 뽑기 맨 오른쪽거 뽑기
// int 의 형을 다른형으로 변경할때 typedef를 활용 
typedef number mytype;
void swapelements(mytype* a, int lastsmall, int i) // 이건 그냥 swap
{
	mytype temp = a[lastsmall];
	a[lastsmall] = a[i];
	a[i] = temp;
}
int partition(mytype* a, int first, int last) // 또다른 array를 안쓰기 위한 partition 방법 inplacesort
// partition에 여러가지 방법이 있다. pivot값에 따라
{
	mytype pivot(a[first]); //pivot 값을 맨 앞의 인덱스의 값으로 준다
	int lastsmall(first); //lastsmall 은 무조건 first 값으로 한다. 다르게 하면 오류가 생기는 경우가 있음.
	for (int i = first + 1; i <= last; i++)
	{
		if (a[i] <= a[first])
		{
			++lastsmall; // lastsmall++과 결과는 동일
			swapelements(a, lastsmall, i); // pivot값보다 비교 값이 더 작다면 lastsmall을 한칸 높이고 작은값을 lastsmall 에 있던 값과 swap 한다.
		}
	}
	swapelements(a, first, lastsmall);
	return lastsmall; // 정렬하고 lastsmall 값을 return 해주면 그 값을 기준으로 recursive를 활용하여 반을 나누어 다시 quicksort를 진행한다.
}

void quicksort_recursive(mytype a[], int first, int last)
{
	if (first >= last)
	{
		return; //last가 first 랑 같아지는 순간은 이제 더이상 분류하지 않아도 된다
	}
	int split(partition(a, first, last)); // 다음 pivot 값을 계산하여 대입한다.
	quicksort_recursive(a, first, split - 1); // recursive 활용
	quicksort_recursive(a, split + 1, last); // recursive 활용
}

int main()
{
	cout << "DS2023-HW1-가반-최준혁-20192647" << "\n";
	mytype a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	quicksort_recursive(a, 0, 9);

	for (int i = 0; i < 10; i++)
	{
		a[i].display();
	}
	
	return 0;
}
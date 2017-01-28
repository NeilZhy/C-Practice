#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<windows.h>



int serch(int a)

{

	int left = 0, right = 9, mid;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	while (left < right&&a >= arr[left] && a <= arr[right])

	{

		if (a == arr[right])

		{

			return arr[right];

		}

		mid = (left + right) / 2;

		if (arr[mid] < a)

		{

			left = mid;

		}

		else if (arr[mid] > a)

		{

			right = mid;

		}

		else

		{

			return arr[mid];

		}



	}

	return 0;

}



int main()

{

	int a, m;

	scanf_s("%d", &a);

	m = serch(a);

	if (m)

		printf("数组中C有此数字\n");

	else

		printf("数组中无此数字\n");

	return 0;
}
//折半查找
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void exchange(int *a, int *b)
{
	int m = 0;
	m = *a;
	*a = *b;
	*b = m;
}

void BubbleSort(int *arr, int len)
{
	int i = 0, j = len - 1;
	for (; j > 0; j--)               //ÿ�αȽ�ǰ����������������Ȼ��Ѵ���Ǹ�������ţ�����һ�������������Ǹ���������������һ��λ����
	{
		for (i = 0; i < len-1; i++)
		{
			if (arr[i] >= arr[i + 1])
			{
				exchange(&arr[i], &arr[i + 1]);
			}
		}

	}
}

int main()
{
	int len = 0;
	int i = 0;
	int arr[10] = { 100, 5, 55, 9, 4, 4, 8, 1, 2, 3};
	len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,len);
	for (i = 0; i < len; i++)
		printf("%d ",arr[i]);
	printf("\n");
	system("pause");
	return 0;
}

//Bubble sort  ð��
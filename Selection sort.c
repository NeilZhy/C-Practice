#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int SelectionSort(int *arr)
{
	int i = 0, j = 0,m = 0,temp = 0;
	for (i = 4; i > 0; i--)
	{
		for (j = i-1, m = i; j >= 0; j--)    //�������ҵ�����
		{
			if (arr[j] >= arr[m])
				m = j;
		}
		temp = arr[i];                 //�Ѵ�ķ��ں����λ��
		arr[i] = arr[m];
		arr[m] = temp;
	}
	return 0;
}

int main()
{
	int i = 0;
	int arr[5] = {9,8,7,6,9};
	printf("before:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	SelectionSort(arr);
	printf("after:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//ѡ������
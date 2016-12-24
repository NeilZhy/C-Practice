#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int InsertionSort(int *arr,int len)
{
	int i = 0, j = 0, m = 0;
	int temp = 0;
	for (i = 1; i < 5; i++)                     //每次从数组中找到一个数据，作为被插入数据
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[i] <= arr[j]&&arr[i] >= arr[j - 1])    //找到被插入数据的位置
			{
				temp = arr[i];
				for (m = i - 1; m >= j; m--)            //将被插位置后面的所有数据往后移动
				{
					arr[m + 1] = arr[m];
				}
				arr[j] = temp;
				break;
			}
		}
	}
	return 0;
}

int main()
{
	int i = 0;
	int arr[5] = {9,5,7,6,9};
	printf("原始数据：\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	InsertionSort(arr,5);
	printf("排序数据：\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//插入排序

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void SelectSort(int *q,int a)
{
	int *p = q;
	int i = 0, j = 0;
	int temp = 0;
	for (i = a-1; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			if (*p <= q[j])
				p = q + j;
		}
		temp = *p;
		*p = q[i];
		q[i] = temp;
		p = p - 1;
	}
}

int main()
{
	int i = 0;
	int arr[10] = {1,5,7,6,3,2,4,8,9,0};
	SelectSort(arr,10);
	for (i = 0; i < 10; i++)
		printf("%d",arr[i]);
	printf("\n");
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int combination(int m, int n)
{
	int sum1 = 1, sum2 = 1, sum = 1, i = 0;
	for (i = 0; i <n; i++, m--)
	{
		sum1 = sum1*m;
	}
	for (; n >= 1; n--)
	{
		sum2 = sum2*n;
	}
	sum = sum1 / sum2;
	return sum;
}

int main()
{
	int i = 0, j = 0, line = 0;
	printf("请输入行数：\n");
	scanf("%d", &line);
	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= line - i; j++)
			printf("   ");
		for (j = 1; j <= i; j++)
			printf("%d     ", combination(i - 1, j - 1));
		printf("\n");
	}
	return 0;
}

//在屏幕上打印杨辉三角。


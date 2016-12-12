#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int Fib(int num)
{
	int a = 0;
	int b = 1;
	int sum = 0;
	int i = 0;
	if (1 == num)
		return 1;
	for (i = 0; i < num-1; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	return sum;
}

int main()
{
	int num = 0;
	printf("Please enter the number you need to calculate Fibonacci\n");
	scanf("%d",&num);
	printf("%d\n",Fib(num));
	system("pause");
	return 0;
}

//求斐波那契数，函数实现
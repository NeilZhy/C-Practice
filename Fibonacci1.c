#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

extern int a = 0;

int Fib(unsigned int num)
{
	
	if (num <= 2)
		return 1;
	if (3 == num)        //用递归法求斐波那契数的时候不好，应该耗费太大，用一个测试3就能求出，num==3的时候被执行了好多次
		a++;
	printf("a -> %d\n",a);
	return Fib(num - 1) + Fib(num - 2);
}

int main()
{
	unsigned int num = 0;
	printf("Please input you need to find the first of several Fibonacci numbers:\n");
	scanf("%d",&num);
	printf("Fibonacci ->　%d\n",Fib(num));
	system("pause");
	return 0;
}

//斐波那契数，递归实现
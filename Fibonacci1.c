#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

extern int a = 0;

int Fib(unsigned int num)
{
	
	if (num <= 2)
		return 1;
	if (3 == num)        //�õݹ鷨��쳲���������ʱ�򲻺ã�Ӧ�úķ�̫����һ������3���������num==3��ʱ��ִ���˺ö��
		a++;
	printf("a -> %d\n",a);
	return Fib(num - 1) + Fib(num - 2);
}

int main()
{
	unsigned int num = 0;
	printf("Please input you need to find the first of several Fibonacci numbers:\n");
	scanf("%d",&num);
	printf("Fibonacci ->��%d\n",Fib(num));
	system("pause");
	return 0;
}

//쳲����������ݹ�ʵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int fun(int a, int b)
{
	int c = 0xcccccccc;
	return c;
}

int main()
{
	int a = 0xaaaaaaaa;                 //这里赋值为0xaaaaaaaa的原因是，在一会的查看汇编时候，
	                                    //显示的都是16进制，这里这样赋值为了我们容易观察
	int b = 0xbbbbbbbb;
	int ret = fun(a, b);
	printf("You shoud running here!\n");
	system("pause");
	return 0;
}
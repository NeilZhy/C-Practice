#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void Compare(int *a, int *b)    //*  此处代表的是地址的意思，和下面做比较
{
	*a = *b;                    //*  此处是解引用的意思，即拿出*a得内容
	*b = 0;
}

int main()
{
	int a = 1, b = 2;
	Compare(&a,&b);
	printf("%d,%d\n",a,b);
	system("pause");
	return 0;
}

//基本的传址改变内容的函数
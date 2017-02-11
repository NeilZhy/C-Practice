#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void test()
{
	//int num = 0;                //按这种方式定义num时，每次调用这个函数的时候，num都会被重新定义，所以输出的结果是是个1
	static int num = 0;           //这里我把num定义成静态的，它就是在内存中被唯一创建，输出的结果是1--10
	num++;
	printf("%d  ",num);
}

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	printf("\n");
	//printf("%d",num);     //在函数test中用static定义的num只是改变了num的声明周期，即是num在开始被创建之后一直存在，
	                        //直到整个程序结束，但是需要注意的一点是，num的作用域不变
	system("pause");
	return 0;
}
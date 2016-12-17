#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdarg.h>

int VariableAverage(int val, ...)   //传入的第一个参数的类型是确定的
{
	va_list arg;                      //定义一个容器，用于存储存入的所有参数
	va_start(arg, val);                //将参数放入到容器中去，第一个参数是容器名，第二个参数是刚刚传入的可变参数的第一个数
	int i = 0;
	int sum = 0;
	for (i = 0; i < val; i++)
	{
		sum += va_arg(arg, int);     //提取内容，第一个参数是容器名，第二个参数是类型名（以后的参数提取根据类型名来确定）
		printf("%d\n",sum);          //可以把它想成一个指针，每次执行一次之后，就会往后接着提取下一个参数，第一个传入的确定参数并不提取
	}
	
	va_end(arg);                    //关闭容器
	return sum;
}

int main()
{
	printf("%d\n", VariableAverage(2,2,4));
	system("pause");
	return 0;
}


//用可变参数列表的形式，计算和
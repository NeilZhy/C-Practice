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
	int a = 0xaaaaaaaa;                 //���︳ֵΪ0xaaaaaaaa��ԭ���ǣ���һ��Ĳ鿴���ʱ��
	                                    //��ʾ�Ķ���16���ƣ�����������ֵΪ���������׹۲�
	int b = 0xbbbbbbbb;
	int ret = fun(a, b);
	printf("You shoud running here!\n");
	system("pause");
	return 0;
}
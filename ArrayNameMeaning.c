#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	//ʹ��������ʱ������int arr[10];����sizeof(arr),��&arr������ľ���ʾ������Ԫ�صĵ�ַ
	char arr[] = "123456";
	double darr[] = {3.14,5.26,6.31};  
	printf("sizeof(arr)   %d\n", sizeof(arr));     //   7
	printf("sizeof(arr + 1)   %d\n", sizeof(arr + 0));   //4  ��ʱarr�����һ����ַ�����������ֽڴ�С��4
	printf("sizeof(darr)    %d\n", sizeof(darr));     //24   ������double�Ĵ�С��8���ֽڣ�sizeof���ԵĴ�С����8����������Ľ����24
	printf("sizeof(darr + 1)    %d\n", sizeof(darr + 1));   //����darrҲ��������Ԫ�صĵ�ַ�����Խ����4
	printf("%lf\n",*(darr + 1));    //Ϊ����֤�ǲ���������Ԫ�صĵ�ַ������Ľ����5.26
	system("pause");
	return 0;
}
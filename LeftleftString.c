#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

char *leftstring(char *str, int num,int len)
{
	char arr[10];
	char *p = str,*q = str;
	int i = 0;
	for (i = 0; i < num; i++)         //����Ҫ�������ַ��ȱ�������
	{
		arr[i] = *p++;
	}
	p = str;
	p += num;                         //��pָ����Ҫǰ�Ƶ��ַ�
	for (i = num; i < len-1; i++)   //��ǰ�Ʋ�����i���ƴ���
	{
		*str++ = *p++;
	}
	for (i = 0; i < num; i++)       //��ȡ�������ַ������ȥ
	{
		*str++ = arr[i];
	}
	return q;
}

int main()
{
	char arr[] = "hello xu";
	int len = sizeof(arr) / sizeof(arr[0]);
	leftstring(arr, 2, len);
	printf("%s\n",arr);
	system("pause");
	return 0;
}

//�ַ�����
//Problem description
//To achieve a function that can be left in the K characters in the string.
//AABCD left a character to get ABCDA
//AABCD l two characters get BCDAA
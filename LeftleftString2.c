#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<windows.h>
#include<string.h>

//ͨ����ƴ�ӽ����������Ѻ�ԭ�ַ���ͬ�����ݵ��ַ���ƴ����ԭ�ַ����ĺ���

char *leftstring(char *str, int num, int len)
{
	assert(str);
	int i = 0;
	char *string = str;
	char *arr = (char *)malloc(2*len + 1);    //���ٿռ�ʹ2*len+1������+1λΪ�˸���β������һ��'\0'�Ŀռ�
	num = num % len;
	strcpy(arr,string);
	strcat(arr,string);
	for (i = 0; i < len; i++)
	{
		*string++ = arr[i+num];
	}
	return str;
}

int main()
{
	char arr[] = "abcd1234";
	int len = (sizeof(arr) / sizeof(arr[0])) - 1;
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
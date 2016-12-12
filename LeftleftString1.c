#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<windows.h>

//ͨ���û�����������������

void swap(char *p, char *q)     //ǰ���ַ�����
{
	assert(p);
	assert(q);
	*p ^= *q;
	*q ^= *p;
	*p ^= *q;
}

char *ReverseOrder(char *left, char *right)
{
	assert(left);
	assert(right);
	char *arr = left;
	while (arr < right)
	{
		swap(arr, right);
		arr++, right--;
	}
	return left;
}

char *leftstring(char *str, int num,int len)   //ͨ��ǰ���ַ��滻ʵ������
{
	assert(str);
	char *string = str;                       //������һЩ��ַ������ȣ�����Ҫ�Ե�ַ���ݽ��иı䣬����Ҫ�����׵�ַʱ����
	                                          //���ⶨ��һ���µ���ʱ������������ڸõ�ַ��Ȼ��ͨ������ʱ����������ַ����
	                                          //ͬʱԭ��ַ�����ı�
	num = num % len;                          //����һ��ȡ��Ĳ����������Ҫ�����ĳ��ȳ����ַ����ĳ���
	ReverseOrder(string, string + num - 1);          //���û�ǰһ���֣����û���һ���֣�Ȼ�������û�
	ReverseOrder(string + num, string + len - 1);
	ReverseOrder(string, string + len - 1);
	
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
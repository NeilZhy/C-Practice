#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<windows.h>

void swap(char *p, char *q)     //Ç°ºó×Ö·û»¥»»
{
	*p ^= *q;
	*q ^= *p;
	*p ^= *q;
}

char *ReverseOrder(char *arr,int len)
{
	assert(arr);
	char *p = arr;
	char *q = arr + len - 1;
	while (p < q)
	{
		swap(p,q);
		p++, q--;
	}
	return arr;
}

int main()
{
	char arr[] = "abcdefg";
	int len = 0;
	len = (sizeof(arr) / sizeof(arr[0])) - 1;
	ReverseOrder(arr,len);
	printf("%s\n",arr);
	system("pause");
	return 0;
}

//The realization of a flip function string(a string content in reverse order)
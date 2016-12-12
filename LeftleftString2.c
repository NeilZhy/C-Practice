#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<windows.h>
#include<string.h>

//通过在拼接进行左旋，把和原字符串同样内容的字符串拼接在原字符串的后面

char *leftstring(char *str, int num, int len)
{
	assert(str);
	int i = 0;
	char *string = str;
	char *arr = (char *)malloc(2*len + 1);    //开辟空间使2*len+1，其中+1位为了给结尾处留有一个'\0'的空间
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

//字符左旋
//Problem description
//To achieve a function that can be left in the K characters in the string.
//AABCD left a character to get ABCDA
//AABCD l two characters get BCDAA
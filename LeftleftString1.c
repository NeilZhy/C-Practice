#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<windows.h>

//通过置换函数进行左旋操作

void swap(char *p, char *q)     //前后字符互换
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

char *leftstring(char *str, int num,int len)   //通过前后字符替换实现左旋
{
	assert(str);
	char *string = str;                       //当传入一些地址（数组等），需要对地址内容进行改变，且需要返回首地址时，就
	                                          //另外定义一个新的临时变量，令其等于该地址，然后通过该临时变量操作地址内容
	                                          //同时原地址还不改变
	num = num % len;                          //加上一个取余的操作，如果需要左旋的长度超过字符串的长度
	ReverseOrder(string, string + num - 1);          //先置换前一部分，再置换后一部分，然后整体置换
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

//字符左旋
//Problem description
//To achieve a function that can be left in the K characters in the string.
//AABCD left a character to get ABCDA
//AABCD l two characters get BCDAA
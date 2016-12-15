#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int Equal(char *p, char *q)           //判断字符串是否相等函数
{
	while (*p != '\0')
	{
		if (*p++ != *q++)
			return 0;
	}
	return 1;
}

char *leftstring(char *str, int num, int len)  //左旋字符串函数
{
	char arr[10];
	char *p = str, *q = str;
	int i = 0;
	for (i = 0; i < num; i++)         //把需要左旋的字符先保存起来
	{
		arr[i] = *p++;
	}
	p = str;
	p += num;                         //用p指向需要前移的字符
	for (i = num; i < len - 1; i++)   //做前移操作，i控制次数
	{
		*str++ = *p++;
	}
	for (i = 0; i < num; i++)       //把取出来的字符保存进去
	{
		*str++ = arr[i];
	}
	return q;
}

int JudgeLeft(char *OriString, char *LeftString, int ori, int left)
{
	char *p = OriString;
	char m[20] = {'\0'};
	int i = 0;
	if (ori != left)                //如果字符串的长度不相等，直接返回0
	{
		return 0;
	}

	for (i = 0; i < ori -1;i++)     //将传入的原始字符串赋值给一个新开辟的数组，这样在操作的时候不改变原字符串的内容
	{
		m[i] = *p++;
	}
	for (i = 1; i < ori; i++)   //通过左旋函数，依次左旋1开始到结束位置，看看是否有相等的字符串
	{
		if (Equal(leftstring(m, 1, ori), LeftString) == 1)
		{
			return 1;
		}
	}
	return 0;

}

int main()
{
	char OriString[] = "AABCD";
	char LeftString[] = "AABCD";
	int ori = 0;
	int left = 0;
	ori = sizeof(OriString) / sizeof(OriString[0]);
	left = sizeof(LeftString) / sizeof(LeftString[0]);
	printf("%d\n", JudgeLeft(OriString, LeftString,ori,left));
	system("pause");
	return 0;
}

//Problem description:判断左旋
//To determine whether a string is a string after the rotation of the string.
//For example : given S1 = AABCD and S2 = BCDAA, return 1, given S1 = ABCD and S2 = ACBD, return 0
//AABCD left a character to get ABCDA
//AABCD l two characters get BCDAA
//AABCD right hand one character gets DAABC
//AABCD right hand two characters get CDAAB

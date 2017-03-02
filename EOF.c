#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	system("pause");
	return 0;
}
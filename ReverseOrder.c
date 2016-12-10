#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

char *ReverseOrder(char *arr)
{
	char *p = arr;
	char str[30];
	int i = 0;
	while (*p != '\0')
	{
		str[i++] = *p++;
	}
	i--;
	for (; i >= 0; i--)
	{
		*arr = str[i];
		arr++;
	}
	return arr;
}

int main()
{
	char arr[] = "abcdefg";
	ReverseOrder(arr);
	printf("%s\n",arr);
	system("pause");
	return 0;
}

//The realization of a flip function string(a string content in reverse order)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

char *mystrstr(const char *str, char *p)
{
	char *q = p;
	const char *m = str;
	while ((*str++) != '\0')
	{
		m = str;
		while ((*p++) == (*m++))
		{
			if (*p == '\0')
			{
				return str;
			}
		}
		p = q;
	}
	return NULL;
}


int main()
{
	char *point = NULL;
	char string[] = "hello myxu";
	char arr[] = "ll";
	point = mystrstr(string, arr);
	printf("%s",point);
	system("pause");
	return 0;
}

//Analog implementation of strstr function
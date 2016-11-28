#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

int My_strlen(char a[])
{
	int i = 0;
	while (1)
	{
		if (NULL != a[i])
			i++;
		else
			return i;
	}
}

int main()
{
	char str[] = "he";
	printf("%s's length is %d\n",str, My_strlen(str));
	system("pause");
	return 0;
}
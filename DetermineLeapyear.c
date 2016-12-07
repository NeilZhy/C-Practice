#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int year = 1000;
	int a = 1;
	int mark = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			mark++;
			printf("%d\t", year);
			if (mark % 10 == 0)
				printf("\n");
		}
	}
	getchar();
	return 0;
}
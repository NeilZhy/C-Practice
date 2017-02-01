#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 1, b = 2, c;

	printf("a=%d b=%d", a, b);

	c = a;

	a = b;

	b = c;

	printf("\na=%d b=%d", a, b);

	getchar();

	return 0;

}
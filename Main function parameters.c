#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include<windows.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[3]);
	if (strcmp(argv[1], "-a") == 0)
	{
		sum = num1 + num2;
	}
	else if (strcmp(argv[1], "-s") == 0)
	{
		sum = num1 - num2;
	}
	else if (strcmp(argv[1], "-m") == 0)
	{
		sum = num1 * num2;
	}
	else if (strcmp(argv[1], "-d") == 0)
	{
		sum = num1 / num2;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
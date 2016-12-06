#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

int main()
{
	int num = 0;
	printf("Please enter your existing number of soda £º\n");
	scanf("%d",&num);
	num = num * 2 - 1;
	printf("You can drink soda number is altogether %d\n",num);
	system("pause");
	return 0;
}
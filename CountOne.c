#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	int n = 4;
	int count = 0;
	while (0 != n)
	{
		count++;
		n = n&(n - 1);
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}
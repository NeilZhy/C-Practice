#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
		int a, i;
		scanf("%d", &a);
		for (i = 0; i < 32; i++)
		{
			if (0 == (a << i & 2147483648))
			{
		    	printf("0");
			}
			if (0 != (a << i & 2147483648))
			{
				printf("1");
			}
		}
		printf("\n");
	system("pause");
	return 0;
}

//打印二进制位
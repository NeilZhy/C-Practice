#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	int a, m, n;
	scanf("%d", &a);
	if (0 == a)
		printf("0\n");
	while (0 != a)
	{
		m = a % 10;
		a = a / 10;
		printf("%d\n", m);
	}
	system("pause");
	return 0;
}

//打印每个数
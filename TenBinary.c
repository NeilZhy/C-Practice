#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	int m, i, a = 0, mark[8];
	scanf_s("%d", &m);
	while (m != 1)
	{
		i = m % 2;
		m = m / 2;
		mark[a] = i;
		a++;
	}
	mark[a] = 1;
	for (; a >= 0; a--)
	{
	printf("%d", mark[a]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//Turn the binary decimal
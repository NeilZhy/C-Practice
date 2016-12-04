#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	int a = 0, b = 0, i = 0, sum = 0;
	scanf("%d%d", &a, &b);
	a = a^b;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((a >> i) & 1))
			sum++;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

//Two int(32 - bit) integers m and n binary expression, how many bits are different(bit) ?
//Input example :
//1999, 2299,
//Output example : 7
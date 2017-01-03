#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0, m = 0, a = 0, b = 0, c = 0;
	for (i = 100; i <= 999; i++)
	{
		a = i % 10;
		m = i / 10;
		b = m % 10;
		c = m / 10;
		if (i == a*a*a + b*b*b + c*c*c)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

//求出0～999之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

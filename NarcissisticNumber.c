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

//���0��999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������

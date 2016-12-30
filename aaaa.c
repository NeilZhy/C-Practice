#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0, time = 0, num = 0, addend1 = 0, addend2 = 0, sum = 0;
	printf("请分别输入你需要循环的项数和数字：\n");
	scanf("%d%d", &time, &num);
	for (i = 0; i < time; i++)
	{
		addend1 = num * pow(10, i);
		addend2 += addend1;
		sum += addend2;
	}
	printf("计算结果为: %d\n", sum);
	return 0;
}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222


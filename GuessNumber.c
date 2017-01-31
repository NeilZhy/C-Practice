#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<windows.h>

#include<stdlib.h>

#include<time.h>



int main()

{

	int i, m = 0;

	srand((unsigned)time(NULL));

	i = rand() % 101;

	printf("猜字游戏，请输入1-100的一个数\n");



	while (i != m)

	{

		scanf_s("%d", &m);

		if (m > i)

		{

			printf("你的数大了，请重新输入\n");

		}

		if (m < i)

		{

			printf("你的数小了，请重新输入\n");

		}

	}

	printf("恭喜你，输入正确，随机数为%d\n", m);



	return 0;
}
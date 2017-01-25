#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#define M 0.00000000001
int main()
{
	//2.写程序求一元二次方程的解





	

			double a, b, c, disc, res1, res2;

			printf("请输入一元二次方程各项的系数：\n");

			scanf_s("%lf%lf%lf", &a, &b, &c);

			if (a >= (-M) && a <= M)

			{

				printf("您输入的不是一元二次方程，程序退出\n");

			}

			else

			{

				disc = b*b - 4 * a*c;

				if (disc > 0)

				{

					res1 = (-b + sqrt(disc)) / (2 * a);

					res2 = (-b - sqrt(disc)) / (2 * a);

					printf("此方程的两个根分别为 res1 = %lf res2 = %lf \n", res1, res2);

				}

				if (disc >= (-M) && disc <= (M))

				{

					res1 = -b / (2 * a);

					res2 = res1;

					printf("此方程有两个重根 res1 = res2 = %lf\n", res1);

				}

				if (disc < 0)

				{

					printf("此方程无解！！！\n");

				}

			}
	system("pause");
	return 0;
}
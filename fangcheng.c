#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#define M 0.00000000001
int main()
{
	//2.д������һԪ���η��̵Ľ�





	

			double a, b, c, disc, res1, res2;

			printf("������һԪ���η��̸����ϵ����\n");

			scanf_s("%lf%lf%lf", &a, &b, &c);

			if (a >= (-M) && a <= M)

			{

				printf("������Ĳ���һԪ���η��̣������˳�\n");

			}

			else

			{

				disc = b*b - 4 * a*c;

				if (disc > 0)

				{

					res1 = (-b + sqrt(disc)) / (2 * a);

					res2 = (-b - sqrt(disc)) / (2 * a);

					printf("�˷��̵��������ֱ�Ϊ res1 = %lf res2 = %lf \n", res1, res2);

				}

				if (disc >= (-M) && disc <= (M))

				{

					res1 = -b / (2 * a);

					res2 = res1;

					printf("�˷����������ظ� res1 = res2 = %lf\n", res1);

				}

				if (disc < 0)

				{

					printf("�˷����޽⣡����\n");

				}

			}
	system("pause");
	return 0;
}
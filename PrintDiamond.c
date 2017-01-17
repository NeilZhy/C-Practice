#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//¥Ú”°¡‚–Œ
int main()
{


	int i, m, n;

	for (i = 1; i <= 7; i++)

	{

		for (m = 1; m <= 8 - i; m++)

			printf(" ");

		for (n = 1; n <= 2 * i - 1; n++)

			printf("*");

		printf("\n");

	}

	for (i = 6; i >= 1; i--)

	{

		for (m = 1; m <= 8 - i; m++)

			printf(" ");

		for (n = 1; n <= 2 * i - 1; n++)

			printf("*");

		printf("\n");

	}
	system("pause");
	return 0;
}
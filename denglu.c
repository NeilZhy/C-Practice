#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdio.h>

#include<string.h>



int main()

{

	int i;

	char arr1[7] = { "123456" };

	char arr2[7];

	for (i = 0; i < 3; i++)

	{

		gets_s(arr2, 7);

		if ((strcmp(arr1, arr2)) == 0)

		{

			printf("密码正确，登录成功\n");

			break;

		}

		else

		{

			if (i == 2)

			{

				printf("三次输入有误，结束登录\n");

			}



			else

			{

				printf("密码错误，请重新输入\n");

			}

		}

	}



	return 0;

}
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

			printf("������ȷ����¼�ɹ�\n");

			break;

		}

		else

		{

			if (i == 2)

			{

				printf("�����������󣬽�����¼\n");

			}



			else

			{

				printf("�����������������\n");

			}

		}

	}



	return 0;

}
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

	printf("������Ϸ��������1-100��һ����\n");



	while (i != m)

	{

		scanf_s("%d", &m);

		if (m > i)

		{

			printf("��������ˣ�����������\n");

		}

		if (m < i)

		{

			printf("�����С�ˣ�����������\n");

		}

	}

	printf("��ϲ�㣬������ȷ�������Ϊ%d\n", m);



	return 0;
}
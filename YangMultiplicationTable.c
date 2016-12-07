#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	int row = 1;
	int line = 0;
	for (row = 1; row <= 9; row++)
	{
		for (line = 1; line <= row; line++)
		{
			printf("%d*%d=%d", row, line, row*line);
			printf("\t");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
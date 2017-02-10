#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int count_one_bits(int value)
{
	int ones;
	for (ones = 0; value != 0; value >>= 1)
	{
		if ((value & 1) != 0)
			ones++;
	}
	return ones;
}

int main()
{
	int value = 5;
	printf("%d", count_one_bits(value));
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int Factorial(unsigned int num)
{
	unsigned int sum = 1;
	while (num > 1)
	{
		sum *= num--;
	}
	return sum;
}

int main()
{
	unsigned int num = 0;
	printf("Please enter the order you need to calculate the multiplier\n");
	scanf("%u",&num);
	printf("%u Factorial is %u\n",num,Factorial(num));
	system("pause");
	return 0;
}

//½×³Ë
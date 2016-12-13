#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

unsigned int Factorial(unsigned int num)
{
	if (1 == num)
		return 1;
	return num * Factorial(num -1);
}

int main()
{
	unsigned int number = 0;
	printf("Please enter the order you need to seek the multiplier\n");
	scanf("%u",&number);
	printf("%u\n", Factorial(number));
	system("pause");
	return 0;
}

//ÓÃµİ¹éÊµÏÖ½×³Ë
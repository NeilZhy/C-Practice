#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
#include<windows.h>

unsigned int  reverse_bit(unsigned int value)
{
	unsigned int b = 0, sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((value >> i) & 1))
		{
			b = pow(2, (31 - i));
			sum += b;
		}
	}
	return sum;
}

int main()
{
	unsigned int a = 0,b = 0,sum = 0;
	int i = 0;
	scanf("%d",&a);
	printf("%u\n", reverse_bit(a));
	system("pause");
	return 0;
}

//Write a function :Unsigned int reverse_bit(unsigned int value);
//The function return value of the value of the binary bit pattern from left to right in turn.
//Such as :
//On a 32 - bit machine 25 members this value contains the following :
//00000000000000000000000000011001
//In turn : (2550136832)
//10011000000000000000000000000000
//Application results back :
//2550136832
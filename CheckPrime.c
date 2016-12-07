#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<windows.h>

int main()

{
	int num = 100;
	int div = 2;
	int a = 0;
	for (num = 101; num <= 200; num = num + 2)//Circulating in the even number is not a prime number, add 2 at a time
	{
		for (div = 2; div <= sqrt(num); div++)//N a number of factors can't more than n, but if we know after a factor a number n, another factor b (b = n/a) also knew, therefore enumerate a number n only when the factor of enumeration from 2 to SQRT (n)
		{
			if (num%div == 0)
				break;
		}
		if (div > sqrt(num))
		{
			a++;
			printf("%d\t", num);
			if (a % 10 == 0)
				printf("\n");
		}
	}
	system("pause");
	return 0;

}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	int num = 0,i  =0,j = 0;
	int arr[32] = {0};
	printf("Please enter a number:\n");
	scanf("%d",&num);
	for (i = 0,j = 30; i <= 30,j >= 1; i+=2,j-=2)   //Get odd bits placed on top of an even number
	{
		arr[j] = (num >> i) & 1;
	}
	for (i = 1, j = 31; i <= 31, j >= 0; i += 2, j -= 2)  //Get an even number on the odd digit
	{
		arr[j] = (num >> i) & 1;
	}
	printf("After odd and even substitution, the binary sequence is:\n");
	for (i = 0; i < 32; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//Write a macro to exchange a number of odd bits and even bits.
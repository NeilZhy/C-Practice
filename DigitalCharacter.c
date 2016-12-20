#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void DigitalCharacter(int unsigned num)
{
	int unsigned q = num / 10;         //一开始的时候我直接写的是num /= 10,这样的话就没有办法取到最后一个数字了，通常情况下引入一个变量
	if (q != 0)
	{
		DigitalCharacter(q);
	}
	printf("%u\t",num % 10);
}

int main()
{
	int unsigned num = 0;
	printf("Please enter a non negative integer\n");
	scanf("%d",&num);
	DigitalCharacter(num);
	printf("\n");
	system("pause");
	return 0;
}

//print out each digit of a number
//打印十进制数中的每一个数

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex liming = MALE;    //编译可以通过，且结果为0，枚举中从0开始，此次往大加1
	liming = 4;               //这种赋值可以可以通过
	printf("%d",liming);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int DrinkSum(int bottle)
{
	int areadybottle = bottle;
	int bottlenum = bottle;
	while(bottlenum >= 2)
	{
		areadybottle += bottlenum / 2;
		bottlenum = bottlenum / 2 + bottlenum % 2;
	}
	return areadybottle;
}

int main()
{
	int bottle = 0;
	int sum = 0;
	printf("Please enter the number of bottles:\n");
	scanf("%d",&bottle);
	sum = DrinkSum(bottle);
	printf("The total number of bottles to be able to drink is %d.\n",sum);
	system("pause");
	return 0;
}

//A bottle of soda for 1 yuan, two empty bottles can be the replacement of a bottle of soda,
//Now there are 20 yuan, up to drink a number of bottles of soda. (programming)
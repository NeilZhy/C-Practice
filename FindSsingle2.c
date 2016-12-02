#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

int main()
{
	int arr[9] = {1,5,3,2,4,3,1,2,4};
	int flag = arr[0];
	int i = 1;
	for (i = 1; i < 9; i++)
	{
		flag ^= arr[i];
	}
	printf("The single number is %d\n",flag);
	system("pause");
	return 0;
}

//Problem description
//A set of data is only a figure appeared in one time.
//All other Numbers are in pairs.Please find out this number. (using the operation)
//Such as :
//Data : 1 3 5 7 1 3 5 it
//	Set of data, only seven appeared again.
//Structure : find number is : 7.
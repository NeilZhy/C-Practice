#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

void TwoSingle(int *p, int len)
{
	int *q = p;
	int num = 0, num1 = 0, num2 = 0;
	int i = 0,j = 0;
	for (i = 0; i < len; i++)    //所有数字异或之后，得到那两个不是成对出现的数字，因为异或为1，所以当异或到相同数字时就消去了
	{
		num ^= *q++;
	}
	for (i = 0; i < 32; i++)     //取出结果中二进制低位开始第一个1，因为是异或的结果，所以这两个数一定在该位置上不相同，即一个是1，一个是0
		                         // 那么原数组中的数，被分成两类，一类是在该位为1，一类是为0，且出现两次的数字被分在了一组中
	{
		if (1 == ((num >> i) & 1))
			break;
	}
	q = p;
	for (j = 0; j < len; j++)
	{
		if (1 == (((*q) >> i) & 1))   //把在该位为1的与num1相异或，把在该位为0的与num2相异或
		{
			num1 ^= *q;
		}
		else
		{
			num2 ^= *q;
		}
		q++;
	}
	printf("%d %d\n",num1,num2);

	return;
}

int main()
{
	int len = 0;
	int arr[] = {1,2,3,5,6,1,3,2};
	len = sizeof(arr) / sizeof(arr[0]);
	TwoSingle(arr, len);
	
	system("pause");
	return 0;
}

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//找出这两个数字，编程实现。


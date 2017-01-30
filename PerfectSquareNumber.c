#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
	long int num = 0,x = 0,y = 0;
	for (num = 1; num <= 100000; num++)
	{
		x = sqrt(num + 100);            //这里这样判断的原因是，x是长整型，对其进行开方之后只保留了整数部分，所以如果他不是
		                                //完全平方数的话，这样在下面的判断语句中，对其平方只后就不会是原来的数字了
		y = sqrt(num + 268);
		if ((x*x == num + 100) && (y*y == num + 268))
			printf("The perfect Square Number is %ld\n",num);
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
	char arrc[] = "12345";
	//char c;
	int num = 0;
	int i = sizeof(arrc)-1;
	int j = 0;
	for (; i > 0; i--)
	{
		num += (arrc[i - 1] - '0')*pow(10,j);   //符号到数字是-，数字到符号是+
		                                       //记住一个符号0减去符号0，结果就是48-48=0，所以从符号到数字应该是减去符号0
		j++;
	}
	printf("%d\n",num);
	system("pause");
	return 0;
}
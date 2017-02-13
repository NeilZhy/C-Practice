#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	//使用数组名时，比如int arr[10];除了sizeof(arr),和&arr，其余的均表示数组首元素的地址
	char arr[] = "123456";
	double darr[] = {3.14,5.26,6.31};  
	printf("sizeof(arr)   %d\n", sizeof(arr));     //   7
	printf("sizeof(arr + 1)   %d\n", sizeof(arr + 0));   //4  此时arr变成了一个地址，所以它的字节大小是4
	printf("sizeof(darr)    %d\n", sizeof(darr));     //24   这里面double的大小是8个字节，sizeof测试的大小就是8，所以这里的结果是24
	printf("sizeof(darr + 1)    %d\n", sizeof(darr + 1));   //这里darr也是数组首元素的地址，所以结果是4
	printf("%lf\n",*(darr + 1));    //为了验证是不是数组首元素的地址，这里的结果是5.26
	system("pause");
	return 0;
}
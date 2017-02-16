#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	union tag{
		int a;
		char c;
	}tag;
	tag.a = 1;
	printf("%c",tag.c);    //因为在联合体中，a和c使用共同的存储空间，且他们的起始位置一致，所以当给赋值1之后，
	                       //如果是小端存储则这个1被放在了高地址，即他们的共同内存中的后面的位置，
	                       //这样使用%c打印的时候，是从开始的地方算起，所以就得到一个未知的量
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//默认对齐数是8
//对齐数是自身和默认中的较小值
//补充在前
//整体的对齐数是最大对齐数的整数倍

//c  1个字节   b的对齐数是4，所以补充3，然后在开辟4
//整体的对齐数最大就是4，所以整个结构体的大小是8,即struct MyStruct的大小是8

int main()
{
	int len = 0;
	struct MyStruct
	{
		char c;
		int b;
	};
	struct MyStruct2
	{
		char c;
		int b;
		short a;    //这里之前已经是8了，然后a的对齐数是2，所以是2的倍数，然后直接开辟2个字节，
		            //现在是10个字节，最后整体对齐，整体对齐是最大对齐数4的整数倍，所以结果是12
		            //这里我以为vs的默认对齐数是8，但是这个8并没有被用作对齐数，所以最大对齐数是4
	};
	struct MyStruct3
	{
		char c;
		int b;
		struct MyStruct2 d;
		short a;
	};            //c是1，然后b的时候，因为自身是4，默认是8，所以对齐数是4，所以补充3个空字节之后再开辟4，这个时候是8
	              //然后d，d的大小是12，默认是8，所以对齐数是8，前面已经对齐，所以直接加12，这个时候变成了20
	              //然后a，a和默认比较对齐数是2,20已经是2的倍数，所以直接加2，这个时候是22，然后整体对齐，
	              //因为上面的最大对齐数是8，所以最后的结果是24

	len = sizeof(struct MyStruct3);
	printf("%u\n", len);
	system("pause");
	return 0;
}
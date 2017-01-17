#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int main()
{
	int a = 0, i;
	//scanf("%d",&a);
	for (i = 1; i <= 100; i++)
	{
		if ((0 == i % 9) || (9 == i / 10))
			a++;
	}
	printf("%d\n", a + 1);
	system("pause");
	return 0;
}

//¾ÅµÄ¸öÊý
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void Compare(int *a, int *b)    //*  �˴�������ǵ�ַ����˼�����������Ƚ�
{
	*a = *b;                    //*  �˴��ǽ����õ���˼�����ó�*a������
	*b = 0;
}

int main()
{
	int a = 1, b = 2;
	Compare(&a,&b);
	printf("%d,%d\n",a,b);
	system("pause");
	return 0;
}

//�����Ĵ�ַ�ı����ݵĺ���
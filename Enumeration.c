#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex liming = MALE;    //�������ͨ�����ҽ��Ϊ0��ö���д�0��ʼ���˴������1
	liming = 4;               //���ָ�ֵ���Կ���ͨ��
	printf("%d",liming);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void DigitalCharacter(int unsigned num)
{
	int unsigned q = num / 10;         //һ��ʼ��ʱ����ֱ��д����num /= 10,�����Ļ���û�а취ȡ�����һ�������ˣ�ͨ�����������һ������
	if (q != 0)
	{
		DigitalCharacter(q);
	}
	printf("%u\t",num % 10);
}

int main()
{
	int unsigned num = 0;
	printf("Please enter a non negative integer\n");
	scanf("%d",&num);
	DigitalCharacter(num);
	printf("\n");
	system("pause");
	return 0;
}

//print out each digit of a number
//��ӡʮ�������е�ÿһ����

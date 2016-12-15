#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int Equal(char *p, char *q)           //�ж��ַ����Ƿ���Ⱥ���
{
	while (*p != '\0')
	{
		if (*p++ != *q++)
			return 0;
	}
	return 1;
}

char *leftstring(char *str, int num, int len)  //�����ַ�������
{
	char arr[10];
	char *p = str, *q = str;
	int i = 0;
	for (i = 0; i < num; i++)         //����Ҫ�������ַ��ȱ�������
	{
		arr[i] = *p++;
	}
	p = str;
	p += num;                         //��pָ����Ҫǰ�Ƶ��ַ�
	for (i = num; i < len - 1; i++)   //��ǰ�Ʋ�����i���ƴ���
	{
		*str++ = *p++;
	}
	for (i = 0; i < num; i++)       //��ȡ�������ַ������ȥ
	{
		*str++ = arr[i];
	}
	return q;
}

int JudgeLeft(char *OriString, char *LeftString, int ori, int left)
{
	char *p = OriString;
	char m[20] = {'\0'};
	int i = 0;
	if (ori != left)                //����ַ����ĳ��Ȳ���ȣ�ֱ�ӷ���0
	{
		return 0;
	}

	for (i = 0; i < ori -1;i++)     //�������ԭʼ�ַ�����ֵ��һ���¿��ٵ����飬�����ڲ�����ʱ�򲻸ı�ԭ�ַ���������
	{
		m[i] = *p++;
	}
	for (i = 1; i < ori; i++)   //ͨ��������������������1��ʼ������λ�ã������Ƿ�����ȵ��ַ���
	{
		if (Equal(leftstring(m, 1, ori), LeftString) == 1)
		{
			return 1;
		}
	}
	return 0;

}

int main()
{
	char OriString[] = "AABCD";
	char LeftString[] = "AABCD";
	int ori = 0;
	int left = 0;
	ori = sizeof(OriString) / sizeof(OriString[0]);
	left = sizeof(LeftString) / sizeof(LeftString[0]);
	printf("%d\n", JudgeLeft(OriString, LeftString,ori,left));
	system("pause");
	return 0;
}

//Problem description:�ж�����
//To determine whether a string is a string after the rotation of the string.
//For example : given S1 = AABCD and S2 = BCDAA, return 1, given S1 = ABCD and S2 = ACBD, return 0
//AABCD left a character to get ABCDA
//AABCD l two characters get BCDAA
//AABCD right hand one character gets DAABC
//AABCD right hand two characters get CDAAB

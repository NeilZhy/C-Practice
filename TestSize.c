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
	printf("%c",tag.c);    //��Ϊ���������У�a��cʹ�ù�ͬ�Ĵ洢�ռ䣬�����ǵ���ʼλ��һ�£����Ե�����ֵ1֮��
	                       //�����С�˴洢�����1�������˸ߵ�ַ�������ǵĹ�ͬ�ڴ��еĺ����λ�ã�
	                       //����ʹ��%c��ӡ��ʱ���Ǵӿ�ʼ�ĵط��������Ծ͵õ�һ��δ֪����
	system("pause");
	return 0;
}
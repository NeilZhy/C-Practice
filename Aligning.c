#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//Ĭ�϶�������8
//��������������Ĭ���еĽ�Сֵ
//������ǰ
//����Ķ�����������������������

//c  1���ֽ�   b�Ķ�������4�����Բ���3��Ȼ���ڿ���4
//����Ķ�����������4�����������ṹ��Ĵ�С��8,��struct MyStruct�Ĵ�С��8

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
		short a;    //����֮ǰ�Ѿ���8�ˣ�Ȼ��a�Ķ�������2��������2�ı�����Ȼ��ֱ�ӿ���2���ֽڣ�
		            //������10���ֽڣ����������룬�����������������4�������������Խ����12
		            //��������Ϊvs��Ĭ�϶�������8���������8��û�б���������������������������4
	};
	struct MyStruct3
	{
		char c;
		int b;
		struct MyStruct2 d;
		short a;
	};            //c��1��Ȼ��b��ʱ����Ϊ������4��Ĭ����8�����Զ�������4�����Բ���3�����ֽ�֮���ٿ���4�����ʱ����8
	              //Ȼ��d��d�Ĵ�С��12��Ĭ����8�����Զ�������8��ǰ���Ѿ����룬����ֱ�Ӽ�12�����ʱ������20
	              //Ȼ��a��a��Ĭ�ϱȽ϶�������2,20�Ѿ���2�ı���������ֱ�Ӽ�2�����ʱ����22��Ȼ��������룬
	              //��Ϊ���������������8���������Ľ����24

	len = sizeof(struct MyStruct3);
	printf("%u\n", len);
	system("pause");
	return 0;
}
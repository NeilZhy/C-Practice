#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdarg.h>

int VariableAverage(int val, ...)   //����ĵ�һ��������������ȷ����
{
	va_list arg;                      //����һ�����������ڴ洢��������в���
	va_start(arg, val);                //���������뵽������ȥ����һ�����������������ڶ��������Ǹոմ���Ŀɱ�����ĵ�һ����
	int i = 0;
	int sum = 0;
	for (i = 0; i < val; i++)
	{
		sum += va_arg(arg, int);     //��ȡ���ݣ���һ�����������������ڶ������������������Ժ�Ĳ�����ȡ������������ȷ����
		printf("%d\n",sum);          //���԰������һ��ָ�룬ÿ��ִ��һ��֮�󣬾ͻ����������ȡ��һ����������һ�������ȷ������������ȡ
	}
	
	va_end(arg);                    //�ر�����
	return sum;
}

int main()
{
	printf("%d\n", VariableAverage(2,2,4));
	system("pause");
	return 0;
}


//�ÿɱ�����б����ʽ�������
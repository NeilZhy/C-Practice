#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
	long int num = 0,x = 0,y = 0;
	for (num = 1; num <= 100000; num++)
	{
		x = sqrt(num + 100);            //���������жϵ�ԭ���ǣ�x�ǳ����ͣ�������п���֮��ֻ�������������֣��������������
		                                //��ȫƽ�����Ļ���������������ж�����У�����ƽ��ֻ��Ͳ�����ԭ����������
		y = sqrt(num + 268);
		if ((x*x == num + 100) && (y*y == num + 268))
			printf("The perfect Square Number is %ld\n",num);
	}
	system("pause");
	return 0;
}
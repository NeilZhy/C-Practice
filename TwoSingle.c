#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

void TwoSingle(int *p, int len)
{
	int *q = p;
	int num = 0, num1 = 0, num2 = 0;
	int i = 0,j = 0;
	for (i = 0; i < len; i++)    //�����������֮�󣬵õ����������ǳɶԳ��ֵ����֣���Ϊ���Ϊ1�����Ե������ͬ����ʱ����ȥ��
	{
		num ^= *q++;
	}
	for (i = 0; i < 32; i++)     //ȡ������ж����Ƶ�λ��ʼ��һ��1����Ϊ�����Ľ����������������һ���ڸ�λ���ϲ���ͬ����һ����1��һ����0
		                         // ��ôԭ�����е��������ֳ����࣬һ�����ڸ�λΪ1��һ����Ϊ0���ҳ������ε����ֱ�������һ����
	{
		if (1 == ((num >> i) & 1))
			break;
	}
	q = p;
	for (j = 0; j < len; j++)
	{
		if (1 == (((*q) >> i) & 1))   //���ڸ�λΪ1����num1����򣬰��ڸ�λΪ0����num2�����
		{
			num1 ^= *q;
		}
		else
		{
			num2 ^= *q;
		}
		q++;
	}
	printf("%d %d\n",num1,num2);

	return;
}

int main()
{
	int len = 0;
	int arr[] = {1,2,3,5,6,1,3,2};
	len = sizeof(arr) / sizeof(arr[0]);
	TwoSingle(arr, len);
	
	system("pause");
	return 0;
}

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void test()
{
	//int num = 0;                //�����ַ�ʽ����numʱ��ÿ�ε������������ʱ��num���ᱻ���¶��壬��������Ľ�����Ǹ�1
	static int num = 0;           //�����Ұ�num����ɾ�̬�ģ����������ڴ��б�Ψһ����������Ľ����1--10
	num++;
	printf("%d  ",num);
}

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	printf("\n");
	//printf("%d",num);     //�ں���test����static�����numֻ�Ǹı���num���������ڣ�����num�ڿ�ʼ������֮��һֱ���ڣ�
	                        //ֱ���������������������Ҫע���һ���ǣ�num�������򲻱�
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
	char arrc[] = "12345";
	//char c;
	int num = 0;
	int i = sizeof(arrc)-1;
	int j = 0;
	for (; i > 0; i--)
	{
		num += (arrc[i - 1] - '0')*pow(10,j);   //���ŵ�������-�����ֵ�������+
		                                       //��סһ������0��ȥ����0���������48-48=0�����Դӷ��ŵ�����Ӧ���Ǽ�ȥ����0
		j++;
	}
	printf("%d\n",num);
	system("pause");
	return 0;
}
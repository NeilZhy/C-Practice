#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0, time = 0, num = 0, addend1 = 0, addend2 = 0, sum = 0;
	printf("��ֱ���������Ҫѭ�������������֣�\n");
	scanf("%d%d", &time, &num);
	for (i = 0; i < time; i++)
	{
		addend1 = num * pow(10, i);
		addend2 += addend1;
		sum += addend2;
	}
	printf("������Ϊ: %d\n", sum);
	return 0;
}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222


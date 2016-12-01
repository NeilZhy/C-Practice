#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

void quicksort(int a[], int left, int right)   //���������㷨 
{
	int i, j, t, temp;
	if (left > right)
		return;
	temp = a[left];   //temp�д�ľ��ǻ�׼�� 
	i = left;
	j = right;
	while (i != j)
	{
		//˳�����Ҫ���ȴ��ұ߿�ʼ�������
		while (a[j] >= temp && i<j)
			j--;
		//�ٴ������ұ��� 
		while (a[i] <= temp && i<j)
 		i++;
	//�����������������е�λ�� 
		if (i<j)    //���ڱ�i j û������ʱ 
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(a, left, i - 1);//����������ߵ� 
	quicksort(a, i + 1, right);//���������ұߵ� 
	return;
}

int main()
{
	int a[101], n;
	int i, j;
	scanf("%d", &n);      //n���Ǵ�����ĸ��� 
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	quicksort(a, 1, n);//����������� 
	printf("�����Ľ����\n");
	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);
	printf("\nֻ����һ�ε������ǣ�\n");
	for (i = 1; i <= n; i += 2)
	{
		if (0 != (a[i] ^ a[i + 1]))
		{
			printf("%d\n", a[i]);
			break;
		}
		if (i == n)
			printf("%d", a[i]);
	}
	system("pause");
	return 0;
}

//Problem description
//A set of data is only a figure appeared in one time.
//All other Numbers are in pairs.Please find out this number. (using the operation)
//Such as :
//Data : 1 3 5 7 1 3 5 it
//	Set of data, only seven appeared again.
//Structure : find number is : 7.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int InsertionSort(int *arr,int len)
{
	int i = 0, j = 0, m = 0;
	int temp = 0;
	for (i = 1; i < 5; i++)                     //ÿ�δ��������ҵ�һ�����ݣ���Ϊ����������
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[i] <= arr[j]&&arr[i] >= arr[j - 1])    //�ҵ����������ݵ�λ��
			{
				temp = arr[i];
				for (m = i - 1; m >= j; m--)            //������λ�ú�����������������ƶ�
				{
					arr[m + 1] = arr[m];
				}
				arr[j] = temp;
				break;
			}
		}
	}
	return 0;
}

int main()
{
	int i = 0;
	int arr[5] = {9,5,7,6,9};
	printf("ԭʼ���ݣ�\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	InsertionSort(arr,5);
	printf("�������ݣ�\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//��������

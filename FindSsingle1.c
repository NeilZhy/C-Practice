#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

void quicksort(int a[], int left, int right)   //快速排序算法 
{
	int i, j, t, temp;
	if (left > right)
		return;
	temp = a[left];   //temp中存的就是基准数 
	i = left;
	j = right;
	while (i != j)
	{
		//顺序很重要，先从右边开始往左边找
		while (a[j] >= temp && i<j)
			j--;
		//再从左往右边找 
		while (a[i] <= temp && i<j)
 		i++;
	//交换两个数在数组中的位置 
		if (i<j)    //当哨兵i j 没有相遇时 
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(a, left, i - 1);//继续处理左边的 
	quicksort(a, i + 1, right);//继续处理右边的 
	return;
}

int main()
{
	int a[101], n;
	int i, j;
	scanf("%d", &n);      //n就是待排序的个数 
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	quicksort(a, 1, n);//快速排序调用 
	printf("排序后的结果：\n");
	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);
	printf("\n只出现一次的数据是：\n");
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
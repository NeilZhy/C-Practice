#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Partition(int A[],int p,int r)
{
	int x = 0, i = 0, j = 0,tmp = 0;
	x = A[r];
	i = p - 1;
	for (j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i = i + 1;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;
    
	return i + 1;
}

void QuickSort(int A[], int p, int r)
{
	int q = 0;
	if (p < r)
	{
		q = Partition(A, p, r);
		QuickSort(A,p,q-1);
		QuickSort(A, q+1, r);
	}
}

int main()
{
	int i = 0;
	int A[] = { 1, 5, 2, 9 };
	for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	QuickSort(A, 0, sizeof(A)/sizeof(A[0])-1);     //QuickSort Algorithm
	for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}


//Problem description
//There is only one number in a set of data.All other numbers appear in pairs.Please find out the number. (using bit operations)
//Such as :
//Data : 1357135 the number of this group.According to the middle, only 7 appeared once.
//Structure : the number found is : 7


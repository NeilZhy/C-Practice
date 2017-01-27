#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()

{
	int right, left;
	char arr2[] = "I love baixu!!";
	char arr1[] = "##############";
	for (left = 0, right = (strlen(arr1) - 1); left <= right; left++, right--)
	{
		printf("%s\n", arr1);
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		Sleep(1000);
	}
	printf("%s\n", arr1);
	system("pause");
	return 0;

}
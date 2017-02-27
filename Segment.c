#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

typedef struct Stu
{
	char name : 1;
	int age : 2;
	char sex : 5;
	char address : 3;
	int add :1;
}Stu;



int main()
{
	Stu student;
	printf("%d\n", sizeof(student));
	system("pause");
	return 0;
}
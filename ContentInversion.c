#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

void inversion(char str[],int i)      //With multiple Pointers to multiple words
{	
	char *p[10];
	char *m = str;
	char a[10];
	int j = 0,k = 0;
	for (k = 0; k < 10; k++)     //The first word of pointer to cannot be directly introduced to, 
	{                            ////because here doing the incoming pointer pointing to content is changed, so that tag pointing to the changed
		if (' ' == str[k])
		{
			a[k] = '\0';
			break;
		}	
		a[k] = str[k];	
	}
	p[0] = a;
	while ('\0' != *m)
	{
		m++;
		if (' ' == *m)
		{
			m++;
			j++;
			p[j] = m;
		}
	}
	for (; j >= 0; j--)
	{
		while (('\0' != *p[j])&&(' ' != *p[j]))
		{
			*str = *p[j];
			str++;
			p[j]++;
		}
		if ('\0' != p[j])
		{
			if (0 == j)
			{
				*str = '\0';    //Control after the last word for '\ 0', this array is terminated.
				break;
			}
			*str = ' ';
			str++;
		}
	}
}

int main()
{
	char str[] = "student a am i";
	int i = sizeof(str)-1;
	inversion(str,i);
	printf("%s",str);
	printf("\n");
	system("pause");
	return 0;
}


//Problem description:
//There is a character array as follows : the content of the "student am I", 
//please amend the contents of the array as "I am a student".
//Requirements :
//			 Library function cannot be used.Number can only open a limited space
//			 (space has nothing to do with the length of the string).
//			 Tneduts a ma I - > I am a student
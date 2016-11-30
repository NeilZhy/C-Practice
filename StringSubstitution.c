#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void CharactersToReplace(char str[])
{
	int i = 0,j = 0;
	while (1)
	{
		if ('\0' != str[i])
		{
			if (' ' == str[i])
			{
				str = (char *)realloc(str, 3 * sizeof(char));   //Re open storage space
				for (j = sizeof(str)+1; j > i; j--)       //Move three spaces after the space, in order to prepare for the replacement of the front
				{
					str[j + 3] = str[j];
				}
				str[i] = '%';
				str[i + 1] = '2';
				str[i + 2] = '0';
			}
		}
		else
		{
			printf("\n");
			break;
		}
		i++;
	}
}



void PrintToReplace(char str[])
{
	int i = 0;
	while (1)
	{
		if ('\0' != str[i])
		{
			if (' ' == str[i])
				printf("%%20");
			else
				printf("%c", str[i]);
		}
		else
		{
			printf("\n");
			break;
		}
			
		i++;
	}
}

int main()
{
	char str[] = "We are happy.";
	CharactersToReplace(str);
	PrintToReplace(str);
	return 0;
}

//Problem description
//String substitution Spaces :
//Please implement a function, every space in the character array to replace "% 20".
//For example input "we are happy.", then output "so.we % 20 are % 20 happy
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char murderer = 0;
	for (murderer = 'A'; murderer <= 'D'; murderer++)
	{
		if (3 == ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D')))
		{
			printf("murderer = %c\n", murderer);
		}
	}
	return 0;
}
//ÅÐ¶ÏÐ×ÊÖ
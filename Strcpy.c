#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

//void My_strcpy(char a[10], char b[10])
//{
//	int i = 0;
//	while (1)
//	{
//		a[i] = b[i];
//		if (NULL == b[i])
//			break;
//		i++;
//	}
//}

char *My_strcpy(char *dst, char const *src)
{	
		char *address = dst;		
		while (*src)                   
		{
			*dst++ = *src++;               //"* + array name" this way you can take a single element of the array.
		}
		*dst = '\0';                       //When DST string SRC string length is less than the original length, 
		                                   // If not this statement, will go wrong.
		return dst;                     
}

int main()
{
	char str1[] = "hello";
	char str2[] = "ni";
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	My_strcpy(str1, str2);
	printf("str1 = %s\n", str1);
	system("pause");
	return 0;
}
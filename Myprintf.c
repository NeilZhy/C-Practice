#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include <stdarg.h>

void myprintf(const char *format, ...)       //�ɱ�����б���һ������������֪���������...��ʾ
{ 
	va_list ap;                              //�ú꺯������һ���������Ҹ��˰������Ϊһ������
	char c; 
	va_start(ap, format);                    //��ʼ�������ѿɱ�������뵽������ȥ
	while (c = *format++) {                  //���Եõ���һ����֪����������         
		switch (c) {
		case '%':{
					 c = *format++;           
					 switch (c){
					 case 'd':{
								  char ch = va_arg(ap, int) + '0';   //��ӡ���֣�ͨ��va_arg�ķ�ʽ����ȡ�ɱ����������
								  putchar(ch);
								  break;
					 }
					 case 'c':{                                      //��ӡ�ַ�
								  char ch = va_arg(ap, int);
								  putchar(ch);
								  break;
					 }
					 case 's': {                                      //��ӡ�ַ���
								   char *p = va_arg(ap, char *);
								   puts(p);
								   break;
					 } 
					 }
					 break;
					 }
		case '\\':{                                                   //��ӡ���У����˸��
					  c = *format++;
				switch (c){
				case 'n':printf("\n"); break;
				case 't':printf("\t"); break;
				}
				break;
		default:putchar(c);                                            //��ӡ�����ַ�
		}
		}
	}
	va_end(ap);                                                       //�ر�����
}

int main(void)
{
	int a = 1, b = 2,c = 3;
	char m = 'u';
	char*str = "hello";                               //��������
	myprintf("hello\t%d%d%d%c\n",a,b,c,m);
	myprintf("haha%c%dzhangyingshishamao\n",a*b,a+b);
	myprintf("%s\n",str);
	system("pause");
	return 0;
}

//�ÿɱ�����б����ʽʵ��Myprintf
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include <stdarg.h>

void myprintf(const char *format, ...)       //可变参数列表，第一个参数必须已知，其余的用...表示
{ 
	va_list ap;                              //用宏函数定义一个变量，我个人把它理解为一个容器
	char c; 
	va_start(ap, format);                    //初始化，即把可变参数传入到容器中去
	while (c = *format++) {                  //可以得到第一个已知参数的内容         
		switch (c) {
		case '%':{
					 c = *format++;           
					 switch (c){
					 case 'd':{
								  char ch = va_arg(ap, int) + '0';   //打印数字，通过va_arg的方式，提取可变参数的内容
								  putchar(ch);
								  break;
					 }
					 case 'c':{                                      //打印字符
								  char ch = va_arg(ap, int);
								  putchar(ch);
								  break;
					 }
					 case 's': {                                      //打印字符串
								   char *p = va_arg(ap, char *);
								   puts(p);
								   break;
					 } 
					 }
					 break;
					 }
		case '\\':{                                                   //打印换行，和退格等
					  c = *format++;
				switch (c){
				case 'n':printf("\n"); break;
				case 't':printf("\t"); break;
				}
				break;
		default:putchar(c);                                            //打印单个字符
		}
		}
	}
	va_end(ap);                                                       //关闭容器
}

int main(void)
{
	int a = 1, b = 2,c = 3;
	char m = 'u';
	char*str = "hello";                               //测试用例
	myprintf("hello\t%d%d%d%c\n",a,b,c,m);
	myprintf("haha%c%dzhangyingshishamao\n",a*b,a+b);
	myprintf("%s\n",str);
	system("pause");
	return 0;
}

//用可变参数列表的形式实现Myprintf
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("file:%s line:%d\n", __FILE__, __LINE__);
//
//	return 0;
//}
//#include<stdio.h>
//#define MAX 1000
//#define reg register      //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;)   //用更形象的符号来替换一种实现
//#define CASE break;case     //在写case语句的时候自动把 break写上。
//
//
//// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
//#define DEBUG printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n" ,\
//							__FILE__,__LINE__ ,\
//							__DATE__,__TIME__ )
//
//#define DEBUG_PRINT printf("%s\t %d\t %s\t %s\n", __FILE__, __LINE__, __DATE__, __TIME__)
//int main()
//{
//	int a = MAX;
//	DEBUG;
//	DEBUG_PRINT;
//	
//	return 0;
//}

#include<stdio.h>

#define MAX 1000;

//int main()
//{
//	int max = 0;
//	if (5>1)
//		max = MAX;
//	else
//		max = 0;
//	return 0;
//}
//int main()
//{
//	int max = 0;
//	if (5 > 1)
//		max = 100;;
//	else
//		max = 0;
//	return 0;
//}
#include<stdio.h>
#define ADDONE( x ) x*x
int main()
{
	int a = 5;
	int n = ADDONE(a+1);
	printf("%d", n);

	return 0;
}
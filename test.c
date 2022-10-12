#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define INT_PTR int*
typedef int* int_ptr;
INT_PTR a, b;
int_ptr c, d;




#define OFFSETOF(STR,str) (&(str)-&(STR))

//typedef struct S
//{
//	int a;
//	int b;
//	char c;
//}S;
//
//int main()
//{
//
//	S s={0};
//	printf("%d\n", sizeof(s));
//	printf("%p\n", &s);
//	printf("%p\n", &s.a);
//	printf("%p\n", &s.b);
//	printf("%p\n", &s.c);
//	printf("%p\n", &s);
//	printf("%d ", OFFSETOF(s, s.a));
//	printf("%p\n", &s);
//	printf("%d ", OFFSETOF(s, s.b));
//	printf("%p\n", &s);
//	printf("%d ", OFFSETOF(s, s.c));
//
//
//	printf("%d \n", &s.b - &s);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//打开文件,打开方式只写，如果指定文件不存在
//	//建立一个新的文件
//	pFile = fopen("test.txt", "w");
//	//文件操作
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//	}
//	//将字符依次输出到 'L' 'O' 'V' 'E' '!' test.txt文件中
//	fputc('L', pFile);
//	fputc('O', pFile);
//	fputc('V', pFile);
//	fputc('E', pFile);
//	fputc('!', pFile);
//
//	//关闭文件
//	fclose(pFile);
//	
//	//打开文件, 打开方式只读
//	pFile = fopen("test.txt", "r");
//	//将文件中的数据依次输入读取，再打印在控制台上、
//	char str[10] = { 0 };
//	printf("%s", fgets(str, 6, pFile));
//	printf("%s", fgets(str, 6, pFile));
//	
//	
//	//关闭文件
//	fclose(pFile);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int c = fgetc(stdin);
//	printf("This character is '%c'.", c);
//
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	
//	//打开文件, 打开方式只读
//	FILE*pFile = fopen("test.txt", "r");
//	//将文件中的数据依次输入读取，再打印在控制台上
//	char str[10] = { 0 };
//	printf("%s", fgets(str, 10, pFile));
//	printf("%s", fgets(str, 10, pFile));
//	//关闭文件
//	fclose(pFile);
//	return 0;
//}

#include <stdio.h>
int main()
{

	//打开文件, 打开方式只读
	FILE* pFile = fopen("test.txt", "w");
	
	if (pFile == NULL)
	{
		perror("fopen File");
		return 1;
	}
	fputs("I love China\n", pFile);
	fputs("I love Anhui\n", pFile);
	fputs("I love Bozhou\n", pFile);
	
	//关闭文件
	fclose(pFile);
	return 0;
}
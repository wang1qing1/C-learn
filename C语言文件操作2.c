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

//#include <stdio.h>
//int main()
//{
//
//	//打开文件, 打开方式只读
//	FILE* pFile = fopen("test.txt", "w");
//	
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//		return 1;
//	}
//	fputs("I love China\n", pFile);
//	fputs("I love Anhui\n", pFile);
//	fputs("I love Bozhou\n", pFile);
//	
//	//关闭文件
//	fclose(pFile);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	char ID[20];
//	int age;
//};
//#include <stdio.h>
//int main()
//{
//	struct S s = { "zhangfei","zf123546",17 };
//	//打开文件, 打开方式只写
//	FILE* pFile = fopen("test.txt", "w");
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//		return 1;
//	}
//
//	fprintf(pFile, "%s %s %d", s.name, s.ID, s.age);
//	//关闭文件
//	fclose(pFile);
//
//	//打开文件, 打开方式只读
//	pFile = fopen("test.txt", "r");
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//	}
//	struct S s1 = { 0 };
//	
//	//从文件中读取输入
//	fscanf(pFile, "%s %s %d", s1.name, s1.ID, &s1.age);
//	printf("%s %s %d", s1.name, s1.ID, s1.age);
//
//	//关闭文件
//	fclose(pFile);
//
//	return 0;
//}

struct S
{
	char name[20];
	char ID[20];
	int age;
};
#include <stdio.h>
int main()
{
	char arr[] = { 'C','h','i','a','n' };
	//打开文件, 打开方式只写
	FILE* pFile = fopen("test.txt", "w");
	if (pFile == NULL)
	{
		perror("fopen File");
		return 1;
	}
	fwrite(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), pFile);
	
	//关闭文件
	fclose(pFile);

	//打开文件, 打开方式只读
	pFile = fopen("test.txt", "r");
	if (pFile == NULL)
	{
		perror("fopen File");
	}
	struct S s1 = { 0 };

	//从文件中读取输入
	char arr1[10] = { 0 };
	fread(arr1, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), pFile);
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", arr1[i]);
	}
	//关闭文件
	fclose(pFile);

	return 0;
}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char str1[50] = { 0 };
//	char str2[50] = { 0 };
//	char str[] = "you are 18 years old";
//	int n = sscanf(str, "%s %s %d", str1, str2, &i);
//	printf("str1 : %s\n",str1);
//	printf("str2 : %s\n",str2);
//	printf("i = %d\n", i);
//	printf("%d data were read from [%s].\n", n, str);
//	printf("------------------------------------------------------\n");
//	int age = 19;
//	char str3[50] = { 0 };
//	int m = sprintf(str3, "I am %d years old", age);
//	printf("[%s]is a string %d chars long\n", str3, m);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("hello.txt", "wb");
//	if (pFile == NULL)
//	{
//		perror("fopen");
//		return 4;
//	}
//	//在文件中行输出" This is an apple. "，此时文件指针的偏移位置是字符串的最后。
//	fputs("This is an apple.", pFile);
//	//从当前文件指针的偏移位置,向后偏移9个位置。
//	fseek(pFile, 9, SEEK_CUR);
//	//从文件的偏移位置处行输出" sam".
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("hello.txt", "wb");
//	if (pFile == NULL)
//	{
//		perror("fopen");
//		return 4;
//	}
//	//在文件中行输出" This is an apple. "
//	fputs("This is an apple.", pFile);
//	long int num = ftell(pFile);
//	fclose(pFile);
//	printf("The offset position of the pFile is %ld . ", num);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int n;
//    FILE* pFile;
//    char buffer[27];
//
//    pFile = fopen("myfile.txt", "w+");
//    for (n = 'A'; n <= 'Z'; n++)
//    {
//        //文件顺序写入[ A-Z ],此时文件的偏移位置在文件的最后面。
//        fputc(n, pFile);
//    }
//    //重置偏移位置到文件的开始
//    rewind(pFile);
//    //顺序读取 大小为 1 字节，读取 26 个。
//    fread(buffer, 1, 26, pFile);
//    fclose(pFile);
//    //将数组最后一个赋值为 '\0'.
//    buffer[26] = '\0';
//    puts(buffer);
//    return 0;
//}

//int main()
//{
//    int n;
//    FILE* pFile;
//    char buffer[27];
//
//    pFile = fopen("myfile.txt", "w+");
//    int c = fputc('A', pFile);
//    printf("%c", c);
//    
//    return 0;
//}
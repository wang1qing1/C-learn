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
//	//���ļ�,�򿪷�ʽֻд�����ָ���ļ�������
//	//����һ���µ��ļ�
//	pFile = fopen("test.txt", "w");
//	//�ļ�����
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//	}
//	//���ַ���������� 'L' 'O' 'V' 'E' '!' test.txt�ļ���
//	fputc('L', pFile);
//	fputc('O', pFile);
//	fputc('V', pFile);
//	fputc('E', pFile);
//	fputc('!', pFile);
//
//	//�ر��ļ�
//	fclose(pFile);
//	
//	//���ļ�, �򿪷�ʽֻ��
//	pFile = fopen("test.txt", "r");
//	//���ļ��е��������������ȡ���ٴ�ӡ�ڿ���̨�ϡ�
//	char str[10] = { 0 };
//	printf("%s", fgets(str, 6, pFile));
//	printf("%s", fgets(str, 6, pFile));
//	
//	
//	//�ر��ļ�
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
//	//���ļ�, �򿪷�ʽֻ��
//	FILE*pFile = fopen("test.txt", "r");
//	//���ļ��е��������������ȡ���ٴ�ӡ�ڿ���̨��
//	char str[10] = { 0 };
//	printf("%s", fgets(str, 10, pFile));
//	printf("%s", fgets(str, 10, pFile));
//	//�ر��ļ�
//	fclose(pFile);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	//���ļ�, �򿪷�ʽֻ��
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
//	//�ر��ļ�
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
//	//���ļ�, �򿪷�ʽֻд
//	FILE* pFile = fopen("test.txt", "w");
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//		return 1;
//	}
//
//	fprintf(pFile, "%s %s %d", s.name, s.ID, s.age);
//	//�ر��ļ�
//	fclose(pFile);
//
//	//���ļ�, �򿪷�ʽֻ��
//	pFile = fopen("test.txt", "r");
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//	}
//	struct S s1 = { 0 };
//	
//	//���ļ��ж�ȡ����
//	fscanf(pFile, "%s %s %d", s1.name, s1.ID, &s1.age);
//	printf("%s %s %d", s1.name, s1.ID, s1.age);
//
//	//�ر��ļ�
//	fclose(pFile);
//
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
//	char arr[] = { 'C','h','i','a','n' };
//	//���ļ�, �򿪷�ʽֻд
//	FILE* pFile = fopen("test.txt", "w");
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//		return 1;
//	}
//	fwrite(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), pFile);
//	
//	//�ر��ļ�
//	fclose(pFile);
//
//	//���ļ�, �򿪷�ʽֻ��
//	pFile = fopen("test.txt", "r");
//	if (pFile == NULL)
//	{
//		perror("fopen File");
//	}
//	struct S s1 = { 0 };
//
//	//���ļ��ж�ȡ����
//	char arr1[10] = { 0 };
//	fread(arr1, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), pFile);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//	//�ر��ļ�
//	fclose(pFile);
//
//	return 0;
//}


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

#include <stdio.h>
int main()
{
	FILE* pFile;
	pFile = fopen("example.txt", "wb");
	fputs("This is an apple.", pFile);
	fseek(pFile, 9, SEEK_CUR);
	fputs(" sam", pFile);
	fclose(pFile);
	return 0;
}

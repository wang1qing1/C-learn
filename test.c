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

#include <stdio.h>
int main()
{

	//���ļ�, �򿪷�ʽֻ��
	FILE* pFile = fopen("test.txt", "w");
	
	if (pFile == NULL)
	{
		perror("fopen File");
		return 1;
	}
	fputs("I love China\n", pFile);
	fputs("I love Anhui\n", pFile);
	fputs("I love Bozhou\n", pFile);
	
	//�ر��ļ�
	fclose(pFile);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr)); 
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	char ch = 0;
//	int arr[3] = { 0 };
//	int* pa = &a;
//	char* pc = &ch;
//	int(*parr)[3] = &arr;
//	printf("pa=%p,pa+1=%p\n", pa, pa + 1);
//	printf("pc=%p,pc+1=%p\n", pc, pc + 1);
//	printf("parr=%p,parr+1=%p\n", parr, parr + 1);
//	
//	return 0;
//}
//int main()
//{
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//sizeof(a)�����������������飬
//	//��������������Ĵ�С��
//	printf("%d\n", sizeof(a[0][0]));
//	//���������һ������Ԫ�صĴ�С��
//	printf("%d\n", sizeof(a[0]));
//	//a�Ƕ�ά�������������������ĵ�һ�еĵ�ַ��
//	// a[0]�൱��*(a+0),�ҵ��������һ�С�
//	//����sizeof(a[0])����Ƕ�ά�����һ�еĴ�С��
//	printf("%d\n", sizeof(a[0] + 1));
//	//a[0]��ʵ���Ƕ�ά�����һ�е���������
//	// (a[0]+1)����һ��ָ���ά��һ�еڶ���Ԫ�ص�ָ�롣
//	//�����һ��ָ��Ĵ�С��
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//��(a[0]+1)�Ļ������ڽ����ã�
//	//���Ƕ�ά��һ�еڶ���Ԫ�ء�
//	printf("%d\n", sizeof(a + 1));
//	//a��һ��ָ���һ�������ָ�룬
//	// a+1����һ��ָ��ڶ��������ָ�롣
//	//�����һ��ָ��Ĵ�С
//	printf("%d\n", sizeof(*(a + 1)));
//	//(a+1)��ָ���ά����ڶ��еĵ�ַ��
//	// �������Ժ�����ҵ��˵ڶ���
//	//��������ǵڶ��еĴ�С
//	printf("%d\n", sizeof(&a[0] + 1));
//	//&a[0]ȡ����һ�еĵ�ַ��
//	//�ȼ��������� a �����Եȼ��� a + 1
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//�ȼ���*(a+1)
//	printf("%d\n", sizeof(*a));
//	//�ȼ���a[0]
//	printf("%d\n", sizeof(a[3]));
//	//�ȼ��� *(a+3),��Ȼ����û�е����У�
//	// ����*(a+3)�����ܹ�ȷ����
//	// ���� int [4],����������Ԫ�����顣
//
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}
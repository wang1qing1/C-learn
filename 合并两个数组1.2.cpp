#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int* hebin(int* arr, int a, int* brr, int b)
{
	int* abrr =(int *) malloc(sizeof(int)*(a+b));
	int i = 0, j = 0, k = 0;
	while (i < a && j < b)//ע��������ٽ������������ǵ����������һ���±���ֹͣ��
	{
		if (arr[i] > brr[j])
		{
			abrr[k++] = brr[j++];
		}
		else
		{
			abrr[k++] = arr[i++];
		}
		
	}
	while (j < b)//i��j�ǵ���a��b�ģ�ֻ��j<b����i<a,����û��������ģ�
	{
		abrr[k++] = brr[j++];
	}
	while (i < a)
	{
		abrr[k++] = arr[i++];
	}
	return abrr;
}
int main()
{
	int arr[] = { 1,2,24,36,55 };
	int brr[] = { 3,23,25,35,56,84,95 };
	int a = sizeof(arr) / sizeof(int);
	int b = sizeof(brr) / sizeof(int);
	int *p=hebin(arr, a, brr, b);
	for (int i = 0; i <(a + b); i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}
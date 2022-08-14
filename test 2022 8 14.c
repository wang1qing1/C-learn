#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////整形指针 
	//int* a;
	////字符指针
	//char* b;
	////浮点型指针
	//double* c;
	////自定义结构体指针
	//struct S
	//{
	//	int a;
	//	char b;
	//}*ss;
//int main()
//{
//	const char* ch = "hahaha";
//	printf("%s", ch);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//	return 0;
//}

//int main()
//{
//	//整形数据，可以存储多个整形数据
//	int arr[10];
//	//字符数组，可以存储字符或者字符串
//	char ch[10];
//	//指针数组，是不是可以存储多个指针？
//
//
//
//	return 0;
//}

//int main()
//{
//
//	int* arr[10];
//
//
//	return 0;
//
//}

//int main()
//{
//	char* str1 = "I'm ikun";
//	char* str2 = "You are ikun";
//	char* str3 = "sing jump rap basketball";
//	char* kun[3] = { str1,str2,str3 };
//	int sz = sizeof(kun) / sizeof(kun[0]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", kun[i]);
//	}
//	return 0;
//}

//int main()
//{
//
//
//	int* pa[10];
//	int(*p)[10];
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr=%p\n", arr);
//	printf("&arr=%p\n", &arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("\n");
//	printf("&arr= %p\n", &arr);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//}
#include <stdio.h>
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	print_arr1(arr, 3, 5);
	//数组名arr，表示首元素的地址
	//但是二维数组的首元素是二维数组的第一行
	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	//可以数组指针来接收
	printf("\n");
	print_arr2(arr, 3, 5);
	return 0;
}
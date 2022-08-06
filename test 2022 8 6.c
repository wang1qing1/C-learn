#define _CRT_SECURE_NO_WARNINGS 1
//typedef struct Node
//{
//    int data;
//    int p;
//    int next;
//}Node; 
////结构体指定成员初始化
// Node n2 = {.data=22,.next=56,.p=30};
// 
// 
//有序序列合并
//#include<stdio.h>
//void merge(int *arr, int* arr1, int* arr2, int n1, int n2)
//{
//	int i = 0, j = 0, k = 0;
//	while (i < n1 && j < n2)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr[k] = arr1[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			arr[k] = arr2[j];
//			k++;
//			j++;
//		}
//	}
//	if (i < n1)
//	{
//		while (i < n1)
//		{
//			arr[k] = arr1[i];
//			i++;
//			k++;
//		}
//	}
//	if (j < n2)
//	{
//		while (j < n2)
//		{
//			arr[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr[2000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	merge(arr,arr1, arr2, n, m);
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// *     *  7
//  *   *
//   * *
//    *
//   * *
//  *   *
// *     *
//
// 
// *    *  6
//  *  *
//   **
//   **
//  *  *
// *    *
//
//#include<stdio.h>
//int main()
//{
//	int lin = 0;
//	while (scanf("%d", &lin) == 1)
//	{
//		if (lin % 2 == 1)
//		{
//			int i = 0;
//		for (i = lin / 2; i >= 1; i--)
//		{
//			int j = 0;
//			for (j = i; j < lin / 2; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 1; j <= 2*i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		for (i = 1; i <= lin / 2; i++)
//		{
//			printf(" ");
//		}
//		printf("*\n");
//		for (i = 1; i <= lin / 2; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= lin/2-i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 1; j <= 2 * i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		}
//		else
//		{
//			int i = 0;
//			for (i = lin / 2-1; i >= 1; i--)
//			{
//				int j = 0;
//				for (j = i; j < lin / 2-1; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 1; j <= 2*i ; j++)
//				{
//					printf(" ");
//				}
//				printf("*\n");
//			}
//			for (i = 1; i <= lin / 2-1; i++)
//			{
//				printf(" ");
//			}
//			printf("**\n");
//			for (i = 1; i <= lin / 2-1; i++)
//			{
//				printf(" ");
//			}
//			printf("**\n");
//			for (i = 1; i <= lin / 2-1; i++)
//			{
//				int j = 0;
//				for (j = 1; j <= lin/2-i-1; j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 1; j <= 2 * i ; j++)
//				{
//					printf(" ");
//				}
//				printf("*\n");
//			}
//		}
//	}
//	return 0;
//}

//
// ######*
//     **
//   ***
// ****
//   ***
//     **
//       *
// 
// 
//
#include<stdio.h>
int main()
{
	int lin = 0;
	while (scanf("%d", &lin) == 1)
	{
		int i = 0;
		for (i = lin; i >= 1; i--)
		{
			int j = 0;
			for (j = 1; j <= i * 2; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= lin + 1 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 1; i <= lin + 1; i++)
		{
			printf("*");
		}
		printf("\n");
		for (i = 1; i <= lin; i++)
		{
			int j = 0;
			for (j = 1; j <= i * 2; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= lin + 1 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
	return 0;
	
}
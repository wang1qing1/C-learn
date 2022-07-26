#define _CRT_SECURE_NO_WARNINGS 1

//交换数组
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(int);
//	int i = 0;
//	printf("交换前arr1:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("交换前arr2:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("\n");
//	printf("交换后arr1:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("交换后arr2:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}


//数组操作
//#include<stdio.h>
//void print(int* init, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", init[i]);
//	}
//}
//void reverse(int* init, int sz)
//{
//	int* left = init;
//	int* right = init + sz - 1;
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int init[10] = { 0 };
//	int sz = sizeof(init) / sizeof(int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		init[i] = i;
//	}
//	print(init, sz);
//	reverse(init, sz);
//	printf("\n");
//	print(init, sz);
//	return 0;
//}

//冒泡排序
//#include<stdio.h>
//void print(int* init, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", init[i]);
//	}
//}
//void bubble(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {0,3,5,1,2,9,6,4,7,8 };
//	int sz = sizeof(arr) / sizeof(int);
//	printf("排序前：");
//	print(arr, sz);
//	printf("\n");
//	bubble(arr,sz);
//	printf("排序后：");
//	print(arr,sz);
//	return 0;
//}

//矩阵计算
//#include<stdio.h>
//int main()
//{
//    int N = 0, M = 0;
//    scanf("%d %d", &N, &M);
//    //OJ练习
//   /int arr[N][M];
//    int i = 0, j = 0;
//    int sum = 0;
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < M; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < M; j++)
//        {
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d", sum);
//	  return 0;
//
//}

//矩阵转置(OJ)
//#include<stdio.h>
//int main()
//{
//    int N = 0, M = 0;
//    scanf("%d %d", &N, &M);
//    int arr[N][M];
//    int i = 0, j = 0;
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < M; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

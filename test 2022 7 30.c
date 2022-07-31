#define _CRT_SECURE_NO_WARNINGS 1

//二进制奇偶数位
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	printf("二进制奇数位:");
//	for (i = 0; i < 32; i += 2)
//	{
//		if (num & (1 << i))
//		{
//			printf("%d ", 1);
//		}
//		else
//		{
//			printf("%d ", 0);
//		}
//	}
//	printf("\n");
//	printf("二进制偶数位:");
//	for (i = 1; i < 32; i += 2)
//	{
//		if (num & (1 << i))
//		{
//			printf("%d ", 1);
//		}
//		else
//		{
//			printf("%d ", 0);
//		}
//	}
//	return 0;
//}

//上三角矩阵判定
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[10][10];
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < i; j++)
//        {
//            sum += arr[i][j];
//        }
//    }
//    if (sum != 0)
//    {
//        printf("NO\n");
//    }
//    else
//    {
//        printf("YES\n");
//    }
//    return 0;
//}

//进制转换
//#include<stdio.h>
//void SIX(int num)
//{
//    if (num <6)
//    {
//        printf("%d", num);
//    }
//    else
//    {
//        SIX(num / 6);
//        printf("%d", num % 6);
//    }
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    SIX(num);
//    return 0;
//}

//序列中删除指定数字
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int arr[50];
//    int key = 0;
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &key);
//    int j = 0;
//    for (j = 0; j < N; j++)
//    {
//        if (arr[j] != key)
//            printf("%d ", arr[j]);
//    }
//    return 0;
//
//}

//小乐乐与欧几里得
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int n1 = a;
//    int n2 = b;
//    while (a % b)
//    {
//        int y = a % b;
//        a = b;
//        b = y;
//    }
//    int min = b;
//    int max = n1 * n2 / min;
//    printf("%d", min + max);
//    return 0;
//}

//小乐乐走台阶
//#include<stdio.h>
//int frog_jump(int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	else if (num == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return frog_jump(num - 1) + frog_jump(num - 2);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = frog_jump(num);
//	printf("%d\n ", count);
//	return 0;
//}

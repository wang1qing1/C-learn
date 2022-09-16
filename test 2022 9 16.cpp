#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int num = 0;
//    int sum = 0;
//    int count = -1;
//    scanf("%d", &num);
//    while (num)
//    {
//        int a = num % 10;
//        count++;
//        if (a % 2 == 0)
//        {
//            sum += 0;
//        }
//        else
//        {
//            sum += pow(10, count);
//        }
//        num /= 10;
//    }
//    printf("%d", sum);
//
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(void* e1, void* e2)
//{
//    return (*((int*)e2) - *((int*)e1));
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, n, sizeof(int), cmp);
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int arr[n][n];
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//
//    return 0;
//}
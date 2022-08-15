#define _CRT_SECURE_NO_WARNINGS 1

//static int arr[10000];
//int* printNumbers(int n, int* returnSize) {
//    int i = 0;
//    int num = 9;
//
//    for (i = 0; i < n - 1; i++)
//    {
//        num *= 10;
//        num += 9;
//    }
//    static int arr[100000];
//    for (i = 1; i <= num; i++)
//    {
//        arr[i - 1] = i;
//    }
//    *returnSize = num;
//    return arr;
//}
//int main()
//{
//
//	int n= 0;
//	scanf("%d", &n);
//    int lin = 0;
//    int* arr = printNumbers(n, &lin);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a = 0;
//	if (a == 0.0)
//	{
//		printf("sjks");
//	}
//	char arr[14] = "hahaha";
//	char arr1[10];
//	char*arr12 = "hahahaha";
//}
// 计算日期到天数转换 
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%d %d %d", &year, &month, &day);
//    int i = 0;
//    int mon[12] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//    {
//        mon[2] = 29;
//    }
//    int sum = 0;
//    for (i = 1; i < month; i++)
//    {
//        sum += mon[i];
//    }
//    printf("%d ", sum + day);
//    return 0;
//}
//验证尼科彻斯定理
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int arr[100];
//    int i = 0;
//    int k = 0;
//    int frist = num * num - num + 1;
//    for (i = 0; i < num; i++)
//    {
//        arr[i] = frist + k;
//        k += 2;
//    }
//    for (i = 0; i < num; i++)
//    {
//        if (i < num - 1)
//            printf("%d+", arr[i]);
//        else
//        {
//            printf("%d", arr[i]);
//        }
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    int ele = 2;
    int sum = 0;
    for (i = 1; i <= num; i++)
    {
        sum += ele;
        ele += 3;
    }
    printf("%d", sum);
}

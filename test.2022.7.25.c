#define _CRT_SECURE_NO_WARNINGS 1
//递归实现n的k次方
//#include<stdio.h>
//double power(int n, int k)
//{
//	if (k > 0)
//	{
//		if (1 == k)
//		{
//			return n*1.0;
//		}
//		else
//		{
//			return n*1.0 * power(n, k - 1);
//		}
//	}
//	else if (k < 0)
//	{
//		if (-1 == k)
//		{
//			return 1.0/n;
//		}
//		else
//		{
//			return 1.0/n * power(n, k + 1);
//		}
//	}
//	else
//	{
//		return 1.0;
//	}
//}
//int main()
//{
//	int k = 0;
//	int n = 0;
//	int arr[1] = { 0 };
//	scanf("%d %d", &n, &k);
//	double num = power(n, k);
//	printf("%d的%d次方是：%lf\n",n,k, num);
//	return 0;
//}

 
////计算一个数的每位之和（递归实现）
//#include<stdio.h>
//int add(int num)
//{
//	if (num < 10)
//	{
//		return num;
//	}
//	else
//	{
//		return num % 10 + add(num / 10);
//	}
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = add(num);
//	printf("%d\n", sum);
//	return 0;
//}
//  


// 
//将参数字符串中的字符反向排列（递归实现）
//#include<stdio.h>
//#include<string.h>
//void rotate(char* left, char* right)
//{
//	if (left < right)
//	{
//		char ch = *left;
//		*left = *right;
//		*right = ch;
//		rotate(++left, --right);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* tail = arr + strlen(arr)-1;
//	rotate(arr,tail);
//	printf("%s\n", arr);
//	return 0;
//}



//#include<stdio.h>
////strlen的模拟（非递归实现）
//int my_strlen1(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
////strlen的模拟（递归实现）
//int my_strlen(char* arr)
//{
//	if ('\0' == *arr)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int count1=my_strlen(arr);
//	int count2 = my_strlen1(arr);
//	printf("递归count=%d\n", count1);
//	printf("非递归count=%d\n", count2);
//	return 0;
//}

//小乐乐求和
//#include<stdio.h>
//int main()
//{
//    long long num = 0;
//    scanf("%d", &num);
//    long long sum = 0;
//    int i = 0;
//    for (i = 1; i <= num; i++)
//    {
//        sum += i;
//    }
//    printf("%ld", sum);
//    return 0;
//}

//N个数之和
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    int i = 0;
//    int sum = 0;
//    scanf("%d", &N);
//    int arr[50] = { 0 };
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d ", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%d", sum);
//    return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
#include<stdio.h>
//非递归
int Fibonacci1(num)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while ((num--)>2)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
//递归
int Fibonacci2(num)
{
    if (num <= 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci2(num - 1) + Fibonacci2(num - 2);
    }
}
int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("非递归第%d位斐波那契数是：%d\n", num,Fibonacci1(num));
    printf("递归第%d位斐波那契数是：%d\n", num, Fibonacci2(num));
    return 0;
}

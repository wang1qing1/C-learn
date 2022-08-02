#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i+=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	int num = 15;
//	int count = 0;  //计数
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//


//使用指针打印数组内容
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//	int* parr = NULL;
//	for (parr = arr; parr < arr + sz; parr++)
//	{
//		printf("%d ", *parr);
//	}
//	return 0;
//}

//void rotate(char* str)
//{
//	char *pstr = str;
//	while ((*pstr) != '\0')
//	{
//		pstr++;
//	}
//	int count = pstr - str;
//	if (count > 1)
//	{
//		char ch = *str;
//		*str = *(str + count - 1);
//		*(str + count - 1) = '\0';
//		rotate(str+1);
//		*(str + count - 1) = ch;
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	char str[10000];
//	scanf("%[^\n]", str);
//	printf("%s\n", str);
//	char* pstr = str;
//	while ((*pstr) != '\0')
//	{
//		pstr++;
//	}
//	int count = pstr - str;
//	printf("%d \n", count);
//	rotate(str);
//	printf("%s", str);
//	return 0;
//}

//打印菱形
//      *
//     ***
//    *****
//   *******
//  *********
//   *******
//    *****
//     ***
//      *
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <=n/2+1 ; i++)
//	{
//		int j = 0;
//		for(j=1;j<=n/2+1-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n / 2; i >= 1; i--)
//	{
//		int j = 0;
//		for (j = 1; j <= n / 2 + 1  - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//水仙花数
//#include<stdio.h>
//int get_num_count(int num)
//{
//	int count = 1;
//	while (num / 10)
//	{
//		count++;
//		num /= 10;
//	}
//	return count;
//}
//
//int get_power_num(int num, int power)
//{
//	int sum = 0;
//	while (num)
//	{
//		int sz = 1;
//		int a = num % 10;
//		int i = 0;
//		for (i = 1; i <= power; i++)
//		{
//			sz *= a;
//		}
//		sum += sz;
//		num /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = get_num_count(i);
//		if (i == get_power_num(i, count))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
#include<stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	int ca = a;
	int sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		sum += a;
		a *= 10;
		a += ca;
	}
	printf("%d ", sum);
	return 0;
}
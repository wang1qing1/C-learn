#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1000; i <= 2000; i++)
//    {
//        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//        {
//            printf(" %d ", i);
//        }
//    }
//   /* printf("\n");
//
//    for (int j = 1004; j <= 2000; j+=4)
//    {
//        printf(" %d ", j);
//    }*/
//    return 0;
//}

//int main()
//{
//    char str1[30] = { 0 };
//    char str3[30] = "12345";
//    char str2[] = "abcdef hij";
//    strcpy(str1, str2);
//    strcat(str3, str2);
//    printf("%s\n", str1);
//    printf("%s", str3);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>

//int main()
//{
//    
//    char str2[] = "abcdef hij";
//    memset(str2, 'w', sizeof(char) * 4);
//    printf("str2:%s\n", str2);
//    return 0;
//
//}

//#include <stdio.h>
////实现成函数，但是不能完成任务
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////正确的版本
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//

//自定义乘法口诀表
//void table(int n)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-5d", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("\n");
//	table(input);
//
//	return 0;
//}
//
//

//函数实现交换两个数
//#include<stdio.h>
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//    *pa = *pb;
//	*pb = tmp;
//}
//int main()
//	scanf("%d %d", &a, &b);
//	printf("交换前：%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//int leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int tmp=leap_year(year);
//	if (1 == tmp)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int prime(int num)
{
	int j = 0;
	int sign = 1;
	for (j = 2; j <= sqrt(num); j++)
	{
		if (num % j == 0)
		{
			sign = 0;
		}
	}
	return sign;
}
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int sign=prime(i);
		if (sign == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
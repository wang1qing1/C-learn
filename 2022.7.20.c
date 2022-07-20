#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b && b >= c)
//	{
//		printf("%d %d %d", a,b,c);
//	}
//	else if (a >= c && c >= b)
//	{
//		printf("%d %d %d", a, c, b);
//	}
//	else if (c >= a && a >= b)
//	{
//		printf("%d %d %d", c, a, b);
//	}
//	else if (c >= b && b >= a)
//	{
//		printf("%d %d %d", c, b, a);
//	}
//	else if (b >= a && a >= c)
//	{
//		printf("%d %d %d", b, a,c);
//	}
//	else if (b >= c && c >= a)
//	{
//		printf("%d %d %d", b, c, a);
//	}
//	return 0;
//}
//int main()
//{
//	int i , j ;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i/2; j++)
//		{
//			int tmp=i % j;
//			if (tmp == 0)
//			{
//				break;
//			}
//	    }
//		if (j > i/2)
//		{
//			printf("%d ", i);
//		}
//    }
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0; 
//    for (i = 1000; i <= 2000; i++) 
//    {
//        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//        {
//            printf("%d ", i);  
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    int max = a > b ? a : b;
//    int sma = a < b ? a : b;
//    int tmp = max % sma;
//    while (tmp)
//    {
//        max = sma;
//        sma = tmp;
//        tmp = max % sma;
//    }
//    printf("%d ", sma);
//    
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1; a <= 9; a++)
//    {
//        for (b = 1; b <= a; b++)
//        {
//            printf("%d*%d=%-2d ", b, a, a * b);
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}
#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d ", max);
    return 0;
}




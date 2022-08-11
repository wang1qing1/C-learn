#define _CRT_SECURE_NO_WARNINGS 1
//
//* * * * * 
//*#######*
//*       *
//*       *
//* * * * *
// 
// 
//
//#include<stdio.h>
//int main()
//{
//	int h = 0;
//	while (scanf("%d", &h) == 1)
//	{
//		int i = 0;
//		for (i = 1; i <= h; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//		for (i = 1; i <= h - 2; i++)
//		{
//			printf("*");
//			int j = 0;
//			for (j = 1; j <= (h - 2) * 2 + 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		for (i = 1; i <= h; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return  0;
//}


#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[51];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num = 0;
    scanf("%d", &num);
   // arr[n] = num;
    int tmp = 1;
    for (i = 0; i < n; i++)
    {
        if (num < arr[i])
        {
            tmp = 0;
            int j = 0;
            for (j = n; j >= i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = num;
            break;
        }
    }
    if (tmp)
    {
        arr[n ]= num;
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//演示实例
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}
////演示实例
#define N_VALUES 5
#include <stdio.h>
//int main()
//{
//	
//	float values[N_VALUES];
//	float* vp;
////指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{	
//		*vp++ = 0;
//	}
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d ", num);
//
//
//}
//

//调整数组使奇数全部都位于偶数前面。
//void odd_even(int* arr,int sz)
//{
//	int* odd = arr;
//	int* even = arr+1;
//	while (even < arr + sz&&odd< arr + sz)
//	{
//		if ((*odd) % 2 == 0)
//		{
//			while ((*(even)) % 2 !=1)
//			{
//				if(even < arr + sz)
//					even++;
//				else
//				{
//					return;
//				}
//			}
//			int tmp = *odd;
//			*odd = *even;
//			*even = tmp;
//			odd++;
//		}
//		else
//		{
//			odd++;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	odd_even(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//模拟实现strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* arr,const char *str2)
//{
//	char* ret = arr;
//	assert(arr&&str2);
//	while (*(arr++) = *(str2++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[10] = "QQQQQQQQQ";
//	char str2[10] = "WWWW";
//	char* str = my_strcpy(str1, str2);
//	printf("%s",str );
//	return 0;
//}
////模拟实现strlen
//#include<stdio.h>
//#include<assert.h>
//int  my_strlen(const char *str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str1[] = "QQQQQQQQQ";
//	
//	int sz = my_strlen(str1);
//	printf("%d",sz );
//	return 0;
//}


#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1])
    {
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                printf("unsorted");
                return 0;
            }
        }
    }
   if(arr[0] < arr[1])
    {
       for (i = 0; i < n - 1; i++)
       {
           if (arr[i] > arr[i + 1])
           {
               printf("unsorted");
               return 0;
           }
       }
    }
    
    
    printf("sorted");
    return 0;
}

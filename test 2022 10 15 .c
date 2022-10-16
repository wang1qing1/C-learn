#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//enum MyEnum
//{
//	Legal,   //合法。
//	Unlegal  //非法
//};
//enum MyEnum ret = Unlegal;
//int my_atoi(const char *str)
//{
//	if (str == NULL)
//	{
//		assert(str);
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	int i = 1;
//	if (*str == '+')
//	{
//		str++;
//	}
//	if (*str == '-')
//	{
//		i = -1;
//		str++;
//	}
//	long long num = 0;
//	while (*str)
//	{
//		if (*str >= '0' && *str <= '9')
//		{
//			num = num * 10 + i * ((*str) - '0');
//			if (num > INT_MAX || num < INT_MIN)
//			{
//				return 0;
//			}
//			str++;
//		}
//		else
//		{
//			return 0;
//		}
//		
//	}
//	ret = Legal;
//	return (int)num;
//}
//
//int main()
//{
//	int a=my_atoi("-123");
//	if (ret == Legal)
//	{
//		printf("合法转换:%d\n", a);
//	}
//	else
//	{
//		printf("非法转换\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3,4,5,6 };
//	int* arr1 = (int*)calloc(10000, sizeof(arr[0]));
//	int num = sizeof(arr) / sizeof(arr[0]);
//	//值变索引
//	//for (int i = 0; i < num; i++)
//	//{
//	//	arr1[arr[i]]++;
//	//}
//	//for (int i = 0; i < num; i++)
//	//{
//	//	if (arr1[arr[i]] == 1)
//	//	{
//	//		printf("%d ",arr[i]);
//	//	}
//	//}
//	int sum = 0;
//	for (int i = 0; i < num; i++)
//	{
//		sum ^= arr[i];
//	}
//	int flag = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((sum >> i) & 1) == 1)
//		{
//			flag = i;
//			break;
//		}
//	}
//	int dog1 = 0;
//	int dog2 = 0;
//	for (int i = 0; i < num; i++)
//	{
//		if (((arr[i] >> flag)&1) == 1)
//		{
//			dog1 ^= arr[i];
//		}
//		else
//		{
//			dog2 ^= arr[i];
//		}
//	}
//	printf("%d %d", dog1, dog2);
//	
//	return 0;
//}

//#define OFFSETOF(S,s) (int)(&(((S*)0)->s))
//
//struct S
//{
//	int a;
//	char b;
//	int c;
//};
//
//
//int main()
//{
//	printf("%d ", offsetof(struct S, a));
//	printf("%d ", offsetof(struct S, b));
//	printf("%d \n", offsetof(struct S, c));
//
//	printf("%d ", OFFSETOF(struct S, a));
//	printf("%d ", OFFSETOF(struct S, b));
//	printf("%d ", OFFSETOF(struct S, c));
//}


//#define SWAP(n1)  (((n1)&0xaaaaaaaa)>>1) + (((n1)&0x55555555)<<1)
//int main()
//{
//	//  10110101
//	//  01010101  &
//	//  00010101     奇数位、
//	//  
//	//  10110101
//	//  10101010  &
//	//  10100000
//	//  
//	//  00101010
//	//  01010000 +
//	//  01111010  swap
//	//  10110101  原数据
//	
//	int num1 = 5;
//
//	//   10101010 10101010 10101010 10101010
//	//      aa      aa         aa      aa
//	//
//	//   01010101 01010101 01010101 01010101
//	//     55        55       55       55
//	//   1111
//	int num=SWAP(num1);
//	printf("%d ", num);
//	return 0;
//}
//



#include"HHH.h"

int AA;
int main()
{
	printf("%d ", AA);

	return 0;
}
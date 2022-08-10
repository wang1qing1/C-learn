#define _CRT_SECURE_NO_WARNINGS 1
//10000000000000000000000000000000001  -1 源码
//11111111111111111111111111111111110  -1 反码
//11111111111111111111111111111111111  -1 补码
//11111111 char a=-1;
//a整形提升
//11111111111111111111111111111111111 补码
//11111111111111111111111111111111110 反码
//10000000000000000000000000000000001 源码
// %d   ->    -1
//
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//杨氏矩阵
//#include<stdio.h>
//int main()
//{
//	int arr[6][6] = { {10,11,12,13,14,15},
//					  {20,21,22,23,24,25},
//					  {30,31,32,33,34,35},
//					  {41,42,43,45,46,47},
//					  {53,54,55,56,57,59},
//					  {58,65,66,67,68,69} };
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int x = 0;
//	int y = 5;
//	while (x>=0&&y<=5)
//	{
//		if (arr[x][y] < num)
//		{
//			x++;
//		}
//		else if (arr[x][y] > num)
//		{
//			y--;
//		}
//		else
//		{
//			printf("找到了，x=%d,y=%d\n", x, y);
//			break;
//		}
//	}
//	return 0;
//}
//字符串左旋
//方法一：
//#include<stdio.h>
//void rotate(char* str1, char* str2)
//{
//	char* left = str1;
//	char* right = str2;
//	while (left < right)
//	{
//		char ch = *left;
//		*left = *right;
//		*right = ch;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "ABCDEF";
//	int n = strlen(str);
//	int k = 0;
//	scanf("%d", &k);
//	rotate(str,str+k-1);
//	rotate(str + k, str + n - 1);
//	rotate(str, str + n - 1);
//	printf("%s", str);
//	return 0;
//}


//字符串旋转结果
#include<stdio.h>
int find(char* str1, const char* str2)
{
	char str1_str1[1000];
	strcpy(str1_str1, str1);
	strcat(str1_str1, str1);
	int n = strlen(str1);
	return strstr(str1_str1, str2);
}
int main()
{
	char str[] = "ABCDEFG";
	char str1[100] = { 0 };
	printf("原串:%s\n",str);
	printf("旋转:");
	gets(str1);
	int Find=find(str, str1);
	if (Find == 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}
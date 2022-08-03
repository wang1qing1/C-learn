#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char* p = "hello bit.";
//	printf("%s\n", p);
//	return 0;
//}
//
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf(" %s\n ", (*p).name); 
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18} };
//   
//    fun(students + 1);
//    return 0;
//}
//
//
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int count = m;
//	int empty = m;
//	while (empty>=2)
//	{
//		count += empty / 2;
//		empty = (empty / 2 +empty%2);
//	}
//	printf("%d", count);
//	return 0;
//}


//变种水仙花
#include<stdio.h>
int get_num_Lily(int num)
{
	int num1 = num;
	int n = 1;
	int sum = 0;
	while (num1/10)
	{
		n++;
		num1 /= 10;
	}
	int i = 0;
	for (i = 1; i <= n-1; i++)
	{
		int sz = 1;
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			sz *= 10;
		}
		sum += ((num / sz) * (num % sz));
	}
	return sum;
}
int main()
{
	int i = 0;
	for (i = 0; i<= 10000; i++)
	{
		int num=get_num_Lily(i);
		if (num == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
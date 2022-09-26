#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}
//void test()
//{
//    int i = 0;
//    int* p = (int*)malloc(10 * sizeof(int));
//    if (NULL == p)
//    {
//        exit(EXIT_FAILURE);
//    }
//    for (i = 0; i <= 10; i++)
//    {
//        *(p + i) = i;//当i是10的时候越界访问
//    }
//    free(p);
//}
//void test()
//{
//	int* p = (int*)malloc(sizeof(int)*10);
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*p = i;
//			p++;
//		}
//	}
//	else
//	{
//		perror("malloc");
//	}
//	
//	
//	free(p);//p不再指向动态内存的起始位置
//}





//void test()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}
void test()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}
int main()
{
	test();
	while (1);
}
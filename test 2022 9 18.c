#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////参数设计：dest->目标空间   source->原数据空间  num->拷贝大小(单位：字节)；  
//void* my_memmove(void*dest,const void*source,size_t num)
//{
//	void* ret = dest;
//	assert(dest && source);
//	//如果目标的空间在原数据的前面，那就从前往后拷贝。
//	if (dest < source)
//	{
//		while (num--)
//		{
//			*((char*)dest) = *((char*)source);
//			dest = (char*)dest + 1;
//			source = (char*)source + 1;
//		}
//	}
//	//如果目标空间在原数据的后面，那么就从后往前拷贝。
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)source + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	print(arr, 10);
//	//将3 4 5 6 7 拷贝到 1 2 3 4 5
//	my_memmove(arr , arr+2, 20);
//	print(arr, 10);
//}

////结构体声明
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//};
//
////代码1
//struct Node
//{
//	int data;
//	struct Node* next;
//};
////如果加上 typedef 是不是就可以这样写呢? 
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
////这样写代码是不行的
//
////解决方案：
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char ID[20];
//};
//
//
//
////int main()
////{
////
////	//按照结构体顺序初始化变量
////	struct Stu stu2 = { "ikun",20,"JNTM123" };
////	//自定义顺序初始化变量
////	struct Stu stu1 = { .ID = "CZU123",.age = 19,.name = "张三" };
////
////	return 0;
////}


struct S1	
{
	char c1;
	int i;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int i;
};
int main()
{
	printf("%d\n", sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
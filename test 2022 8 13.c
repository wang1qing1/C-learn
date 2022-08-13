#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Print(double* arr, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		printf("%.1LF ", arr[i]);
//	}
//	printf("\n");
//}
//void BubbleSort(double* arr, int length)
//{
//	for (int i = 0; i < length - 1; i++)
//	{
//		for (int j = 0; j < length - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				double temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	double arr[] = { 12.2,65.3,84.5,62.6,34.7,82.9,100.5,45.6 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, length);
//	Print(arr, length);
//
//
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//
//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//qsort

//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//int com(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void Print_struct(Stu* stu, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%s:%d ", stu[i].name, stu[i].age);
//	}
//	printf("\n");
//}
//
//Print_int(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void test1_int()
//{
//	int arr[] = { 10,23,84,30,9,64,100 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com);
//	Print_int(arr, sz);
//}
//int com_struct_age(const void* e1, const void* e2)
//{
//	return ((Stu*)e1)->age - ((Stu*)e1)->age;
//}
//int com_struct_name(const void* e1, const void* e2)
//{
//	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
//}
//void test2_struct()
//{
//	
//	Stu stu[] = { {"LuiBei",30},{"ZhangFei",32},{"GuanYu",34} };
//	int sz = sizeof(stu) / sizeof(stu[0]);
//	qsort(stu, sz, sizeof(stu[0]), com_struct_name);
//	Print_struct(stu, sz);
//	qsort(stu, sz, sizeof(stu[0]), com_struct_age);
//	Print_struct(stu, sz);
//}
//int main()
//{
//	test1_int();
//	test2_struct();
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Stu
{
	char name[20];
	int age;
}Stu;
void Print_struct_name(Stu* stu, int sz)
{
	int i = 0;
	printf("姓名首字母排序:");
	for (i = 0; i < sz;i++)
	{
		printf("%s:%d ", stu[i].name, stu[i].age);
	}
	printf("\n");
}
void Print_struct_age(Stu* stu, int sz)
{
	int i = 0;
	printf("年龄大小排序:");
	for (i = 0; i < sz; i++)
	{
		printf("%s:%d ", stu[i].name, stu[i].age);
	}
	printf("\n");
}
void swap(char* buf1, char* buf2,size_t sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char tmp = *(buf1+i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}
void super_bubble_sort(void* Base, size_t num, size_t size, int (*com)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (com((char*)Base + j * size, (char*)Base + (j + 1) * size) > 0)
			{
				swap((char*)Base + j * size, (char*)Base + (j + 1) * size, size);
			}
		}
	}
}
int com_struct_name(const void* e1, const void* e2)
{
	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
}
int com_struct_age(const void* e1, const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}
void test_struct()
{
	Stu stu[] = { {"LuiBei",30},{"ZhangFei",32},{"GuanYu",34} };
	int sz = sizeof(stu) / sizeof(stu[0]);
	super_bubble_sort(stu, sz, sizeof(stu[0]), com_struct_name);
	Print_struct_name(stu, sz);
	super_bubble_sort(stu, sz, sizeof(stu[0]), com_struct_age);
	Print_struct_age(stu, sz);
}
int main()
{
	test_struct();
	return 0;
}
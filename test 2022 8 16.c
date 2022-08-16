#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int com(const void* e1,const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//int main()
//{
//	int arr[] = { 54 ,84,32,42,12,20,13,60,26 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前:");
//	Print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), com);
//	printf("排序后:");
//	Print_arr(arr, sz);
//	return 0;
//}
//Print_arr(char** arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//	printf("\n");
//}
//int com(void* e1, void* e2)
//{
//	return strcmp((char*)e1, (char*)e2);
//}
//swap(char* ch1, char* ch2, size_t sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		char ch = *(ch1 + i);
//		*(ch1 + i) = *(ch2 + i);
//		*(ch2 + i) = ch;
//	}
//}
//void qsort1(void* arr, size_t num, size_t sz, int (*com)(const void*,const void*))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (com((char*)arr + j * sz, (char*)arr + (j + 1) * sz)>0)
//			{
//				swap((char*)arr + j * sz, (char*)arr + (j + 1) * sz, sz);
//			}
//		}
//	}
//}

//int main()
//{
//	char* arr[] = { "bcde" ,"abcd","cdef","defg" };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前:");
//	Print_arr(arr, num);
//	qsort(arr, num, sizeof(arr[0]), com);
//	printf("排序后:");
//	Print_arr(arr, num);
//	return 0;
//}

//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pfun
//	void (*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//指向函数指针数组pfunArr的指针ppfunArr
//	void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    int count_Z = 0;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        int num = 0;
//        scanf("%d", &num);
//        if (num < 0)
//        {
//            count++;
//        }
//        else if (num > 0)
//        {
//            sum += num;
//            count_Z++;
//        }
//    }
//    if (count_Z > 0)
//        printf("%d %.1lf", count, sum * 1.0 / count_Z);
//    else
//    {
//        printf("%d %.1f", count, 0);
//    }
//    return 0;
//}
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    // write code here
    int left = 0;
    int right = rotateArrayLen - 1;
    while (right - left > 1)
    {
        int mid = (left + right) / 2;
        if (rotateArray[mid] >= rotateArray[left]
            && rotateArray[mid] >= rotateArray[right])
        {
            left = mid;
        }
        else if (rotateArray[mid] <= rotateArray[left]
            && rotateArray[mid] <= rotateArray[right])
        {
            right = mid;
        }
    }
    if (rotateArray[left] < rotateArray[right])
    {
        return rotateArray[left];
    }
    else
    {
        return rotateArray[right];
    }

}
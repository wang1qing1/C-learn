#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr)); 
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}


//int main()
//{
//
//	int a = 0;
//	char ch = 0;
//	int arr[3] = { 0 };
//	int* pa = &a;
//	char* pc = &ch;
//	int(*parr)[3] = &arr;
//	printf("pa=%p,pa+1=%p\n", pa, pa + 1);
//	printf("pc=%p,pc+1=%p\n", pc, pc + 1);
//	printf("parr=%p,parr+1=%p\n", parr, parr + 1);
//	
//	return 0;
//}
//int main()
//{
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//sizeof(a)数组名代表整个数组，
//	//代表求整个数组的大小。
//	printf("%d\n", sizeof(a[0][0]));
//	//代表是求第一个数组元素的大小。
//	printf("%d\n", sizeof(a[0]));
//	//a是二维数组的数组名，是数组的第一行的地址，
//	// a[0]相当于*(a+0),找到了数组第一行。
//	//所以sizeof(a[0])算的是二维数组第一行的大小。
//	printf("%d\n", sizeof(a[0] + 1));
//	//a[0]其实就是二维数组第一行的数组名，
//	// (a[0]+1)就是一个指向二维第一行第二个元素的指针。
//	//算的是一个指针的大小。
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//在(a[0]+1)的基础上在解引用，
//	//就是二维第一行第二个元素。
//	printf("%d\n", sizeof(a + 1));
//	//a是一个指向第一行数组的指针，
//	// a+1就是一个指向第二行数组的指针。
//	//算的是一个指针的大小
//	printf("%d\n", sizeof(*(a + 1)));
//	//(a+1)是指向二维数组第二行的地址，
//	// 解引用以后就是找到了第二行
//	//所以算的是第二行的大小
//	printf("%d\n", sizeof(&a[0] + 1));
//	//&a[0]取出第一行的地址，
//	//等价于数组名 a ，所以等价于 a + 1
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//等价于*(a+1)
//	printf("%d\n", sizeof(*a));
//	//等价于a[0]
//	printf("%d\n", sizeof(a[3]));
//	//等价于 *(a+3),虽然数组没有第四行，
//	// 但是*(a+3)类型能够确定，
//	// 就是 int [4],就是整形四元素数组。
//
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}
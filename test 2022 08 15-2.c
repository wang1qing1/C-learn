#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}

//#include <stdio.h>
//int add(int a,int b)
//{
//	return a + b;
//}
//int main()
//{
//	int (*pfun)(int, int) = add;
//	int sum = add(3, 5);
//	int sum1=(* pfun)(3, 5);
//	int sum2 = pfun(3, 5);
//	printf("sum=%d\nsum1=%d\nsum2=%d",sum,sum1, sum2);
//	return 0;
//}
//// 
//
//int main()
//{
//	//����1
//	(*(void (*)())0)();
//	//����2
//	void (*signal(int, void(*)(int)))(int);
//	int (*  )(int, int) = add;
//	return 0;
//}
//#include<stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//void mune()
//{
//	printf("**********************************\n");
//	printf("*********1.�ӷ�    2.����*********\n");
//	printf("*********      0.exit     ********\n");
//	printf("**********************************\n");
//}
//int main()
//{
//	int (*arrPfun[3])(int, int) = { 0,add,sub };
//	int input;
//	do
//	{
//		mune();
//		printf("������������ͣ�>");
//		scanf("%d", &input);
//		if (input > 0 && input < 3)
//		{
//			printf("\n����������������:>");
//			int a = 0, b = 0;
//			scanf("%d %d", &a, &b);
//			int ret = arrPfun[input](a, b);
//			printf("%d \n", ret);
//		}
//		else if (input >= 3)
//		{
//			printf("�������������ѡ����.\n");
//		}
//		
//	} while (input);
//	
//	return 0;
//}
#include<stdio.h>
int main()
{
	void qsort(void* base, size_t num, size_t size,int (*compar)(const void*, const void*));

	return 0;
}
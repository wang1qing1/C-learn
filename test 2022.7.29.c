#define _CRT_SECURE_NO_WARNINGS 1

//��ʹ����ʱ���������������ͱ�����ֵ
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}


//��������1�ĸ���
//#include<stdio.h>
//int NumberOf1(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count=NumberOf1(num);
//	printf("%d", count);
//	return 0;
//}

//��������������λ��ͬ����
#include<stdio.h>
int Number_different(int num1,int num2)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((num1 & (1 << i)) != (num2 & (1 << i)))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1,&num2);
	int count= Number_different(num1,num2);
	printf("%d", count);
	return 0;
}




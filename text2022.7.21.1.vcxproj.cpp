#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//分数求和
//int main()
//{
//	int i = 0,k = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=  k * 1.0 / i;
//		k = -k;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//1--100之间9出现的次数；
int main()
{
	int count = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9  )
		{
			count++;
		}
		if(i % 10 == 9)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}




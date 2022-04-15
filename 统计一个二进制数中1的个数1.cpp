#include<stdio.h>
//int wq(unsigned int a)
//{
//	int i, count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a % 2 == 1)
//			count++;
//		a /= 2;
//	}
//	return count;
//}


 
//int wq(int a)
//{
//	int i, count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
// }



int wq(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}
int main()
{
	int a;
	printf("请输入一个数字：");
	scanf_s("%d", &a);
	printf("共有%d个1",wq(a));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//汉诺塔问题
//int Hanoi(int num,char n1,char n2)
//{
//	static int count = 0;
//	if (num == 1)
//	{
//		printf("%c->%c ", n1, n2);
//		count++;
//	}
//	else
//	{
//		
//		Hanoi(num - 1,'A','B');
//		printf("%c->%c ",'A','C');
//		count++;
//		Hanoi(num - 1, 'B', 'C');
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入汉诺塔层数:>");
//	scanf("%d", &num);
//	printf("完成%d层的汉诺塔的方法是：\n", num);
//	int sum=Hanoi(num,'A','C');
//	printf("\n");
//	printf("所以完成%d层的汉诺塔需要%d步。\n",num, sum);
//	return 0;
//}
//


//青蛙跳台阶
int frog_jump(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else if (num == 2)
	{
		return 2;
	}
	else
	{
		return frog_jump(num - 1) + frog_jump(num - 2);
	}
}
int main()
{
	int num = 0;
	printf("请输入台阶数:>");
	scanf("%d", &num);
	int count=frog_jump(num);
	printf("%d层台阶青蛙一共有%d种跳法。\n ",num, count);
}
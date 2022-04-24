#include<stdio.h>
void mean()
{
	printf("**      菜单      **\n");
	printf("**1.加法    2.减法**\n");
	printf("**3.乘法    4.除法**\n");
	printf("**     0.退出     **\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	mean();
	int x = 0, y = 0,i;
	do
	{
		printf("请输入运算类型：\n");
		scanf("%d", &i);
		if (i >= 1 && i <= 4)
		{
			printf("请输入两个数：\n");
			scanf("%d %d", &x, &y);
			int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
			printf("结果是：%d\n", p[i](x, y));
		}
		else if (i == 0)
		{
			break;
		}
		else
			printf("选择错误\n");
	} while (i);
	return 0;
}
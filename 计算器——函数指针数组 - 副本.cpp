#include<stdio.h>
void mean()
{
	printf("**      �˵�      **\n");
	printf("**1.�ӷ�    2.����**\n");
	printf("**3.�˷�    4.����**\n");
	printf("**     0.�˳�     **\n");
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
		printf("�������������ͣ�\n");
		scanf("%d", &i);
		if (i >= 1 && i <= 4)
		{
			printf("��������������\n");
			scanf("%d %d", &x, &y);
			int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
			printf("����ǣ�%d\n", p[i](x, y));
		}
		else if (i == 0)
		{
			break;
		}
		else
			printf("ѡ�����\n");
	} while (i);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ŵ������
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
//	printf("�����뺺ŵ������:>");
//	scanf("%d", &num);
//	printf("���%d��ĺ�ŵ���ķ����ǣ�\n", num);
//	int sum=Hanoi(num,'A','C');
//	printf("\n");
//	printf("�������%d��ĺ�ŵ����Ҫ%d����\n",num, sum);
//	return 0;
//}
//


//������̨��
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
	printf("������̨����:>");
	scanf("%d", &num);
	int count=frog_jump(num);
	printf("%d��̨������һ����%d��������\n ",num, count);
}
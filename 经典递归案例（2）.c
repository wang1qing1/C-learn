#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////��ŵ������
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



//������̨��
#include<stdio.h>
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

//#include<stdio.h>
//void print(int num)
//{
//	if (num < 10)
//	{
//		printf("%d ", num);
//	}
//	else
//	{
//		print(num / 10);
//		printf("%d ", num % 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

#include<stdio.h>
//int Strlen(const char* str)
//{
//    //strָ����ַ���'\0';�ʹ����Ѿ������ַ����Ľ�β������ 0 
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    //strָ����ַ�����'\0'; �ʹ����������� 1����������֣�
//    //�ټ��Ϻ�����ַ������ǣ��ܳ����ˡ�
//    else
//    {
//        return 1 + Strlen(str + 1);
//    }
//
//}
//int main()
//{
//    char* p = "abcdef";
//    int len = Strlen(p);
//    printf("%d\n", len);
//    return 0;
////}
//#include<stdio.h>
//int fib(int n)
//{
//	int result;
//	int pre_result;
//	int next_older_result;
//	result = pre_result = 1;
//		while (n > 2)
//		{
//			n -= 1;
//			next_older_result = pre_result;
//			pre_result = result;
//			result = pre_result + next_older_result;
//		}
//	return result;
//}
//int main()
//
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = fib(n);
//	printf("��%dλ쳲���������%d\n",n, num);
//	return 0;
//}
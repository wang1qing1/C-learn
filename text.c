#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����׳˵ĺ�
//int main()
//{
//	int i = 0;
//	int n = 0; int sum1 = 1; int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum1 *= i;
//		sum += sum1;
//	}
//	printf("%d", sum);
//	return 0;
//}

//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(int);
//	int lift = 0;
//	int right = size - 1;
//	int key = 0;
//	scanf("%d", &key);
//	while (lift <= right)
//	{
//		int mid = (lift + right)/2;
//		if (arr[mid] < key)
//		{
//			lift = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:>%d\n", mid);
//			break;
//		}
//	}
//	if (lift > right)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}
// 

//
//��������Ϸ
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void mnue()
{
	printf("**********************************\n");
	printf("*******1.play       0.exit********\n");
	printf("**********************************\n");
}
void text(int count)
{
	if (count <= 3 && count > 0)
	{
		printf("С���ӣ�ţ��ѽ���Ų���%d�ξͲ¶��ˡ�\n", count);
	}
	else if (count <= 5 && count > 3)
	{
		printf("С���ӣ�����ѽ���µ�ͦ�������%d�ξͲ¶��ˡ�\n", count);
	}
	else if (count > 5 && count <= 10)
	{
		printf("С���ӣ�������ѽ,һ������%d�Ρ�\n", count);
	}
	else
	{
		printf("С�������ⲻ��ѽ����%d�βŲµ���\n", count);
	}
}
void game()
{
	int tmp=rand()%100+1;
	int count = 0;
	int num = 0;
	while (1)
	{
		printf("�������:>\n");
		count++;
		scanf("%d", &num);
		if (num > tmp)
		{
			printf("�´���\n");
		}
		else if (num < tmp)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
	text(count);
	return;
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mnue();
		printf("������ѡ��;>(1/0)");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�Ƴ���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	
	return 0;
}
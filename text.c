#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算阶乘的和
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

//二分查找
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
//			printf("找到了，下标是:>%d\n", mid);
//			break;
//		}
//	}
//	if (lift > right)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
// 

//
//猜数字游戏
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
		printf("小伙子，牛逼呀！才猜了%d次就猜对了。\n", count);
	}
	else if (count <= 5 && count > 3)
	{
		printf("小伙子，厉害呀，猜的挺快嘛，猜了%d次就猜对了。\n", count);
	}
	else if (count > 5 && count <= 10)
	{
		printf("小伙子，还可以呀,一共猜了%d次。\n", count);
	}
	else
	{
		printf("小伙子你这不行呀！猜%d次才猜到。\n", count);
	}
}
void game()
{
	int tmp=rand()%100+1;
	int count = 0;
	int num = 0;
	while (1)
	{
		printf("请猜数字:>\n");
		count++;
		scanf("%d", &num);
		if (num > tmp)
		{
			printf("猜大了\n");
		}
		else if (num < tmp)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
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
		printf("请输入选项;>(1/0)");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("推出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	
	return 0;
}
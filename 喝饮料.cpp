#include<stdio.h>
//一元一个饮料，两个空瓶子可以换一瓶饮料，问一共可以喝多少瓶？
int main()
{
	int money = 0,sum=0;
	scanf_s("%d", &money);
	int kongping = money;
	sum = money;
	while (kongping >= 2)
	{
		sum+= kongping / 2;
		kongping = kongping / 2 + kongping % 2;
	}
	printf("sum=%d",sum);
	return 0;
}
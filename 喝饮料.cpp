#include<stdio.h>
//һԪһ�����ϣ�������ƿ�ӿ��Ի�һƿ���ϣ���һ�����Ժȶ���ƿ��
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
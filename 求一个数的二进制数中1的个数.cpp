#include<stdio.h>
int main()
{
	int a,i,count=0;
	printf("������һ������\n");
	scanf_s("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}
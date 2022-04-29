#include<stdio.h>
int sushu(int a)
{
	int i;
	for (i = 2; i <=  a/ 2; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int j;
	for (j = 100; j <= 200; j++)
	{
		if (sushu(j) == 1)
		{
			printf("%d\t", j);
		}
	}
	return 0;
}
#include<stdio.h>
#define a 3
int main()
{
	int i, j,n,sum=0,k;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		k = 0;
		for (j = 1; j <= i; j++)
		{
			k =k*10+a;
		}
		sum += k;
	}
	printf("%d", sum);
	return 0;
}
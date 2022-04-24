#include<stdio.h>
double wq(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k < 0)
	{
		return 1 / wq(n, -k);
	}
	else
		return n * wq(n, k - 1);
}
int main()
{
	int n, k;
	scanf_s("%d %d", &n, &k);
	printf("%lf", wq(n, k));
	return 0;
}
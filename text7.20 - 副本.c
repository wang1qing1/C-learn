#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	int MAX2 = 0, MAX3 = 0;
	scanf("%d %d %d", &a, &b, &c);
	int MAX1=a > b ? a > c ? a : c : b > c ? b : c;
	if (MAX1 == a)
	{
		if (b > c)
		{
			MAX2 = b;
			MAX3 = c;
		}
		else
		{
			MAX2 = c;
			MAX3 = b;
		}
	}
	else if (MAX1 == b)
	{
		if (a > c)
		{
			MAX2 = a;
			MAX3 = c;
		}
		else
		{
			MAX2 = c;
			MAX3 = a;
		}
	}
	else if (MAX1 == c)
	{
		if (a > b)
		{
			MAX2 = a;
			MAX3 = b;
		}
		else
		{
			MAX2 = b;
			MAX3 = a;
		}
	}
	printf("%d %d %d", MAX1, MAX2, MAX3);
	return 0;
}
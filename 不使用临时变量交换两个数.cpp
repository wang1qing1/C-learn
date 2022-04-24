#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNIN
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	a = 10;
	b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);

	return 0;

}
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
	
}
int main()
{
	long int ret,n;
	scanf_s("%ld", &n);
	ret = fib(n);
	printf("%ld", ret);
	return 0;
}
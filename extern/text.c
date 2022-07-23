#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
extern add(int a,int b);
int main()
{
	int sum = add(10, 20);
	printf("%d", sum);
	return 0;
}
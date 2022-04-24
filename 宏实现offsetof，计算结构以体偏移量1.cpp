#include<stdio.h>
#define  OFFSETOF(struct_name,number_name)  (int)(&(((struct_name*)0)->number_name))
struct test
{
	char a;
	int b;
	char c;
}s;
int main()
{
	printf("%d\n", OFFSETOF(struct test, a));
	printf("%d\n", OFFSETOF(struct test, b));
	printf("%d\n", OFFSETOF(struct test, c));

	return 0;
}
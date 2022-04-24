#include<stdio.h>
#include<string.h>
int fun(char* s,int m)
{
	int i;
	for (i = 0; i <= m/2; i++)
	{
		if (s[i] == s[m - i-1])
			return 1;
		else
			return 0;
	}
}
int main()
{
	char arr[30],k,n;
	gets_s(arr);
	n = strlen(arr);
	k = fun(arr,n);
	if (k == 1)
		printf("回文");
	else
		printf("不回文");
	return 0;
}
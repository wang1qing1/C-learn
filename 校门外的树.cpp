#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int L = 0, m = 0, i = 0, sum = 0;
	scanf("%d%d", &L, &m);
	int n = m;
	int arr[10001] = { 0 };
	int brr[10001] = { 0 };
	while (m--)
	{
		scanf("%d%d", &arr[i],&arr[i+1]);
		i += 2;
	}
	
	int asd = 0;     
	int j = 0;
	while (n--)
	{
		for (int i = arr[j]; i <= arr[j + 1]; i++)
		{
			brr[i] = 1;
		}
		j += 2;
	}
	for (int i = 0; i <= L; i++)
	{
		asd += brr[i];
	}
	printf("%d", L-asd+1);
	return 0;
}
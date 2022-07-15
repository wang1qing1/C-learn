#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


typedef struct stu
{
	int love;
	int i;
	int j;
}stu;
int com(int arr[50][50], int i, int j, int n, int m)
{
	int sum = arr[0][0];
	if (i + 1 < m && j + 1 < n)
	{
		stu* s = (stu*)malloc(sizeof(stu));
		if (arr[i][j + 1] > arr[i + 1][j])
		{
			s->love = arr[i][j + 1];
			s->i = i;
			s->j + 1;
		}
		else
		{
			s->love = arr[i + 1][j];
			s->i = i + 1;
			s->j;
		}
		sum = sum + s->love;
		com(arr, s->i, s->j, n, m);
	}
	return sum;
}
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int arr[50][50]={0};

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int sum = com(arr, 0, 0, n, m);
	printf("%d", sum);
	return 0;
}
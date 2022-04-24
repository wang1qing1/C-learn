#include<stdio.h>
#define N 5
#define M 5
int fun(int s[N][M])
{
	int i, j,sum=0;
	for(i=0;i<M;i++)
		for (j = 0; j < N; j++)
		{
			if ((i == 0) || (i == M - 1) || (j == 0) || (j == N - 1))
				sum += s[i][j];
		}
	return sum;
}
int main()
{
	int arr[N][M] = { {0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4} };
	int sum;
	sum = fun(arr);
	printf("%d", sum);
	return 0;
}
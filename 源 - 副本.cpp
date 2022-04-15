#include<stdio.h>
void fun(char  arr1[3][6], int k)
{
	int i, j, p, temp=0;
	for (p = 1; p <= k; p++)
		for (i = 0; i < 3; i++)
		{
			temp = arr1[i][0];//将每一行第一个保存，
			for (j = 0; j <4; j++)
				arr1[i][j] = arr1[i][j + 1];//后面的全部向前移动一格，
			arr1[i][4] = temp;//将原本的第一个元素，赋值给最后一位，
		}
}
int main()
{
	int j, a=0,i, n = 2;
	char arr[3][6] = { "abcde","abcde", "abcde" };
	printf("原来的数组为：\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%c\t", arr[i][j]);
		}
		printf("\n");

	}
	fun(arr, n);
	printf("现在的数组为：\n");
	for (j = 0; j <= 2; j++)
	{
		for (a = 0; a <= 4; a++)
		{
			printf("%c\t", arr[j][a]);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
void fun(char  arr1[3][6], int k)
{
	int i, j, p, temp=0;
	for (p = 1; p <= k; p++)
		for (i = 0; i < 3; i++)
		{
			temp = arr1[i][0];//��ÿһ�е�һ�����棬
			for (j = 0; j <4; j++)
				arr1[i][j] = arr1[i][j + 1];//�����ȫ����ǰ�ƶ�һ��
			arr1[i][4] = temp;//��ԭ���ĵ�һ��Ԫ�أ���ֵ�����һλ��
		}
}
int main()
{
	int j, a=0,i, n = 2;
	char arr[3][6] = { "abcde","abcde", "abcde" };
	printf("ԭ��������Ϊ��\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%c\t", arr[i][j]);
		}
		printf("\n");

	}
	fun(arr, n);
	printf("���ڵ�����Ϊ��\n");
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
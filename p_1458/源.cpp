#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
typedef struct Num
{
	float x;
	float y;
	float count;
}Num;
int main()
{
	int count = 0;
	int N = 0;
	scanf("%d", &N);
	Num* num = (Num*)malloc(sizeof(Num) * 10000);
	num[0].x = 0;
	num[0].y = 1;
	num[0].count = 0 / 1;
	count++;
	for (float i = 0; i <= N; i++)
	{
		for (float j = 0; j <= N; j++)
		{
			if (i / j <= 1)
			{
				int k = 0;
				for ( k = 0; k < count; k++)
				{
					if (num[k].count == i / j)
					{
						break;
					}
				}
				if (k == count)
				{
					num[count].x = i;
					num[count].y = j;
					num[count].count = i / j;
					count++;
				}
			}
		}
	}
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (num[j].count > num[i].count)
			{
				Num num0 = num[i];
				for (int k = i; k > j; k--)
				{
					num[k] = num[k - 1];
				}
				num[j] = num0;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d/%d\n", (int)num[i].x, (int)num[i].y);
	}

	return 0;
}

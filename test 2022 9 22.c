#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,1,2,2,3,4,4,5,5,6,6,7,7 };
	int num = 0;
	int sz = sizeof(arr) / sizeof(int);
	for (int i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}
	printf("%d", num);
	return 0;
}
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strncpy(char* str1,const char* str2, int num)
{
	assert(str1 && str2);
	char* ret = str1;
	while (num--)
	{
		*(str1) = *(str2);
		str1++;
		str2++;
	}
	return ret;
}
int main()
{
	int arr[] = { 1,1,2,2,3,4,4,5,5,6,6,7,7 };
	char str1[20] = "abcdefgijk";
	char* str2 = "XXXXX";
	
	puts(my_strncpy(str1, str2, 2));
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strncat(char* str1, const char* str2, int num)
{
	assert(str1 && str2);
	char* ret = str1;
	int len = strlen(str1);
	char *str = str1 + len;
	while (num--)
	{
		*str = *str2;
		str++;
		str2++;
	}
	return ret;
}
int main()
{

	int arr[] = { 1,1,2,2,3,4,4,5,5,6,6,7,7 };
	char str1[30] = "abcdefgijk";
	char* str2 = "XXXXX";
	puts(my_strncat(str1, str2, 8));
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

long long my_atoi(const char *str)
{

	assert(str);
	int weight = strlen(str)-1;
	long long sum = 0;
	while (*str)
	{
		sum += (( * str) - '0')* pow(10, weight);
		weight--;
		str++;
	}
	return sum;
}
int main()
{

	char* str[100];
	printf("ÊäÈëÊý×Ö×Ö·û£º>");
	gets(str);
	long long num = my_atoi(str);
	printf("%lld", num);
	return 0;
}
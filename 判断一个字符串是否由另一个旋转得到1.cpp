#include<stdio.h>
#include<string.h>
#include<assert.h>

void nixu(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tep = *left;
		*left = *right;
		*right = tep;
		left++;
		right--;
	}
}
void move(char* arr, int k)
{
	int len = strlen(arr);
	nixu(arr, arr + k - 1);
	nixu(arr + k, arr + len - 1);
	nixu(arr, arr + len - 1);
}
int left_move(char* arr,char*arr1)
{
	int len1 = strlen(arr);
	int len2 = strlen(arr1);
	if (len1 != len2)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i <= len1 - 1; i++)
	{
		 move(arr, 1);
		if (strcmp(arr,arr1)==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr[] = "abcdefhijk";
	char arr1[] = "cdefa";
	int ret=left_move(arr, arr1);
	if (ret == 1)
	{
		printf("找到了");
	}
	else
	{
		printf("没找到");
	}
	return 0;
}
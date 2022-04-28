#include<stdio.h>
#include<string.h>
void fun(char* arr1,int n)
{
	int i = 0, j = 0;
	while(arr1[i]!=0)
	{
		
		if (arr1[i] >= 'a' && arr1[i] <= 'z')
		{
			arr1[j] = arr1[i];	
			j++;
		}
		i++; 
	}
	arr1[j] = 0;
}
int main()
{
	int n = 0;
	char arr[20]={0};
	gets_s(arr);
	n = strlen(arr);
	fun(&arr[0], n);
	puts(arr);
	return 0;
}
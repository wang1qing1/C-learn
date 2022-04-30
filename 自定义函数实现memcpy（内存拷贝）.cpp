#include<stdio.h>
#include <iostream>
#include<assert.h>
void* my_memcpy(void* dest, const void* sour, int count)
{
	assert(dest && sour);
	void* ret = dest;
	char* arr1 = (char*)dest;
	char* arr2 = (char*)sour;
	while (count--)
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
		
	}
	return ret;
}
int main()
{
	int arr1[15] = { 1,2,3,4,5,6 };
	int arr2[15] = { 0 };
	//memcpy(arr2, arr1, sizeof(arr1[2])*3);
	my_memcpy(arr2, arr1, sizeof(arr1[2]) * 3);
	return 0;
}



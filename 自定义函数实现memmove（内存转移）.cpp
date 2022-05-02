#include<stdio.h>
#include <iostream>
//|[1][2][3][4][5][6][7][8][9][10]||
void* my_memmove(void* dest, void* sour, int count)
{
	void* ret = dest;
	char* str1 = (char*)dest;
	char* str2 = (char*)sour;
	if (str1 > str2)
	{
		while (count--)
		{
			*(str1 + count ) = *(str2 + count );
		}
	}
	else
	{
		while (count--)
		{
			*str1 = *str2;
			str1++;
			str2++;

		}
	}
	return ret;
}
int main()
{//               1,2,1,2,3,4,5,8,9,10
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//memmove(arr + 2, arr, sizeof(int)*5);
	my_memmove(arr + 2, arr, sizeof(int) * 5);
	return 0;
                     }
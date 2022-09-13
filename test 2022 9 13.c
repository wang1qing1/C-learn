#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void* my_memcpy(void* arr2, void* arr1, int size)
//{
//	void* str = arr2;
//	while (size--)
//	{
//		*(char*)arr2 = *(char*)arr1;
//		arr2 = (char*)arr2 + 1;
//		arr1 = (char*)arr1 + 1;
//	}
//	return str;
//}
//
//#include<stdio.h>
//#include<string.h>
//void* my_memmove(void*arr2,void*arr1,int size)
//{
//	void* str = arr2;
//	if (arr2 > arr1)
//	{
//		while (size--)
//		{
//			*((char*)arr2 + size) = *((char*)arr1 + size);
//		}
//	}
//	else
//	{
//		while (size--)
//		{
//			*(char*)arr2 = *(char*)arr1;
//			arr2 = (char*)arr2 + 1;
//			arr1 = (char*)arr1 + 1;
//		}
//	}
//	return str;
//
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
//	int arr2[20] = { 0 };
//	//memcpy(arr2, arr1, 12);
//	
//	my_memmove(arr1,arr1+2,20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char str[] = "wangqing at alibaba";
//	char* p = "alibaba";
//	char* pp = strstr(str, "at");
//	//·µ»Ø a µÄµØÖ·¡£
//	printf("%s\n", pp);
//
//
//	return 0;
//}
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 7);
//	puts(pch);
//	return 0;
//}

//int main()
//{
//	char str[] = "wangqing*hahhahha.hkaejhd;askhd.hgshda!kjshd";
//	char* p = "*;.!";
//	char strpp[100];
//	strcpy(strpp, str);
//	for (char* str1 = strtok(strpp, p); str1 != NULL; str1 = strtok(NULL, p))
//	{
//		printf("%s\n", str1);
//	}
//	printf("%s", str);
//	/*printf("%s\n", str1);
//	str1=strtok(NULL, p);
//	printf("%s\n", str1);*/
//
//	/*while (str1 != NULL)
//	{
//		puts(str1);
//		str1 = strtok(NULL, p);
//	}
//	int len = sizeof(str) / sizeof(char) - 1;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", str[i]);
//	}*/
//	/*printf("%c", '\0');*/
//
//	
//
//
//	return 0;
//}
#include<errno.h>
int main()
{
	FILE* pfile;
	pfile = fopen("test.txt", "r");

	if (pfile == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("successful\n");
	}

	return 0;
}
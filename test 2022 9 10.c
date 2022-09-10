#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//模拟实现库函数strlen
unsigned int my_strlen(const char* str)
{
	unsigned int count = 0;
	const char* s = str;

	while (*s != '\0')
	{
		s++;
	}
	return s - str;
}
int main()
{
	char str1[20] = "abcdefg";
	my_strlen(str1);
	printf("%d", my_strlen(str1));

	return 0;
}
//模拟实现

//char* my_strcpy(char*str1,const char *str2)
//{
//	assert(str1 && str2);
//	char* s = str1;
//	while (*s++ = *str2++)
//	{
//		;
//	}
//	return str1;
//}
//int main()
//{
//	char str1[20] = "abcdefg";
//	char str2[10] = "XXXX";
//	my_strcpy(str1,str2);
//	printf("%s", my_strcpy(str1, str2));
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int my_strcmp1(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}int my_strcmp2(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char str1[20] = "abcdefg";
//	char str2[10] = "abc";
//	my_strcmp2(str1, str2);
//	printf("%d", my_strcmp2(str1, str2));
//
//	return 0;
//}

//char* my_strcat(char *str1,const char *str2)
//{
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	while (*s1 != '\0')
//	{
//		s1++;
//	}
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	return str1;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int main()
//{
//
//	char str1[20] = "abcdefg";
//	char str2[10] = "XXX";
//	printf("%s", my_strcat(str1, str2));
//	
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strstr(const char *str1,const char *str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p !='\0')
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0'&& *s2!='\0' && *s1 == *s2)
//		{
//			s2++;
//			s1++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//
//	char str1[20] = "abccdefg";
//	char str2[10] = "cde";
//	printf("%s", my_strstr(str1, str2));
//
//	return 0;
//}
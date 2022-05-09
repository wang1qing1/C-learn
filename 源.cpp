#include<stdio.h>
#include<assert.h>
char* my_strstr( char* str1,  char* str2)
{
	assert(str1 && str2);
	char* s1 = str1;
	char* s2 = str2;
	char* cur = str1;
	if (*str2 == '\0')
	{
		return str1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abc";
	char*ret=my_strstr(arr1, arr2);
	if (ret != NULL)
	{
		printf("找到了\n");
		printf("%s", ret);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}
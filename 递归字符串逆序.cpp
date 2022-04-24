#include<stdio.h>
int my_strlen(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}
void wq(char s[])
{
	char t = s[0];
	int sz = my_strlen(s);
	s[0] = s[sz - 1];
	s[sz - 1] = '\0';
	if (my_strlen(s + 1) >= 2)
		 wq(s + 1);
		s[sz - 1] = t;
}
int main()
{
	char arr[30];
	gets_s(arr);
	wq(arr);
	puts(arr);
	return 0;
}
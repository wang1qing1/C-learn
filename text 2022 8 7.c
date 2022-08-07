#define _CRT_SECURE_NO_WARNINGS 1
//µ¹ÖÃ×Ö·û´®
#include<stdio.h>
#include<string.h>
//µ¹ÖÃ×Ö·û´®
//void fun() {
//	char arr[100];
//	int tmp = scanf("%s", arr);
//	if (tmp != EOF) {
//		fun();
//		printf("%s ", arr);
//	}
//}
//int main() {
//	fun();
//	return 0;
//}

//µ¹ÖÃ×Ö·û´®
//#include<stdio.h>
//#include<string.h>
//void reserve(char* lift, char* right)
//{
//	char* lift1 = lift;
//	char* right1 = right;
//	while (lift1 < right1)
//	{
//		char tmp = *lift1;
//		*lift1 = *right1;
//		*right1 = tmp;
//		lift1++;
//		right1--;
//	}
//}
//void updown(char *arr, int sz)
//{
//	char* lift = arr;
//	char* right = arr;
//	while (right<=arr+sz)
//	{
//		if (( *right) == ' ' || (*right) == '\0')
//		{
//			reserve(lift, right - 1);
//			right++;
//			lift = right;
//		}
//		else
//		{
//			right++;
//		}
//	}
//}
//int main() 
//{
//	char arr[101];
//	gets(arr);
//	int sz = strlen(arr);
//	updown(arr,sz);
//	reserve(arr, arr + sz - 1);
//	printf("%s", arr);
//	return 0;
//}

//×îÐ¡¹«±¶ÐÂ½â·¨
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = 1;
	while ((a * i) % b != 0)
	{
		i++;
	}
	printf("%d", a * i);
}

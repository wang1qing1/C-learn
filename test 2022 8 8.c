#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	char str[100];
//	//首先，scanf在接手字符串时，默认碰到空格就会结束，
//	//但是我们这里改变限制，改成遇见回车才结束。
//	scanf("%[^\n]", str);
//	printf("%s", str);
//
//	return 0;
//}

//int main()
//{
//	char str[100];
//	//首先，scanf在接手字符串时，默认碰到空格就会结束，
//	//但是我们这里改变限制，改成遇见回车才结束。
//	scanf("%[^\\]", str);
//	printf("%s", str);
//
//	return 0;
//}
//int main()
//{
//	char str[100];
//	//首先，scanf在接手字符串时，默认碰到空格就会结束，
//	//但是我们这里改变限制，改成遇见回车才结束。
//	scanf("%[^\*]", str);
//	printf("%s", str);
//
//	return 0;
//}
// 
//int main()
//{
//	char str[100];
//	//首先，scanf在接手字符串时，默认碰到空格就会结束，
//	//但是我们这里改变限制，改成遇见回车才结束。
//	scanf("%[^\?]", str);
//	printf("%s", str);
//
//	return 0;
//}

int main()
{
	//直到吸收完最后一个字符'\n'
	while (getchar() != '\n');
	int ch1 = 'a';
	ch1=getchar();
	printf("ch1 = %c\n", ch1);
	getchar();
	int ch2 = 'a';
	ch2 = getchar();
	printf("ch2 = %c\n", ch2);
	return 0;
}




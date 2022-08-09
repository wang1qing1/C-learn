#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
//	char c2[] = { '\x10', '\xa', '\8' };
//	char c1[] = { '1','2','3','4','5' };
//	int y[5 + 3] = { 0, 1, 3, 5, 7, 9 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%c ", c2[i]);
//	}
//
//	//00000000000000000000000010000000
//	//
//
//
//	int i = -20;
//	unsigned int j = 10;
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d\n" , a + b, c);
//	unsigned int a1= 0x1234; 
//	unsigned char b1 = *(unsigned char*)&a;
//	printf("%x %x", a1,b1);
//	return 0;
//}

//00000000000000000000000011001000  ->200
//00000000000000000000000001100100  ->100
//11001000  - a
//01100100  - b
//a+b
//00000000000000000000000011001000   a整形提升后
//00000000000000000000000001100100   b整形提升后
//00000000000000000000000100101100   a+b
//00101100   - c


////0001001000110100
////0000000000000000000000000010010
//#include<stdio.h>
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//排名次
//#include<stdio.h>
//
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if (((b == 2) + (a == 3) == 1) &&
//                            ((b == 2) + (e == 4) == 1) &&
//                            ((c == 1) + (d == 2) == 1) &&
//                            ((c == 5) + (d == 3) == 1) &&
//                            ((e == 4) + (a == 1) == 1))
//                        {
//                            if(a+b+c+d+e==15&&a*b*c*d*e==120)
//                            printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}

//找凶手
#include<stdio.h>
#define A 0
#define B 1
#define C 2
#define D 3
//int main()
//{
//	
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		int arr[4] = { 1,1,1,1 };
//		arr[i] = 0;//假设小偷是0；
//		if (((arr[A]!=0)+(arr[C] == 0) + (arr[D] == 0) + (arr[D] != 0)) == 3)
//		{
//			printf("A=%d,B=%d,C=%d,D=%d\n", arr[A], arr[B], arr[C], arr[D]);
//			break;
//		}
//	}
//	return 0;
//}


//杨辉三角
//
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int arr[100][100] = {0};
	arr[0][0] = 1;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			arr[i][0] = 1;
			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j ];
		}
	}
	
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = n; j > i; j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
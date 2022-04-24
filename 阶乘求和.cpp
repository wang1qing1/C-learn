#include<stdio.h>
int main()
{
	int i,m=0,a,n;
	int j = 1;
	scanf_s("%d",&n);
	for (a = 1; a <= n; a++)
	{
		j = 1;
		for (i = 1; i <= a; i++)
		{
			j = j * i;//确保每次j过来是都是1；----j=1；
		}
		m = j + m;
		
	}
	printf("%d", m);
	return 0;
}

//int j, i,m=0,w,a=2;
//int sum(int a, int n)
//{
//	for (j = 1; j <= n; j++)
//	{
//		a = 2;
//		for (i = 1; i <= j; i++)
//		{
//			a = 10 * a + a;
//
//		}
//		m = m + a;
//	
//	}
//	return m;
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	w = sum(2,3);
//	printf("%d", w);
//




//
//	return 0;
//}
















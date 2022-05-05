#include<stdio.h>
void jiaohuan(char*wang,char*qing,int se)
{
	int i = 0;
	char a = 'q';
	for (i = 0; i < se; i++)
	{
		a = *wang;
		*wang = *qing;
		*qing = a;
		wang++;
		qing++;
	}
}
struct mean
{
	char name[30];
	int age;
};
int comp( void* p1,  void* p2)
{
	return (((struct mean*)p1)->age - ((struct mean*)p2)->age);
}
int com( void* p1,  void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void my_qsort(void* wang, int sz, int se, int (*com)(void* x, void* y))
{
	int i = 0;
	for (i = 1; i <= sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= sz - 1 - i; j++)
		{
				if (com((char*)wang + j * se, (char*)wang + se * (j + 1)) > 0)
					jiaohuan((char*)wang + j * se, (char*)wang + se * (j + 1),se);
			
		}
	}
}
int main()
{
	int arr[] = { 11,25,93,24,5,6,74,48,89 };
	struct mean s[4] = { {"zhangsan",15},{"lisi",45},{"wanger",17}, {"mazi",97} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int wq = sizeof(s) / sizeof(s[0]);
	my_qsort(arr, sz, sizeof(arr[0]), com);
	my_qsort(s, wq, sizeof(s[0]), comp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int j = 0;
	printf("按照岁数从大到小打印出：\n");
      mean *p=s;
	for (j = 0; j < wq; j++)
	{
		printf("%s%d岁 ", p->name, p->age);
		p++;
	}
	return  0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Maxsize 20
typedef struct Elemtype{	
	char id[10];    
	char name[50];    
	char department[20];
	char postion[20];
}Ele;

typedef struct {
	Ele* elem;
	int length;
	int listsize;
} Sqlist;
Sqlist L;
void initlist(Sqlist L);
void create(int n);
void output(Sqlist L);
void insert(int i);
void delete_i(int i);
void find(Sqlist L);
void delete_();

int main()
{
	char c;
	int n, i;
	int j = 1;
	initlist(L);
	printf("创建结点的个数:");
	scanf("%d", &n);
	create(n);
	L.length = n;
	printf("\n以下是员工信息：\n");
	while (j)
	{
		printf("\n1.查找员工记录\n2.插入员工记录\n3.删除员工记录\n4.输出员工记录\n5.删除员工记录-位置\n6.退出系统\n");
		printf("请选择你想要执行的操作：\n");
		scanf(" %c", &c);
		switch (c)
		{
		case '1': {find(L); break; }
		case '2':
			printf("请输入要插入的位置：");
			scanf("%d", &i);
			insert(i);
			printf("以下是修改后的信息：\n");
			output(L);
			break;
		case '3':
			delete_();
			printf("以下是修改后的信息：\n");
			output(L);
			break;
		case '4':
			output(L);
			break;
		case '5':
			printf("删除员工记录-位置:");
			scanf("%d", &i);
			delete_i(i);
			printf("以下是修改后的信息：\n");
			output(L);
			break;
		case '6':
			printf("已退出");
			j = 0;
		}
		getchar();
		getchar();
		
	}
	return 0;
}

void initlist(Sqlist L)
{
	L.elem = (Ele*)malloc(Maxsize * sizeof(Ele));
	L.length = 0;
}

void create(int n) 
{
	int i;
	L.elem = (Ele*)malloc(Maxsize * sizeof(Ele));
	for (i = 0; i < n; i++) 
	{
		printf("请输入第%d个员工的信息\n", i + 1);
		printf("工号：");
		scanf("%s", &L.elem[i].id);
		printf("姓名：");
		scanf("%s", L.elem[i].name);
		printf("部门：");
		scanf("%s", L.elem[i].department);
		printf("职位：");
		scanf("%s", L.elem[i].postion);
	}
	L.length = n;
	output(L);
}

void insert(int i)
{
	int j;
	for (j = L.length - 1; j >= i - 1; j--)
	{
		L.elem[j + 1] = L.elem[j];
	}
	printf("请输入员工的值：\n");
	printf("工号：");
	scanf("%s", &L.elem[i - 1].id);
	printf("姓名：");
	scanf("%s", L.elem[i - 1].name);
	printf("部门：");
	scanf("%s", L.elem[i - 1].department);
	printf("职位：");
	scanf("%s", &L.elem[i - 1].postion);
	L.length = L.length + 1;
}

void delete_i(int i)
{
	int j;
	for (j = i; j < L.length; j++)
	{
		L.elem[j - 1] = L.elem[j];
	}
	L.length = L.length - 1;
}

void delete_()
{
	char data[50] = { 0 };
	int num, j, k;
	printf("删除哪位员工记录(学号或姓名）：\n");
	scanf("%s", data);    
	if (strspn(data, "0123456789") == strlen(data)) 
	{
		num = atoi(data);
		for (j = 0; j < L.length; j++)
		{
			if (num != (L.elem[j].id))
				continue;
			else
			{
				for (k = j + 1; k < L.length; k++)
				{
					L.elem[k - 1] = L.elem[k];
				}
			}

		}
	}
	else
	{
		for (j = 0; j < L.length; j++)
		{
			if (strcmp(data, L.elem[j].name) != 0) 
				continue;
			else
			{
				for (k = j + 1; k < L.length; k++)
				{
					L.elem[k - 1] = L.elem[k];
				}
			}
		}
	}
	L.length = L.length - 1;
}



void find()
{
	char data[50] = { 0 };
	int num, j;
	//	L.elem=(STU *)malloc(Maxsize*sizeof(STU));
	printf("查找哪位员工记录（姓名或学号）：\n");
	scanf("%s", data);    //输入需查找的数据，姓名或学号
	if (strspn(data, "0123456789") == strlen(data)) 
	{
		num = atoi(data);
		{
			for (j = 0; j < L.length; j++)
			{
				if (num != (L.elem[j].id)) 
					continue;
				else 
					break;
			}
		}
	}
	else
	{
		for (j = 0; j < L.length; j++)
		{
			if (strcmp(data, L.elem[j].name) != 0) 
				continue;
			else 
				break;
		}
	}
	printf("%s\t%s\t%s\t%s\n", L.elem[j].id, L.elem[j].name, 
		                       L.elem[j].department, L.elem[j].postion);

}

void output(Sqlist L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%s\t%s\t%s\t%s\n", L.elem[i].id, L.elem[i].name,
			L.elem[i].department, L.elem[i].postion);
	}
}


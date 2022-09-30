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
	printf("�������ĸ���:");
	scanf("%d", &n);
	create(n);
	L.length = n;
	printf("\n������Ա����Ϣ��\n");
	while (j)
	{
		printf("\n1.����Ա����¼\n2.����Ա����¼\n3.ɾ��Ա����¼\n4.���Ա����¼\n5.ɾ��Ա����¼-λ��\n6.�˳�ϵͳ\n");
		printf("��ѡ������Ҫִ�еĲ�����\n");
		scanf(" %c", &c);
		switch (c)
		{
		case '1': {find(L); break; }
		case '2':
			printf("������Ҫ�����λ�ã�");
			scanf("%d", &i);
			insert(i);
			printf("�������޸ĺ����Ϣ��\n");
			output(L);
			break;
		case '3':
			delete_();
			printf("�������޸ĺ����Ϣ��\n");
			output(L);
			break;
		case '4':
			output(L);
			break;
		case '5':
			printf("ɾ��Ա����¼-λ��:");
			scanf("%d", &i);
			delete_i(i);
			printf("�������޸ĺ����Ϣ��\n");
			output(L);
			break;
		case '6':
			printf("���˳�");
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
		printf("�������%d��Ա������Ϣ\n", i + 1);
		printf("���ţ�");
		scanf("%s", &L.elem[i].id);
		printf("������");
		scanf("%s", L.elem[i].name);
		printf("���ţ�");
		scanf("%s", L.elem[i].department);
		printf("ְλ��");
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
	printf("������Ա����ֵ��\n");
	printf("���ţ�");
	scanf("%s", &L.elem[i - 1].id);
	printf("������");
	scanf("%s", L.elem[i - 1].name);
	printf("���ţ�");
	scanf("%s", L.elem[i - 1].department);
	printf("ְλ��");
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
	printf("ɾ����λԱ����¼(ѧ�Ż���������\n");
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
	printf("������λԱ����¼��������ѧ�ţ���\n");
	scanf("%s", data);    //��������ҵ����ݣ�������ѧ��
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


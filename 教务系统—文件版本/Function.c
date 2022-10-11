#include"Quence.h"

static void Judge_Full(Que* que);
void FileLoad(Que* que)
{
	//���ļ�
	FILE* fp = fopen("Quence.txt", "rb");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}
	Stu S = { 0 };
	while (fread(&S, sizeof(S), 1, fp))
	{
		Judge_Full(que);
		que->stu[que->Nownum] = S;
		que->Nownum++;
	}
	fclose(fp);
	fp = NULL;
}

Que*InitQue()
{
	Que* que = (Que*)malloc(sizeof(Que));
	que->Initnum = INIT_NUM;
	que->Nownum = 0;
	que->stu = (Stu*)malloc(sizeof(Stu) * INIT_NUM);
	FileLoad(que);
	return que;
}

static void Judge_Full(Que*que)
{
	if (que->Initnum == que->Nownum)
	{
		Stu*new=(Stu*)realloc(que->stu,sizeof(Stu)*(que->Initnum + 2));
		if (new == NULL)
		{
			perror("Judge_Full");
		}
		else
		{
			que->stu = new;
		}
		que->Initnum += 2;
	}
}
void InQue(Que* que)
{
	assert(que);
	Judge_Full(que);
	printf("������: ���� ѧ�� ����\n");
	scanf("%s", que->stu[que->Nownum].name);
	scanf("%s", que->stu[que->Nownum].ID);
	scanf("%d",  &(que->stu[que->Nownum].age));
	(que->Nownum)++;
	printf("��ӳɹ�,��ǰ������%d ,��ǰ����%d \n",que->Initnum,que->Nownum);
}

void Prin(Que* que)
{
	assert(que);
	for (int i = 0; i < que->Nownum; i++)
	{
		printf("����:%-10s ѧ��:%-10s ����:%-2d \n",que->stu[i].name,que->stu[i].ID,que->stu[i].age);
	}
}

void menu()
{
	printf("******************************************\n");
	printf("******   1.����      2.��ӡ    ***********\n");
	printf("******   3.ɾ��      4.��ѯ    ***********\n");
	printf("******   5.�޸�      6.����    ***********\n");
	printf("******   7.����      0.�˳�    ***********\n");
	printf("******************************************\n");
}

static void menu_information()
{
	printf("******************************************\n");
	printf("*********1.����      2.���� **************\n");
	printf("*********3.ѧ��             ***************\n");
	printf("******************************************\n");
}

void Dele(Que* que)
{
	assert(que);
	printf("��������Ҫɾ����ѧ��ѧ��:\n");
	char id[30] = { 0 };
	scanf("%s", id);
	for (int i = 0; i < que->Nownum; i++)
	{
		if (strcmp(que->stu[i].ID, id)==0)
		{
			for (int j = i; i < que->Nownum-1; i++)
			{
				que->stu[i] = que->stu[i + 1];
			}
		}
	}
	printf("ɾ���ɹ�\n");
	(que->Nownum)--;
}

void Find(Que*que)
{
	assert(que);
	printf("�������ѯѧ��:");
	char id[30]={0};
	scanf("%s", id);
	for (int i = 0; i < que->Nownum; i++)
	{
		if (strcmp(que->stu[i].ID, id) == 0)
		{
			printf("����:%-10s ѧ��:%-10s ����:%-2d \n", que->stu[i].name, que->stu[i].ID, que->stu[i].age);
			return;
		}
	}
	printf("û�д�ѧ��\n");
	
}

static void name(Que*que,int n)
{
	assert(que);
	printf("�������µ�����:>");
	scanf("%s", que->stu[n].name);
	printf("�޸ĳɹ�\n");
}

static void age(Que* que, int n)
{
	assert(que);
	printf("�������µ�����:>");
	scanf("%d", &que->stu[n].age);
	printf("�޸ĳɹ�\n");
}

static void id_(Que* que, int n)
{
	assert(que);
	printf("�������µ�ѧ��:>");
	scanf("%s", que->stu[n].ID);
	printf("�޸ĳɹ�\n");
}

void Modify(Que* que)
{
	char id[30] = { 0 };
	printf("�������޸���Ϣ��ѧ��:>");
	scanf("%s", id);
	int i = 0;
	for (; i < que->Nownum; i++)
	{
		if (strcmp(que->stu[i].ID, id) == 0)
		{
				int input = 0;
				menu_information();
				printf("����:%-10s ѧ��:%-10s ����:%-2d \n", que->stu[i].name, que->stu[i].ID, que->stu[i].age);
				printf("��ѡ����Ҫ�޸ĵ���Ϣ:>");
				scanf("%d", &input);
				switch (input)
				{
				case 1:name(que,i);
					break;
				case 2:age(que, i);
					break;
				case 3:id_(que, i);
					break;
				default:printf("����������������롣\n");
				}
				return;
		}
	}
	if (i >= que->Nownum)
	{
		printf("û�д�ѧ��\n");
	}
}

//¼���ļ�
void FileInput(Que*que)
{
	//���ļ�
	FILE* pf = fopen("Quence.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//д�ļ�
	for (int i = 0; i < que->Nownum; i++)
	{
		fwrite(que->stu + i, sizeof(que->stu[0]), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

void Destroy(Que* que)
{
	FileInput(que);
	free(que->stu);
	que->stu = NULL;
	free(que);
	que = NULL;
}

static int Stucmp_ID(const void* e1, const void* e2)
{
	return strcmp(((Stu*)e1)->ID, ((Stu*)e2)->ID);
}

static int Stucmp_age(const void* e1, const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}

static int Stucmp_name(const void* e1, const void* e2)
{
	strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
}

static void nume_sort()
{
	printf("******************************************\n");
	printf("*********1.����      2.���� **************\n");
	printf("*********3.ѧ��             **************\n");
	printf("******************************************\n");
}
void Sort(Que* que)
{
		int input = 0;
		nume_sort();
		printf("��ѡ����Ҫ����ķ�ʽ:>");
		scanf("%d", &input);
		switch (input)
		{
		 case 1:qsort(que->stu, que->Nownum, sizeof(que->stu[0]), Stucmp_name);
			break;
		 case 2:qsort(que->stu, que->Nownum, sizeof(que->stu[0]), Stucmp_ID);
			break;
		 case 3:qsort(que->stu, que->Nownum, sizeof(que->stu[0]), Stucmp_age);
			break;
		 default:
			 if (input != 0)
			 {
				 printf("����������������롣\n");
			 }
		}

}

void insert(Que* que)
{
	int n = 0;
	printf("����������λ��:>");
	scanf("%d", &n);
	if (n >= que->Nownum && n < 0)
	{
		printf("�������\n");
		return;
	}
	else
	{
		memmove(que->stu + n , que->stu + n-1, sizeof(que->stu[0]) * (que->Nownum - n + 1));
		printf("����������˵���Ϣ: ���� ѧ�� ����\n");
		scanf("%s", que->stu[n-1].name);
		scanf("%s", que->stu[n-1].ID);
		scanf("%d", &(que->stu[n-1].age));
		(que->Nownum)++;
		printf("����ɹ�\n");
	}
}
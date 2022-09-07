#include"Quence.h"

Que*InitQue()
{
	Que* que = (Que*)malloc(sizeof(Que));
	que->Initnum = INIT_NUM;
	que->Nownum = 0;
	que->stu = (Stu*)malloc(sizeof(Stu) * INIT_NUM);
	return que;
}
void InQue(Que* que)
{
	assert(que);
	printf("������: ���� ѧ�� ����\n");
	scanf("%s", que->stu[que->Nownum].name);
	scanf("%s", que->stu[que->Nownum].ID);
	scanf("%d",  &(que->stu[que->Nownum].age));
	(que->Nownum)++;
	printf("��ӳɹ�\n");
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
	printf("*********1.����      2.��ӡ **************\n");
	printf("*********3.ɾ��      4.��ѯ **************\n");
	printf("*********5.�޸�      0.�˳� **************\n");
	printf("******************************************\n");
}

void menu_information()
{
	printf("******************************************\n");
	printf("*********1.����      2.���� **************\n");
	printf("*********3.ѧ��      0.exit ***************\n");
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
	printf("�������ѯѧ��:\n");
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
}

void name(Que*que,int n)
{
	assert(que);
	printf("�������µ�����:>");
	scanf("%s", que->stu[n].name);
	printf("�޸ĳɹ�\n");
}

void age(Que* que, int n)
{
	assert(que);
	printf("�������µ�����:>");
	scanf("%d", &que->stu[n].age);
	printf("�޸ĳɹ�\n");
}

void id_(Que* que, int n)
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
	for (int i = 0; i < que->Nownum; i++)
	{
		if (strcmp(que->stu[i].ID, id) == 0)
		{
			int input = 0;
			do
			{ 
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
			} while (input);
		}
	}
}

void Destroy(Que* que)
{
	free(que->stu);
	que->stu = NULL;
	free(que);
	que = NULL;
}


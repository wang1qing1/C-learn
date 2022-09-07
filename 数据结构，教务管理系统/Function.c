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
	printf("请输入: 姓名 学号 年龄\n");
	scanf("%s", que->stu[que->Nownum].name);
	scanf("%s", que->stu[que->Nownum].ID);
	scanf("%d",  &(que->stu[que->Nownum].age));
	(que->Nownum)++;
	printf("添加成功\n");
}
void Prin(Que* que)
{
	assert(que);
	for (int i = 0; i < que->Nownum; i++)
	{
		printf("姓名:%-10s 学号:%-10s 年龄:%-2d \n",que->stu[i].name,que->stu[i].ID,que->stu[i].age);
	}
}

void menu()
{
	printf("******************************************\n");
	printf("*********1.增加      2.打印 **************\n");
	printf("*********3.删除      4.查询 **************\n");
	printf("*********5.修改      0.退出 **************\n");
	printf("******************************************\n");
}

void menu_information()
{
	printf("******************************************\n");
	printf("*********1.姓名      2.年龄 **************\n");
	printf("*********3.学号      0.exit ***************\n");
	printf("******************************************\n");
}

void Dele(Que* que)
{
	assert(que);
	printf("请输入需要删除的学生学号:\n");
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
	printf("删除成功\n");
	(que->Nownum)--;
}

void Find(Que*que)
{
	assert(que);
	printf("请输入查询学号:\n");
	char id[30]={0};
	scanf("%s", id);
	for (int i = 0; i < que->Nownum; i++)
	{
		if (strcmp(que->stu[i].ID, id) == 0)
		{
			printf("姓名:%-10s 学号:%-10s 年龄:%-2d \n", que->stu[i].name, que->stu[i].ID, que->stu[i].age);
			return;
		}
	}
}

void name(Que*que,int n)
{
	assert(que);
	printf("请输入新的姓名:>");
	scanf("%s", que->stu[n].name);
	printf("修改成功\n");
}

void age(Que* que, int n)
{
	assert(que);
	printf("请输入新的年龄:>");
	scanf("%d", &que->stu[n].age);
	printf("修改成功\n");
}

void id_(Que* que, int n)
{
	assert(que);
	printf("请输入新的学号:>");
	scanf("%s", que->stu[n].ID);
	printf("修改成功\n");
}

void Modify(Que* que)
{
	char id[30] = { 0 };
	printf("请输入修改信息的学号:>");
	scanf("%s", id);
	for (int i = 0; i < que->Nownum; i++)
	{
		if (strcmp(que->stu[i].ID, id) == 0)
		{
			int input = 0;
			do
			{ 
				menu_information();
				printf("姓名:%-10s 学号:%-10s 年龄:%-2d \n", que->stu[i].name, que->stu[i].ID, que->stu[i].age);
				printf("请选择需要修改的信息:>");
				scanf("%d", &input);
				switch (input)
				{
				case 1:name(que,i);
					break;
				case 2:age(que, i);
					break;
				case 3:id_(que, i);
					break;
				default:printf("输入错误，请重新输入。\n");
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


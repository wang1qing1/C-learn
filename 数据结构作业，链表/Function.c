#include"List.h"

void menu()
{
	printf("**************************************************\n");
	printf("*******  1.HeadAdd        2.TailAdd       ********\n");
	printf("*******  3.MidAdd         4.HeadDelete    ********\n");
	printf("*******  5.TailDelete     6.NodeDelete    ********\n");
	printf("*******  7.FindNode       8.Modify        ********\n");
	printf("*******  9.ListPrint      0.exit          ********\n");
	printf("**************************************************\n");

}

void Free(Node* P)
{
	free(P);
	P = NULL;
}

//初始化链表头
Node* InitHeadNode()
{
	
	Node* head = malloc(sizeof(Node));
	if (head == NULL)
	{
		perror("InitHeadNode Fail");
		exit(-1);
	}
	else
	{
		head->date = NULL;
		head->next = NULL;
		return head;
	}
	
}

//创建数据结点
Node* AddNode()
{
	Node* newnode = malloc(sizeof(Node));
	if (newnode == NULL)
	{
		perror("AddNode Fail");
		exit(-1);
	}
	else
	{
		newnode->date = NULL;
		return newnode;
	}
}

//头部插入数据
void HeadAdd(Node*head)
{
	INI_TYPE date;
	printf("请输入头插的数据:>");
	scanf("%d", &date);
	Node* frist = head->next;
	Node* newnode = AddNode();
	newnode->date = date;
	head->next = newnode;
	newnode->next = frist;
}

//打印链表
void ListPrint(Node*head)
{
	assert(head);
	Node* frist = head->next;
	while (frist !=NULL)
	{
		printf("%d->", frist->date);
		frist = frist->next;
	}
	printf("NULL\n");
}

//拿到尾部结点
Node* GetTail(Node* head)
{
	Node* frist = head;
	while (frist->next!=NULL)
	{
		frist = frist->next;
	}
	return frist;
}

//尾部插入数据
void TailAdd(Node* head)
{
	INI_TYPE date;
	printf("请输入尾部的数据:>");
	scanf("%d", &date);
	Node* tailnode = GetTail(head);
	Node* newnode = AddNode();
	newnode->date = date;
	tailnode->next = newnode;
	newnode->next = NULL;
}

//查找某数据的结点和前一个结点
Node* (*FindNode(Node* head, INI_TYPE num))[2]
//函数返回值是指向指针数组的指针
{
	//指针指向的是一个两个元素的数组，
	//数组存储的是 num 的结点地址和 num 前一个节点的地址。
	Node* (*parr)[2] = (Node * (*)[2])malloc(sizeof(Node*) * 2);
	Node* frist = head;
	while (frist!= NULL)
	{
		if (frist->next!=NULL && frist->next->date==num)
		{
			(*parr)[0] = frist;
			(*parr)[1] = frist->next;
			return parr;
		}
		frist = frist->next;
	}
	return NULL;
}

//中间插入——插入某一个数据的后面
void MidAdd(Node* head)
{
	INI_TYPE date;
	INI_TYPE num;
	printf("请输入插入位置:>");
	scanf("%d", &num);
	printf("请输入插入的数据:>");
	scanf("%d", &date);
	Node* (*NumNode)[2] =FindNode(head, num);
	if (NumNode != NULL)
	{
		Node* newnode = AddNode();
		newnode->date = date;
		Node* NumNodeSecond = (*NumNode)[1]->next;
		(*NumNode)[1]->next = newnode;
		newnode->next = NumNodeSecond;
	}
	else
	{
		printf("没有这个数据，插入失败！");
	}
	
}

//头部删除
void HeadDelete(Node* head)
{
	Node* frist = head->next;
	Node*second = frist->next;
	head->next = second;
	Free(frist);
}

//尾部删除
void TailDelete(Node* head)
{
	Node* tailnode = GetTail(head);
	Node* (*fnode)[2] = FindNode(head, tailnode->date);
	Node* tail_prive = (*fnode)[0];
	tail_prive->next = NULL;
	Free(tailnode);
}

//删除指定数据
void NodeDelete(Node* head)
{
	INI_TYPE date;
	printf("请输入需要删除的数据:>");
	scanf("%d", &date);
	Node* (*fnode)[2] =FindNode(head, date);
	if (fnode != NULL)
	{
		Node* Fnode = (*fnode)[1];
		Node* FondePrive = (*fnode)[0];
		Node* FnodeNext = (*fnode)[1]->next;
		FondePrive->next = FnodeNext;
		Free(Fnode);
	}
	else
	{
		printf("没有这个元素，删除失败！\n");
	}
	
}

//查找某个元素
void FindNode_plus(Node* head)
{
	INI_TYPE date;
	printf("请输入需要查找的数据:>");
	scanf("%d", &date);
	Node*(*fnode)[2]=FindNode(head, date);
	if (fnode != NULL)
	{
		printf("找到了:%d \n", (*fnode)[1]->date);
	}
	else
	{
		printf("没有这个元素，查询失败！\n");
	}
}

void Modify(Node* head)
{
	INI_TYPE date;
	printf("请输入需要修改的数据:>");
	scanf("%d", &date);
	Node* (*fnode)[2] = FindNode(head, date);
	if (fnode != NULL)
	{
		printf("请输入修改后的数据:>");
		scanf("%d", &(*fnode)[1]->date);
		printf("修改成功\n");
	}
	else
	{
		printf("没有这个元素，修改失败！\n");
	}
}

void DestroyList(Node* head)
{
	Node* frist = head->next;
	while (frist)
	{
		Node* Next = frist->next;
		free(frist);
		frist = Next;
	}
}
#include"head.h"

//初始化
SListNode* InitListNode()
{
	SListNode*head = (SListNode*)malloc(sizeof(SListNode));
	head->next = head;
	head->prive = head;
	head->node = NULL;
	return head;
}

//增加结点
SListNode* AddListNode(int date)
{
	SListNode*NewNode= (SListNode*)malloc(sizeof(SListNode));
	NewNode->next = NULL;
	NewNode->prive = NULL;
	NewNode->node = date;
	return NewNode;
}

//尾插入数据
void InListNodeTail(SListNode*head,int date)
{
	assert(head);
	SListNode* newnode = AddListNode(date);
	SListNode* tail = head->prive;
	newnode->next = head;
	newnode->prive = tail;
	tail->next = newnode;
	head->prive = newnode;
}


//头插数据
void InListNodeHead(SListNode* head,int date )
{
	assert(head);
	SListNode* newnode = AddListNode(date);
	SListNode* frist = head->next;
	newnode->next = frist;
	newnode->prive =head;
	head->next = newnode;
	frist->prive = newnode;
}

//打印链表
void print(SListNode* head)
{
	assert(head);
	SListNode* frist = head->next;
	while (frist != head)
	{
		printf("%d->", frist->node);
		frist = frist->next;
	}
	printf("NULL");
}

//尾删
void DeleListtail(SListNode*head)
{
	assert(head);
	SListNode* tail = head->prive;
	SListNode* secondtail = tail->prive;
	head->prive = secondtail;
	secondtail->next = head;
	free(tail);
	tail = NULL;
}

//头删
void DeleListhead(SListNode* head)
{
	assert(head);
	SListNode* frist = head->next;
	SListNode* second = frist->next;
	head->next = second;
	second->prive = head;
	free(frist);
	frist = NULL;
}

//删除指定数据
void DeleListmid(SListNode* head, int date)
{
	assert(head);
	SListNode* frist = head->next;
	
	while ( frist != head)
	{
		SListNode* Next = frist->next;
		if (frist->node == date)
		{
			SListNode* Prive = frist->prive;
			Prive->next = Next;
			Next->prive = Prive;
			free(frist);
			frist = NULL;
		}
		frist = Next;
	}
}

//销毁链表
void DeleList(SListNode* head)
{
	assert(head);
	SListNode* frist = head->next;
	while (frist != head)
	{
		SListNode* Next = frist->next;
		free(frist);
		frist = NULL;
		frist = Next;
	}
}


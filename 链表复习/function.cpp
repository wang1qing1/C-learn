#include"head.h"

//��ʼ��
SListNode* InitListNode()
{
	SListNode*head = (SListNode*)malloc(sizeof(SListNode));
	head->next = head;
	head->prive = head;
	head->node = NULL;
	return head;
}

//���ӽ��
SListNode* AddListNode(int date)
{
	SListNode*NewNode= (SListNode*)malloc(sizeof(SListNode));
	NewNode->next = NULL;
	NewNode->prive = NULL;
	NewNode->node = date;
	return NewNode;
}

//β��������
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


//ͷ������
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

//��ӡ����
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

//βɾ
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

//ͷɾ
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

//ɾ��ָ������
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

//��������
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


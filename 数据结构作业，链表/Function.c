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

//��ʼ������ͷ
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

//�������ݽ��
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

//ͷ����������
void HeadAdd(Node*head)
{
	INI_TYPE date;
	printf("������ͷ�������:>");
	scanf("%d", &date);
	Node* frist = head->next;
	Node* newnode = AddNode();
	newnode->date = date;
	head->next = newnode;
	newnode->next = frist;
}

//��ӡ����
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

//�õ�β�����
Node* GetTail(Node* head)
{
	Node* frist = head;
	while (frist->next!=NULL)
	{
		frist = frist->next;
	}
	return frist;
}

//β����������
void TailAdd(Node* head)
{
	INI_TYPE date;
	printf("������β��������:>");
	scanf("%d", &date);
	Node* tailnode = GetTail(head);
	Node* newnode = AddNode();
	newnode->date = date;
	tailnode->next = newnode;
	newnode->next = NULL;
}

//����ĳ���ݵĽ���ǰһ�����
Node* (*FindNode(Node* head, INI_TYPE num))[2]
//��������ֵ��ָ��ָ�������ָ��
{
	//ָ��ָ�����һ������Ԫ�ص����飬
	//����洢���� num �Ľ���ַ�� num ǰһ���ڵ�ĵ�ַ��
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

//�м���롪������ĳһ�����ݵĺ���
void MidAdd(Node* head)
{
	INI_TYPE date;
	INI_TYPE num;
	printf("���������λ��:>");
	scanf("%d", &num);
	printf("��������������:>");
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
		printf("û��������ݣ�����ʧ�ܣ�");
	}
	
}

//ͷ��ɾ��
void HeadDelete(Node* head)
{
	Node* frist = head->next;
	Node*second = frist->next;
	head->next = second;
	Free(frist);
}

//β��ɾ��
void TailDelete(Node* head)
{
	Node* tailnode = GetTail(head);
	Node* (*fnode)[2] = FindNode(head, tailnode->date);
	Node* tail_prive = (*fnode)[0];
	tail_prive->next = NULL;
	Free(tailnode);
}

//ɾ��ָ������
void NodeDelete(Node* head)
{
	INI_TYPE date;
	printf("��������Ҫɾ��������:>");
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
		printf("û�����Ԫ�أ�ɾ��ʧ�ܣ�\n");
	}
	
}

//����ĳ��Ԫ��
void FindNode_plus(Node* head)
{
	INI_TYPE date;
	printf("��������Ҫ���ҵ�����:>");
	scanf("%d", &date);
	Node*(*fnode)[2]=FindNode(head, date);
	if (fnode != NULL)
	{
		printf("�ҵ���:%d \n", (*fnode)[1]->date);
	}
	else
	{
		printf("û�����Ԫ�أ���ѯʧ�ܣ�\n");
	}
}

void Modify(Node* head)
{
	INI_TYPE date;
	printf("��������Ҫ�޸ĵ�����:>");
	scanf("%d", &date);
	Node* (*fnode)[2] = FindNode(head, date);
	if (fnode != NULL)
	{
		printf("�������޸ĺ������:>");
		scanf("%d", &(*fnode)[1]->date);
		printf("�޸ĳɹ�\n");
	}
	else
	{
		printf("û�����Ԫ�أ��޸�ʧ�ܣ�\n");
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
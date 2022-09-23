#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define INI_TYPE int 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef struct SListNode
{
	INI_TYPE date;
	struct SListNode* next;
}Node;

enum function
{
	Exit, Headadd, Tailadd,
	Midadd, Headdelete, Taildelete,
	Nodedelete, Findnode, modify,
	Listprint
};

Node* InitHeadNode();

void HeadAdd(Node* head);

void ListPrint(Node* node);

void TailAdd(Node* head);

void MidAdd(Node* head);

void NodeDelete(Node* head);

void TailDelete(Node* head);

void HeadDelete(Node* head);

void FindNode_plus(Node* head);

void DestroyList(Node* head);

void Modify(Node* head);

void menu();
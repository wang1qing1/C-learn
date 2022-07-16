#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct SListNode
{
	struct SListNode* prive;
	int node;
	struct SListNode* next;
}SlistNode;

SListNode* InitListNode();

SListNode* AddListNode(int date);

void InListNodeTail(SListNode* head, int date);

void print(SListNode* head);

void InListNodeHead( SListNode* head, int date);

void DeleListtail(SListNode* head);

void DeleListhead(SListNode* head);

void DeleListmid(SListNode* head, int date);

void DeleList(SListNode* head);
#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define INIT_NUM 100
typedef struct Stu
{
	char name[30];
	char ID[20];
	int age;
}Stu;
typedef struct Quence
{
	int Initnum;
	int Nownum;
	Stu* stu;
}Que;

Que*InitQue();

void InQue(Que*quence);

void Prin(Que*que);

void menu();

void Dele(Que* que);

void Find(Que* que);

void Modify(Que* que);

void Destroy(Que*que);
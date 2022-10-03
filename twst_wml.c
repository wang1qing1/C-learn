#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
typedef char datatype;
typedef struct SeqList{
datatype data[MAXSIZE];
int length;
}SeqList;

void InitList(SeqList *L)
{
    int i;
    for(i=0;i<L->length;i++)
        printf("%d\t",L->data[i]);
}

 
void CreateList(SeqList *L)
{
    int i;
    printf("������˳���ĳ��ȣ�");
    scanf("%d",&L->length);
    for(i=0;i<L->length;i++)
    {
        printf("�������%d��Ԫ��:\n",i+1);
        scanf("%c",&L->data[i]);
    }
}

void FoundList(SeqList *L,datatype e)
{
    int i;
    for(i=0;i<L->length;i++)
    {
        if(L->data[i]==e)
        {
            printf("��Ԫ��λ�ڵ�%dλ",i+1);
        }
        else
        {
            printf("���ڲ����ڸ�Ԫ��");
        }
    }
}

void InsertList(SeqList *L,int i)
{
    int m,n;
    if(L->length>=MAXSIZE)
    {
        printf("�������ܲ���");
        return ;
    }
    if(i<1||i>L->length+1)
    {
        printf("����λ�ô���");
        return ;
    }
    for(m=L->length-1;m>=i-1;m--)
    {
        printf("������Ҫ�������ֵ��");
        scanf("%d",&n);
        L->data[m+1]=L->data[m];
        L->data[i-1]=n;
        L->length++;
    }
}

void DeleteList(SeqList *L,int i)
{
    int j;
    if(i<1||i>L->length)
    {
        printf("ɾ��λ�ô���");
        return ;
    }
    if(L->length==0)
    {
        printf("�ձ���ɾ��");
        return ;
    }
    for(j=i;j<L->length;j++)
    {
        L->data[j-1]=L->data[j];
    }
    L->length--;
}

int main()
{
    SeqList l;
    l.length = 0;
    CreateList (&l);
    InitList (&l);
    FoundList (&l,'e');
    InsertList (&l,1);
    DeleteList (&l,1);
    return 1;
}


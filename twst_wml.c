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
    printf("请输入顺序表的长度：");
    scanf("%d",&L->length);
    for(i=0;i<L->length;i++)
    {
        printf("请输入第%d个元素:\n",i+1);
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
            printf("该元素位于第%d位",i+1);
        }
        else
        {
            printf("表内不存在该元素");
        }
    }
}

void InsertList(SeqList *L,int i)
{
    int m,n;
    if(L->length>=MAXSIZE)
    {
        printf("表满不能插入");
        return ;
    }
    if(i<1||i>L->length+1)
    {
        printf("插入位置错误");
        return ;
    }
    for(m=L->length-1;m>=i-1;m--)
    {
        printf("请输入要插入的数值：");
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
        printf("删除位置错误");
        return ;
    }
    if(L->length==0)
    {
        printf("空表不能删除");
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


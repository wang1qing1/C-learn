#include"SeqList.h"

static void JudegCapacity(SeqList* pSL)
{
	//如果容量不够时，即当前数据个数等于当前容量时，需扩容
	if (pSL->capacity == pSL->size)
	{
		//如果是第一次添加数据，我们需要给一个初始容量，以后需要扩容就是扩容到当前数据容量的两倍。
		pSL->capacity = (pSL->capacity) == 0 ? 4 : pSL->capacity * 2;
		SLDateType* pf = (SLDateType*)realloc(pSL->date, pSL->capacity * sizeof(SLDateType));
		assert(pf);
		pSL->date = pf;
		//pSL->capacity = newcapacity;
	}
}

//初始化
void SeqListInit(SeqList* pSL)
{
	pSL->date = NULL;
	pSL->capacity = 0;
	pSL->size = 0;
}

//数据的顺序添加
void SeqListPushBank(SeqList *pSL, SLDateType date)
{
	assert(pSL);
	//判断扩容
	JudegCapacity(pSL);
	pSL->date[pSL->size] = date;
	pSL->size++;
}

//顺序表的打印
void SeqListPrintf(SeqList* pSL)
{
	assert(pSL);
	for (int i = 0; i < pSL->size; i++)
	{
		printf("%d ", pSL->date[i]);
	}
	printf("\n");
}

//顺序表的销毁
void SeqListDestroy(SeqList* pSL)
{
	//断言，防止错误操作
	assert(pSL);
	//将顺序表销毁时，容量和当前数据个数都需要变为0.
	if (pSL->date != NULL)
	{
		free(pSL->date);
		pSL->date = NULL;
		pSL->date = 0;
		pSL->capacity = 0;
	}
}

void SeqListPopbank(SeqList* pSL)
{
	assert(pSL);
	//暴力检查，只有当顺序表中的数据大于 0 时，才能进行删除数据
	assert(pSL->size > 0);
	pSL->size--;
}

void SeqListPushFront(SeqList* pSL, SLDateType* date)
{
	assert(pSL);
	JudegCapacity(pSL);
	//挪动数据
	

}
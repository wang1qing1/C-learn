#include"SeqList.h"

static void JudegCapacity(SeqList* pSL)
{
	//�����������ʱ������ǰ���ݸ������ڵ�ǰ����ʱ��������
	if (pSL->capacity == pSL->size)
	{
		//����ǵ�һ��������ݣ�������Ҫ��һ����ʼ�������Ժ���Ҫ���ݾ������ݵ���ǰ����������������
		pSL->capacity = (pSL->capacity) == 0 ? 4 : pSL->capacity * 2;
		SLDateType* pf = (SLDateType*)realloc(pSL->date, pSL->capacity * sizeof(SLDateType));
		assert(pf);
		pSL->date = pf;
		//pSL->capacity = newcapacity;
	}
}

//��ʼ��
void SeqListInit(SeqList* pSL)
{
	pSL->date = NULL;
	pSL->capacity = 0;
	pSL->size = 0;
}

//���ݵ�˳�����
void SeqListPushBank(SeqList *pSL, SLDateType date)
{
	assert(pSL);
	//�ж�����
	JudegCapacity(pSL);
	pSL->date[pSL->size] = date;
	pSL->size++;
}

//˳���Ĵ�ӡ
void SeqListPrintf(SeqList* pSL)
{
	assert(pSL);
	for (int i = 0; i < pSL->size; i++)
	{
		printf("%d ", pSL->date[i]);
	}
	printf("\n");
}

//˳��������
void SeqListDestroy(SeqList* pSL)
{
	//���ԣ���ֹ�������
	assert(pSL);
	//��˳�������ʱ�������͵�ǰ���ݸ�������Ҫ��Ϊ0.
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
	//������飬ֻ�е�˳����е����ݴ��� 0 ʱ�����ܽ���ɾ������
	assert(pSL->size > 0);
	pSL->size--;
}

void SeqListPushFront(SeqList* pSL, SLDateType* date)
{
	assert(pSL);
	JudegCapacity(pSL);
	//Ų������
	

}
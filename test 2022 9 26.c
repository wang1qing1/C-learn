#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//}
//void test()
//{
//    int i = 0;
//    int* p = (int*)malloc(10 * sizeof(int));
//    if (NULL == p)
//    {
//        exit(EXIT_FAILURE);
//    }
//    for (i = 0; i <= 10; i++)
//    {
//        *(p + i) = i;//��i��10��ʱ��Խ�����
//    }
//    free(p);
//}
//void test()
//{
//	int* p = (int*)malloc(sizeof(int)*10);
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*p = i;
//			p++;
//		}
//	}
//	else
//	{
//		perror("malloc");
//	}
//	
//	
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}





//void test()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}
void test()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}
int main()
{
	test();
	while (1);
}
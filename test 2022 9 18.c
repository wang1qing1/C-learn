#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////������ƣ�dest->Ŀ��ռ�   source->ԭ���ݿռ�  num->������С(��λ���ֽ�)��  
//void* my_memmove(void*dest,const void*source,size_t num)
//{
//	void* ret = dest;
//	assert(dest && source);
//	//���Ŀ��Ŀռ���ԭ���ݵ�ǰ�棬�Ǿʹ�ǰ���󿽱���
//	if (dest < source)
//	{
//		while (num--)
//		{
//			*((char*)dest) = *((char*)source);
//			dest = (char*)dest + 1;
//			source = (char*)source + 1;
//		}
//	}
//	//���Ŀ��ռ���ԭ���ݵĺ��棬��ô�ʹӺ���ǰ������
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)source + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	print(arr, 10);
//	//��3 4 5 6 7 ������ 1 2 3 4 5
//	my_memmove(arr , arr+2, 20);
//	print(arr, 10);
//}

////�ṹ������
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//};
//
////����1
//struct Node
//{
//	int data;
//	struct Node* next;
//};
////������� typedef �ǲ��ǾͿ�������д��? 
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
////����д�����ǲ��е�
//
////���������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char ID[20];
//};
//
//
//
////int main()
////{
////
////	//���սṹ��˳���ʼ������
////	struct Stu stu2 = { "ikun",20,"JNTM123" };
////	//�Զ���˳���ʼ������
////	struct Stu stu1 = { .ID = "CZU123",.age = 19,.name = "����" };
////
////	return 0;
////}


struct S1	
{
	char c1;
	int i;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int i;
};
int main()
{
	printf("%d\n", sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
#include"List.h"
int main()
{
	Node* Head = InitHeadNode();
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case Headadd:HeadAdd(Head);
			break;
		case Tailadd:TailAdd(Head);
			break;
		case Midadd:MidAdd(Head);
			break;
		case Headdelete:HeadDelete(Head);
			break;
		case Taildelete:TailDelete(Head);
			break;
		case Nodedelete:NodeDelete(Head);
			break;
		case Findnode:FindNode_plus(Head);
			break; 
		case modify:Modify(Head);
			break;
		case Listprint:ListPrint(Head);
			break;
		case Exit:DestroyList(Head);
			printf("�˳�������\n");
			break;
		default:
			printf("�����������������:>");
			break;
		}
			
	} while (input);
	return 0;
}
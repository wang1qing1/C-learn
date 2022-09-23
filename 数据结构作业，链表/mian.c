#include"List.h"
int main()
{
	Node* Head = InitHeadNode();
	int input = 0;
	do
	{
		menu();
		printf("请输入选项:>");
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
			printf("退出链表！！\n");
			break;
		default:
			printf("输入错误，请重新输入:>");
			break;
		}
			
	} while (input);
	return 0;
}
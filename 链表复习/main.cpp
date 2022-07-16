#include"head.h"
int main()
{
	SListNode* list = InitListNode();
	InListNodeTail(list, 100);
	InListNodeTail(list, 200);
	InListNodeTail(list, 300);
	InListNodeTail(list, 400);
	InListNodeTail(list, 500);
	InListNodeTail(list, 600);
	InListNodeTail(list, 700);
	InListNodeHead(list, 50);
	DeleListhead(list);
	DeleListtail(list);
	DeleListmid(list, 300);
	print(list);
	DeleList(list);
	return 0;
}
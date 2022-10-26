#include"SeqList.h"
int main()
{

	SeqList SL;
	SeqListInit(&SL);
	SeqListPushBank(&SL, 100);
	SeqListPushBank(&SL, 200);
	//SeqListPushBank(&SL, 300); 
	//SeqListPushBank(&SL, 400); 
	//SeqListPushBank(&SL, 500);
	SeqListPrintf(&SL);
	SeqListPopbank(&SL);
	SeqListPrintf(&SL);
	SeqListDestroy(&SL);
	


	return 0;
}
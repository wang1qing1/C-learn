#include"Game.h"
int main()
{
	int input = 0;
	do 
	{
		mnue();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
			    break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:  
				printf("�������������ѡ��\n");
				break;
		}
		

	} while (input);



	return 0;
}
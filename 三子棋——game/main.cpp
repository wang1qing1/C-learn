#include"Game.h"

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��:>\n");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������:>");
			break;
		}
	} while (input);

	return 0;
}

#include"Game.h"

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入选项:>\n");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入:>");
			break;
		}
	} while (input);

	return 0;
}

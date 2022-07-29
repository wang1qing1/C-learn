#include"Game.h"
int main()
{
	int input = 0;
	do 
	{
		mnue();
		printf("请输入选项:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
			    break;
			case 0:
				printf("退出游戏\n");
				break;
			default:  
				printf("输入错误，请重新选择\n");
				break;
		}
		

	} while (input);



	return 0;
}
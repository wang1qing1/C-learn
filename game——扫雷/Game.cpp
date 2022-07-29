#include"Game.h"

void mnue()
{
	printf("***************************************\n");
	printf("************1.play  0.exit*************\n");
	printf("***************************************\n");
}

void init_board(char board[ROW][LIN],int row,int lin,char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < lin; j++)
		{
			board[i][j] = set;
		}
	}
}

void display_show(char board[ROW][LIN], int row, int lin)
{
	for (int i = 0; i <= lin-2; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i < row-1; i++)
	{
		printf("%d ", i);
		for (int j = 1; j < lin-1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char board[ROW][LIN], int row, int lin)
{
	for (int i = 0; i < MINE_COUNT; i++)
	{
		while (1)
		{
			//32767%10
			//0----9
			int x = rand() % 9+1;
			int y = rand() % 9+1;
			if (board[x][y]=='0')
			{
				board[x][y] = '1';
				break;
			}
		}
	}
}

int get_mine(char mine[ROW][LIN], int x, int y)
{
	int sum = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			sum += mine[x+i][y+j] - 48;
		}
	}
	return sum;
}

void find_mine(char mine[ROW][LIN],char show[ROW][LIN],int row,int lin)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < (row - 2) * (lin - 2) - MINE_COUNT)
	{
		printf("请输入需要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (mine[x][y] == '0')
		{
			if (show[x][y] == '*')
			{
				int count = get_mine(mine, x, y);
				show[x][y] = count + 48;
				display_show(show, ROW, LIN);
				win++;
			}
			else
			{
				printf("此处已经被排查\n");
			}
			
		}
		else
		{
			printf("此处是雷，游戏结束！！！\n");
			display_show(mine, ROW, LIN);
			return;
		}
	}
	if (win == (row - 2) * (lin - 2) - MINE_COUNT)
	{
		printf("排雷成功，游戏通关！！！\n");
	}
}
void game()
{
	srand((unsigned int)time(NULL));
	//创建雷盘和显示盘
	char mine[ROW][LIN] = { 0 };
	char show[ROW][LIN] = { 0 };

	//初始化雷盘和显示盘
	init_board(mine, ROW, LIN,'0');
	init_board(show, ROW, LIN,'*');

	//打印显示盘
	/*display_show(mine, ROW, LIN);
	printf("\n");
	display_show(show, ROW, LIN);*/

	//布置雷
	set_mine(mine, ROW, LIN);
	/*display_show(mine, ROW, LIN);*/
	printf("\n");
	display_show(show, ROW, LIN);

	//排雷
	find_mine(mine, show, ROW, LIN);

}
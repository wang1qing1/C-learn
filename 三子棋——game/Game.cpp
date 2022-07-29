#include"Game.h"

void menu()
{
	printf("*****************************************\n");
	printf("************1.play    0.exit*************\n");
	printf("*****************************************\n");
}

void init_board(char chess[ROW][LIN], int row, int lin)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < lin; j++)
		{
			chess[i][j] = ' ';
		}
	}
}

void print_board(char chess[ROW][LIN],int row,int lin)
{
	for (int i = 0; i <  row; i++)
	{
		for (int j = 0; j < lin; j++)
		{
			printf(" %c ",chess[i][j]); 
			if (j < row - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < lin - 1)
		{
			for (int j = 0; j < row; j++)
			{
				printf("---");
				if (j < row - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void player_chess(char chess[ROW][LIN], int row, int lin)
{
	count_board++;
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入棋子坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= lin)
		{
			if (chess[x-1][y-1] == ' ')
			{
				chess[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该位置已有棋子\n");
			}
		}
		else
		{
			printf("棋子坐标错误，请重新输入\n");
		}
	}
}

void computer_board(char chess[ROW][LIN], int row, int lin)
{
	
	//差一棋子，优先下（1）
	for (int i = 0; i < row; i++)
	{
		if (chess[i][0] == chess[i][1] && chess[i][0] == '#'&& chess[i][2] == ' ')
		{
			chess[i][2] = '#';
			return;
		}
		if (chess[i][0] == chess[i][2] && chess[i][0] == '#'&& chess[i][1] == ' ')
		{
			chess[i][1] = '#';
			return;
		}
		if (chess[i][1] == chess[i][2] && chess[i][1] == '#'&& chess[i][0] == ' ')
		{
			chess[i][0] = '#';
			return;
		}
	}
	//差一棋子，优先下（2）
	for (int i = 0; i < lin; i++)
	{
		if (chess[0][i] == chess[1][i] && chess[0][i] == '#'&& chess[2][i]==' ')
		{
			chess[2][i] = '#';
			return;
		}
		if (chess[0][i] == chess[2][i] && chess[0][i] == '#'&&chess[1][i] == ' ')
		{
			chess[1][i] = '#';
			return;
		}
		if (chess[1][i] == chess[2][i] && chess[1][i] == '#'&& chess[0][i] == ' ')
		{
			chess[0][i] = '#';
			return;
		}
	}
	//差一棋子，优先下（3）
	if (chess[0][0] == chess[1][1] && chess[0][0] == '#' && chess[2][2] == ' ')
	{
		chess[2][2] = '#';
		return;
	}
	if (chess[0][0] == chess[2][2] && chess[0][0] == '#' && chess[1][1] == ' ')
	{
		chess[1][1] = '#';
		return;
	}
	if (chess[2][2] == chess[1][1] && chess[1][1] == '#' && chess[0][0] == ' ')
	{
		chess[0][0] = '#';
		return;
	}

	//差一棋子，优先下（4）
	if (chess[0][2] == chess[1][1] && chess[0][2] == '#' && chess[2][0] == ' ')
	{
		chess[2][0] = '#';
		return;
	}
	if (chess[0][2] == chess[2][0] && chess[0][2] == '#' && chess[1][1] == ' ')
	{
		chess[1][1] = '#';
		return;
	}
	if (chess[2][0] == chess[1][1] && chess[1][1] == '#' && chess[0][2] == ' ')
	{
		chess[0][2] = '#';
		return;
	}
	//对方差一棋子胜利，优先下（5）
	for (int i = 0; i < row; i++)
	{
		if (chess[i][0] == chess[i][1] && chess[i][0] == '*' && chess[i][2] == ' ')
		{
			chess[i][2] = '#';
			return;
		}
		if (chess[i][0] == chess[i][2] && chess[i][0] == '*' && chess[i][1] == ' ')
		{
			chess[i][1] = '#';
			return;
		}
		if (chess[i][1] == chess[i][2] && chess[i][1] == '*' && chess[i][0] == ' ')
		{
			chess[i][0] = '#';
			return;
		}
	}
	//对方差一棋子胜利，优先下（6）
	for (int i = 0; i < lin; i++)
	{
		if (chess[0][i] == chess[1][i] && chess[0][i] == '*' && chess[2][i] == ' ')
		{
			chess[2][i] = '#';
			return;
		}
		if (chess[0][i] == chess[2][i] && chess[0][i] == '*' && chess[1][i] == ' ')
		{
			chess[1][i] = '#';
			return;
		}
		if (chess[1][i] == chess[2][i] && chess[1][i] == '*' && chess[0][i] == ' ')
		{
			chess[0][i] = '#';
			return;
		}
	}

	//对方差一棋子胜利，优先下（7）
	if (chess[0][0] == chess[1][1] && chess[0][0] == '*' && chess[2][2] == ' ')
	{
		chess[2][2] = '#';
		return;
	}
	if (chess[0][0] == chess[2][2] && chess[0][0] == '*' && chess[1][1] == ' ')
	{
		chess[1][1] = '#';
		return;
	}
	if (chess[2][2] == chess[1][1] && chess[1][1] == '*' && chess[0][0] == ' ')
	{
		chess[0][0] = '#';
		return;
	}

	//对方差一棋子胜利，优先下（8）
	if (chess[0][2] == chess[1][1] && chess[0][2] == '*' && chess[2][0] == ' ')
	{
		chess[2][0] = '#';
		return;
	}
	if (chess[0][2] == chess[2][0] && chess[0][2] == '*' && chess[1][1] == ' ')
	{
		chess[1][1] = '#';
		return;
	}
	if (chess[2][0] == chess[1][1] && chess[1][1] == '*' && chess[0][2] == ' ')
	{
		chess[0][2] = '#';
		return;
	}

	//抢占先机，下完这一棋子,差一步胜利；(1)
	for (int i = 0; i < lin; i++)
	{
		if (chess[0][i] == '#' && chess[1][i] == ' ' && chess[2][i] == ' ')
		{
			chess[1][i] = '#';
			return;
		}
		if (chess[1][i] == '#' && chess[0][i] == ' ' && chess[2][i] == ' ')
		{
			chess[0][i] = '#';
			return;
		}
		if (chess[2][i] == '#' && chess[0][i] == ' ' && chess[1][i] == ' ')
		{
			chess[0][i] = '#';
			return;
		}
	}

	//抢占先机，下完这一棋子,差一步胜利；(2)
	for (int i = 0; i < row; i++)
	{
		if (chess[i][0] == '#' && chess[i][1] == ' ' && chess[i][2] == ' ')
		{
			chess[i][1] = '#';
			return;
		}
		if (chess[i][1] == '#' && chess[i][0] == ' ' && chess[i][2] == ' ')
		{
			chess[i][0] = '#';
			return;
		}
		if (chess[i][2] == '#' && chess[i][0] == ' ' && chess[i][1] == ' ')
		{
			chess[i][0] = '#';
			return;
		}
	}

	//抢占先机，下完这一棋子,差一步胜利；(3)
	if (chess[0][0] == '#' && chess[1][1] == ' ' && chess[2][2] == ' ')
	{
		chess[1][1] = '#';
	}
	if (chess[0][0] == ' ' && chess[1][1] == '#' && chess[2][2] == ' ')
	{
		chess[2][2] = '#';
	}
	if (chess[0][0] == ' ' && chess[1][1] == ' ' && chess[2][2] == '#')
	{
		chess[0][0] = '#';
	}

	//抢占先机，下完这一棋子,差一步胜利；(4)
	if (chess[0][2] == '#' && chess[1][1] == ' ' && chess[2][0] == ' ')
	{
		chess[1][1] = '#';
	}
	if (chess[0][2] == ' ' && chess[1][1] == '#' && chess[2][0] == ' ')
	{
		chess[0][2] = '#';
	}
	if (chess[0][2] == ' ' && chess[1][1] == ' ' && chess[2][0] == '#')
	{
		chess[0][2] = '#';
	}

	//第一步棋子，针对
	if (count_board == 1 && chess[0][0] == '*')
	{
		chess[2][2] = '#';
		return;
	}
	if (count_board == 1 && chess[0][2] == '*')
	{
		chess[2][0] = '#';
		return;
	}
	if (count_board == 1 && chess[2][0] == '*')
	{
		chess[0][2] = '#';
		return;
	}
	if (count_board == 1 && chess[2][2] == '*')
	{
		chess[0][0] = '#';
		return;
	}

	while (1)
	{
		int x = rand()%row;
		int y = rand()%lin;
		if (chess[x][y] == ' ')
		{
			chess[x][y] = '#';
			break;
		}
		
	}
}

int is_full(char chess[ROW][LIN], int row, int lin)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < lin; j++)
		{
			if (chess[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char is_win(char chess[ROW][LIN], int row, int lin)
{
	for (int i = 0; i < row; i++)
	{
		if (chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2]&&chess[i][0]!=' ')
		{
			return chess[i][0];
		}
	}
	for (int i = 0; i < lin; i++)
	{
		if (chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i] && chess[0][i] != ' ')
		{
			return chess[0][i];
		}
	}
	if (chess[0][0] == chess[1][1] && chess[1][1] == chess[2][2] && chess[0][0] != ' ')
	{
		return chess[0][0];
	}
	if (chess[0][2] == chess[1][1] && chess[1][1] == chess[2][0] && chess[0][2] != ' ')
	{
		return chess[0][2];
	}
	int tmp = is_full(chess, ROW, LIN);
	if (tmp == 1)
	{
		return 'Q';
	}
	return 'C';
}
void game()
{
	char set;
	srand((unsigned int)time(NULL));
	char chess[ROW][LIN] = { 0 };
	init_board(chess,ROW,LIN);
	print_board(chess,ROW,LIN);
	while (1)
	{
		player_chess(chess, ROW, LIN );
		print_board(chess, ROW, LIN);

		set=is_win(chess,ROW,LIN);
		if ('C' != set)
		{
			break;
		}

		computer_board(chess, ROW, LIN);
		print_board(chess, ROW, LIN);

		set = is_win(chess, ROW, LIN);
		if ('C' != set)
		{
			break;
		}
	}
	if (set == '*')
	{
		printf("恭喜你，你赢了！！\n");
	}
	else if ('#' == set)
	{
		printf("电脑赢了！！\n");
	}
	else if ('Q' == set)
	{
		printf("平局\n");
	}
}


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
		printf("��������������:>");
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
				printf("��λ����������\n");
			}
		}
		else
		{
			printf("���������������������\n");
		}
	}
}

void computer_board(char chess[ROW][LIN], int row, int lin)
{
	
	//��һ���ӣ������£�1��
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
	//��һ���ӣ������£�2��
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
	//��һ���ӣ������£�3��
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

	//��һ���ӣ������£�4��
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
	//�Է���һ����ʤ���������£�5��
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
	//�Է���һ����ʤ���������£�6��
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

	//�Է���һ����ʤ���������£�7��
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

	//�Է���һ����ʤ���������£�8��
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

	//��ռ�Ȼ���������һ����,��һ��ʤ����(1)
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

	//��ռ�Ȼ���������һ����,��һ��ʤ����(2)
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

	//��ռ�Ȼ���������һ����,��һ��ʤ����(3)
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

	//��ռ�Ȼ���������һ����,��һ��ʤ����(4)
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

	//��һ�����ӣ����
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
		printf("��ϲ�㣬��Ӯ�ˣ���\n");
	}
	else if ('#' == set)
	{
		printf("����Ӯ�ˣ���\n");
	}
	else if ('Q' == set)
	{
		printf("ƽ��\n");
	}
}


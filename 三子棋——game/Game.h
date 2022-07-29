#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define LIN 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
static int count_board = 0;

void menu();

void game();

void init_board(char chess[ROW][LIN], int row, int lin);

void print_board(char chess[ROW][LIN], int row, int lin);

void player_chess(char chess[ROW][LIN], int row, int lin);

void computer_board(char chess[ROW][LIN], int row, int lin);

int is_full(char chess[ROW][LIN], int row, int lin);

char is_win(char chess[ROW][LIN], int row, int lin);
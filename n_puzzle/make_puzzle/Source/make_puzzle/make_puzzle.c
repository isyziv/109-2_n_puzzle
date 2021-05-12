//Copyright © 2021 YOU-WEI,XU. All rights reserved.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int stack[20][100][100];
void push_puzzle(FILE* data, int size, char sp)
{
	int choose = size;
	for (int i = 0; i != size; i++)
	{
		for (int j = 0; j != size; j++)
		{
			int tmp = stack[choose][i][j];
			if (stack[choose][i][j] != 0)
			{
				fprintf(data, "%d%c", stack[choose][i][j], sp);
			}
			else
			{
				fprintf(data, "%d%c", 0, sp);
			}
		}
		fprintf(data, "\n");
	}
}
void find(int var, int size, int zero[2], int choose)
{
	for (int i = 0; i != size; i++)
	{
		for (int j = 0; j != size; j++)
		{
			if (stack[choose][i][j] == var)
			{
				zero[0] = i;
				zero[1] = j;
			}
		}
	}
}
void swap(int action, int choose, int size)
{
	int zero[2];
	find(0, size, zero, choose);
	int act = 0;
	int tmp;
	if (action == 56 || action == 1)//8
	{
		if (zero[0] == 0)
		{
			return 1;
		}
		tmp = stack[choose][zero[0]][zero[1]];
		stack[choose][zero[0]][zero[1]] = stack[choose][zero[0] - 1][zero[1]];
		stack[choose][zero[0] - 1][zero[1]] = tmp;
	}
	if (action == 53 || action == 2)//5
	{
		if (zero[0] == size - 1)
		{
			return 1;
		}
		tmp = stack[choose][zero[0]][zero[1]];
		stack[choose][zero[0]][zero[1]] = stack[choose][zero[0] + 1][zero[1]];
		stack[choose][zero[0] + 1][zero[1]] = tmp;
	}
	if (action == 52 || action == 3)//4
	{
		if (zero[1] == 0)
		{
			return 1;
		}
		tmp = stack[choose][zero[0]][zero[1]];
		stack[choose][zero[0]][zero[1]] = stack[choose][zero[0]][zero[1] - 1];
		stack[choose][zero[0]][zero[1] - 1] = tmp;
	}
	if (action == 54 || action == 4)//6
	{
		if (zero[1] == size - 1)
		{
			return 1;
		}
		find(0, size, zero, choose);
		tmp = stack[choose][zero[0]][zero[1]];
		stack[choose][zero[0]][zero[1]] = stack[choose][zero[0]][zero[1] + 1];
		stack[choose][zero[0]][zero[1] + 1] = tmp;
	}
}
void step_up(int size, int var)
{
	int k = 1;
	for (int j = 0; j <= size - 1; j++)
	{
		for (int i = 0; i <= size - 1; i++)
		{
			if (k != size * size)
			{
				stack[var][j][i] = k;
			}
			else
			{
				stack[var][j][i] = 0;
			}
			k++;
		}
	}
}
int main(void)
{
	srand(time(NULL));
	for (int i = 4; i <= 9; i++)
	{
		step_up(i, i);
		for (int j = (rand() % 2000) + 1000; j != 0; j--)
		{
			int k = (rand() % 4) + 1;
			swap(k, i, i);
		}
		for (int j = 0; j != i; j++)
		{
			swap(2, i, i);
			swap(4, i, i);
		}

	}
	int mod = 0;
	printf("choose mod \n1:single txt file\t2:mult txt file \t3:mult csv file \t other do not action\n? ");
	scanf("%d", &mod);
	if (mod == 1)
	{
		char sp;
		printf("choose char between puzzle ");
		fflush(stdin);
		sp = getchar();
		sp = getchar();
		FILE* data;
		data = fopen("test.txt", "w");
		for (int i = 4; i <= 9; i++)
		{
			fprintf(data, "%d\n", i);
			push_puzzle(data, i, sp);
			fprintf(data, "\n");
		}
		fclose(data);
	}
	if (mod == 2)
	{
		FILE* save[10];
		save[4] = fopen("test4.txt", "w");
		save[5] = fopen("test5.txt", "w");
		save[6] = fopen("test6.txt", "w");
		save[7] = fopen("test7.txt", "w");
		save[8] = fopen("test8.txt", "w");
		save[9] = fopen("test9.txt", "w");
		char sp;
		printf("choose char between puzzle ");
		fflush(stdin);
		sp = getchar();
		sp = getchar();
		for (int i = 4; i <= 9; i++)
		{
			fprintf(save[i], "%d\n", i);
			push_puzzle(save[i], i, sp);
		}
		fclose(save[4]);
		fclose(save[5]);
		fclose(save[6]);
		fclose(save[7]);
		fclose(save[8]);
		fclose(save[9]);
	}
	if (mod == 3)
	{
		FILE* save[10];
		save[4] = fopen("test4.csv", "w");
		save[5] = fopen("test5.csv", "w");
		save[6] = fopen("test6.csv", "w");
		save[7] = fopen("test7.csv", "w");
		save[8] = fopen("test8.csv", "w");
		save[9] = fopen("test9.csv", "w");
		char sp;
		sp = 44;
		for (int i = 4; i <= 9; i++)
		{
			fprintf(save[i], "%d,\n", i);
			push_puzzle(save[i], i, sp);
		}
		fclose(save[4]);
		fclose(save[5]);
		fclose(save[6]);
		fclose(save[7]);
		fclose(save[8]);
		fclose(save[9]);
	}
	system("pause");
	return 0;
}

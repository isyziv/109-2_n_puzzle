#include "puzzle.h"
void swap(int stack[100][100],int action, int size)
{
	int zero[2];
	find(0, size, zero);
	int act = 0;
	int tmp;
	if (action == 56 || action == 1)//8
	{
		if (zero[0] == 0)
		{
			return 1;
		}
		tmp = stack[zero[0]][zero[1]];
		stack[zero[0]][zero[1]] = stack[zero[0] - 1][zero[1]];
		stack[zero[0] - 1][zero[1]] = tmp;
	}
	if (action == 53 || action == 2)//5
	{
		if (zero[0] == size - 1)
		{
			return 1;
		}
		tmp = stack[zero[0]][zero[1]];
		stack[zero[0]][zero[1]] = stack[zero[0] + 1][zero[1]];
		stack[zero[0] + 1][zero[1]] = tmp;
	}
	if (action == 52 || action == 3)//4
	{
		if (zero[1] == 0)
		{
			return 1;
		}
		tmp = stack[zero[0]][zero[1]];
		stack[zero[0]][zero[1]] = stack[zero[0]][zero[1] - 1];
		stack[zero[0]][zero[1] - 1] = tmp;
	}
	if (action == 54 || action == 4)//6
	{
		if (zero[1] == size - 1)
		{
			return 1;
		}
		find(0, size, zero);
		tmp = stack[zero[0]][zero[1]];
		stack[zero[0]][zero[1]] = stack[zero[0]][zero[1] + 1];
		stack[zero[0]][zero[1] + 1] = tmp;
	}
}
void step_up(int stack[100][100],int size)
{
	int k = 1;
	for (int j = 0; j !=size-1 ; j++)
	{
		for (int i = 0; i != size-1; i++)
		{
			if (true)
			{
stack[j][i] = k;
			}
			
			k++
		}
	}
}
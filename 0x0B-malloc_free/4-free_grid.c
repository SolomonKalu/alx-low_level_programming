#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid pointer
 * @height: int arg
 *
 * Return: Nothing, 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height < 0)
	{
		return;
	}
	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}

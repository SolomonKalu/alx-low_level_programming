#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dim array of int
 * @width: input one
 * @height: input two
 *
 * Return: NULL if 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int *));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			{
				return (NULL);
			}
		}
	}
	return (grid);
}

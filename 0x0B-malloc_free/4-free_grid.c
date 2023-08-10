#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Entry point
 * @grid:input
 * @height: second input
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);
}

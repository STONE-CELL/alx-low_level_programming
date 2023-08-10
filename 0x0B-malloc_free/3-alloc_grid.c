#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: first input
 * @height: second input
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **e;
	int r, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	e = malloc(sizeof(int) * height);

	if (e == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		e[r] = malloc(sizeof(int) * width);

		if (e[r] == NULL)
		{
			for (; r >= 0; r--)
				free(e[r]);
			free(e);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (t = 0; t < width; t++)
			e[r][t] = 0;
	}

	return (e);
}



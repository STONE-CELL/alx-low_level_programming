#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry point
 * @min : first input
 * @max : second input
 * Return : array of integers or NULL
 */
int *array_range(int min, int max)
{
	int y, m;
	int *ptr;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	ptr = malloc(sizeof(int) * y);

	if (!ptr)
		return (NULL);
	for (m = 0; m < y; m++)
		ptr[m] = min++;
	return (ptr);
}

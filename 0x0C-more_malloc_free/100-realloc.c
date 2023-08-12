#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - Entry point
 * @ptr : first input
 * @old_size: second input
 * @new_size: third input
 * Return: NULL if new_size = 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *u;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		u = malloc(new_size);
		if (u == NULL)
			return (NULL);
		return (u);
	}
	if (new_size > old_size)
	{
		u = malloc(new_size);
		if (u == NULL)
			return (NULL);
		for (m = 0; m < old_size && m < new_size; m++)
			*((char *)u + m) = *((char *)ptr + m);
		free(ptr);
	}
	return (u);
}

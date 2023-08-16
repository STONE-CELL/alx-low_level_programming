#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: input
 * @size: input
 * @cmp: input
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u = 0;

	if (array && size && cmp)
		while (u < size)
		{
			if (cmp(array[u]))
				return (u);
			u++;
		}
	return (-1);
}

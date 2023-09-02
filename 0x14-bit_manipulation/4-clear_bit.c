#include "main.h"

/**
 * clear_bit - Entry point
 * @n:input
 * @index:input
 *
 * Return: 1 if success or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}

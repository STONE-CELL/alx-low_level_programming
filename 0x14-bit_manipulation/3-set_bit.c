#include "main.h"

/**
 * set_bit - Entry point
 * @n:input
 * @index:input
 * Return: 1 if success or -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1l << index));
}

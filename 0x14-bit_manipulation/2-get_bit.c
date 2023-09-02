#include "main.h"

/**
 * get_bit - Entry point
 * @n:input
 * @index:input
 * Return: Always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}

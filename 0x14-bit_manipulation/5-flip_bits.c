#include "main.h"

/**
 * flip_bits - Entry point
 * @n:input
 * @m:input
 *
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	while (x)
	{
		if (x & 1ul)
			c++;
		x = x >> 1;
	}
	return (c);
}

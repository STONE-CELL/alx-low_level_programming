#include "main.h"

/**
 * binary_to_unit - Entry point
 * @b:input
 *
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		u = u * 2 + (*b++ - '0');
	}
	return (u);
}

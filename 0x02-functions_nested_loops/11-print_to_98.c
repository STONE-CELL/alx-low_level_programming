#include "main.h"
/**
 * print_to_98 - print to 98 counts
 * separated by comma followed
 * by space and number should be
 * printed in order
 *
 * @n: input
 */
void print_to_98(int n)
{
	int d;

	if (n > 98)
	{
		for (d = n; d > 98; d--)
			_putchar('d');
	}
	else
	{
		for (d = n; d < 98; d++)
			_putchar('d');
	}
	_putchar('\n');
}

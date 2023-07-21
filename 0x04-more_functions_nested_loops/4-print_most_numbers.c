#include "main.h"

/**
 * print_most_numbers - 0-9
 * except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + 48);
	}
	_putchar('\n')
}

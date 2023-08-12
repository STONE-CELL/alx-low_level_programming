#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _puts - Entry point
 * @yu : input
 * Return : void
 */
void _puts(char *yu)
{
	int r = 0;

	while (yu[r])
	{
		_putchar(yu[r]);
		r++;
	}
}

/**
 * _atoi - Entry point
 * @o: input
 * Return : Always 0
 */
int _atoi(const char *o)
{
	int y = 1;
	unsigned long int p = 0, g, h;

	for (g = 0; !(o[g] >= 48 && o[g] <= 57); g++)
	{
		if (o[g] == '-')
		{
			y *= -1;
		}
	}

	for (h = g; o[h] >= 48 && o[h] <= 57; h++)
	{
		p *= 10;
		p += (o[h] - 48);
	}

	return (y * p);
}

/**
 * print_int - Entry point
 * @x: input
 * Return : Always 0
 */
void print_int(unsigned long int x)
{
	unsigned long int f = 1, h, p;

	for (h = 0; x > 9; h++, f *= 10)
	;

	for (; f >= 1; x %= f, f /= 10)
	{
		p = x / f;
		_putchar('0' + p);
	}
}

/**
 * main - Entry point
 * @argc: input
 * @argv: second input
 * Return : 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

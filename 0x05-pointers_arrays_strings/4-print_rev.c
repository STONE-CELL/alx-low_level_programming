#include "main.h"
/**
 * print_rev - puts string in reverse
 * @w: string character
 * Return: always 0
 */
void print_rev(char *w)
{
	int r = 0;

	while (w[r])
		r++;

	while (r--)
	{
		_putchar(w[r];
	}
	putchar('\n');
}

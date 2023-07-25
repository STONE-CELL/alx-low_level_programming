#include "main.h"
/**
 * print_rev - puts string in reverse
 * @str: string character
 * Return: always 0
 */
void print_rev(char *str)
{
	int r = 0;

	while (str[r])
		r++;

	while (r--)
	{
		_putchar(str[r];
	}
	_putchar('\n');
}

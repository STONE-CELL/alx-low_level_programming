#include "main.h"
/**
 * _puts - function that put strings
 * @o: string character
 * Return: aleays 0
 */
void _puts(char *o)
{
	while (*o != '\0')
	{
		_putchar(*o + 0);
		o++;
	}
	_putchar('\n');
}

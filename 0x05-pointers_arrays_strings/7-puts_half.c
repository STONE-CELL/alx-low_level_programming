#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: string charcter
 * Return: always 0
 */
void puts_half(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
}

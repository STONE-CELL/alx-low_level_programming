#include "main.h"
/**
 * puts - a function that prints every other character of a string
 * @str: string charcter
 */
void puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

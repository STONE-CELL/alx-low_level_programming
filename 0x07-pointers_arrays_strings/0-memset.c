#include "main.h"
#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte.
 * @s : is pointer
 * @b : first input
 * @n: second output
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	 int g = 0;

	for (; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}

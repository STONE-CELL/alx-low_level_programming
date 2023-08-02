#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 * @s: first input
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int y;

	if (*s)
	{
		y++;
		y += _strlen_recursion(s + 1);
	}

	return (y);
}

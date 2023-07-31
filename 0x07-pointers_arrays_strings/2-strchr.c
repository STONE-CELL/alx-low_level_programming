#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s : first input
 * @c : second input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}

	return ('\0');
}

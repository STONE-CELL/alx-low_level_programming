#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: first input
 * @accept: second input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, k;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (t = 0; accept[k] != s[t]; k++)
		{
			if (accept[k] == '\0')
				return (t);
		}
	}

	return (t);
}

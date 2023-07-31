#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: first input
 * @accept: second input
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int t, k;
	char *d;

	t = 0;
	while (s[t] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[t])
			{
				d = &s[k];
				return (d);
			}
			k++;
		}
		t++;
	}

	return (0);
}

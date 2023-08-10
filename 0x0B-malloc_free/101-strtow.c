#include <stdlib.h>
#include "main.h"
/**
 * count_word - Entry point
 * @s : string
 * Return: number of words
 */
int count_word(char *s)
{
	int m, v, c;

	m = 0;
	c = 0;

	for (v = 0; s[v] != '\0', v++)
	{
		if (s[v] == ' ')
			m = 0;
		else if (m == 0)
		{
			m = 1;
			c++;
		}
	}

	return (c);
}
/**
 * strtow - Entry point
 * @str : input
 * Return : pointer to array , NULL if fail
 */
char **strtow(char *str)
{

	char **m, *t;
	int m, b = 0, g = 0, words, x = 0, s, e;

	while (*(str * g))
		g++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1);
	if (m == NULL)
		return (NULL);

	for (b = 0; b <= g; b++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (x)
			{
				e = m;
				t = (char *) malloc(sizeof(char) * (x + 1);
				if (t == NULL)
					return (NULL);
				while (s < e)
					*t++ = str[s++];
				*t = '\0';
				m[b] = t - x;
				b++;
				x = 0;

			}
		}
		else if (x++ == 0)
			s = m;
	}

	m[b] = NULL;

	return (m);
}

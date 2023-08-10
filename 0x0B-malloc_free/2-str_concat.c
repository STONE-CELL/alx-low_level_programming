#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: first input
 * @s2: second input
 * Return : concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *i;
	int b, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	b = j = 0;
	while (s1[b] != '\0')
		b++;
	while (s2[j] != '\0')
		j++;
	i = malloc(sizeof(char) * (b + j + 1));

	if (i == NULL)
		return (NULL);
	b = j = 0;
	while (s1[b] != '\0')
	{
		i[b] = s1[b];
		b++;
	}
	while (s2[j] != '\0')
	{
		i[b] = s2[j];
		b++, j++;
	}
	i[b] = '\0';
	return (i);
}


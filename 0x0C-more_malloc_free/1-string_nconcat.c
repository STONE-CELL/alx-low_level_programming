#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * @s1 : first input
 * @s2 : second input
 * @n :number
 * Return: pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int o, p, f, g;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (f = 0; s1[f] != '\0'; f++)
		;

	for (g = 0; s2[g] != '\0'; g++)
		;

	str = malloc(f + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (o = 0; s1[o] != '\0'; o++)
		str[o] = s1[o];

	for (p = 0; p < n; p++)
	{
		str[o] = s2[p];
		o++;
	}

	str[o] = '\0';
	return (str);
}

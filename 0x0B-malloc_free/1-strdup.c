#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str : input
 * Return : 0
 */
char *_strdup(char *str)
{
	char *o;
	int p, h;

	if (str == NULL)
		return (NULL);
	p = 0;
	while (str[p] != '\0')
		p++;

	o = malloc(sizeof(char) * (p + 1));

	if (o == NULL)
		return (NULL);

	for (h = 0, str[h]; h++)
		o[h] = str[h];

	return (o);
}


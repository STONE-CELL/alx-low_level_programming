#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Entry point
 * @ac : first input
 * @av : second input
 * Return : 0
 */
char *argstostr(int ac, char **av)
{
	int b, v, t = 0, k = 0;
	char *y;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (v = 0; av[b][v]; v++)
			k++;
	}
	k += ac;

	y = malloc(sizeof(char) * y + 1);
	if (y == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (v = 0; av[b][v]; v++)
	{
		y[t] = av[b][v];
		t++;
	}
	if (y[t] == '\0')
	{
		y[t++] = '\n';
	}
	return (y);
}

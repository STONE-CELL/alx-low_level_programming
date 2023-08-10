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
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (v = 0; av[b][v]; v++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * str + 1);
	if (str == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (v = 0; av[b][v]; v++)
	{
		str[t] = av[b][v];
		t++;
	}
	if (str[t] == '\0')
	{
		str[t++] = '\n';
	}
	return (str);
}

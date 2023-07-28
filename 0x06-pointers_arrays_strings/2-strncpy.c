#include "main.h"
/**
 * *_strncpy - a function that copies a string
 * @*dest: first input
 * @*src: second input
 * @n:third input
 * Return: always 0
 */
char *_ strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

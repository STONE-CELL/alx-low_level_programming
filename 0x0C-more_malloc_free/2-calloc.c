#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memset - Entry point
 * @t : pointer
 * @b : constant
 * @n : input
 * Return : t
 */
char *_memset(char *t, char b, unsigned int n)
{
	char *ptr = t;

	while (n--)
		*t++ = b;

	return (ptr);
}

/**
 * _calloc - Entry point
 * @nmemb : input
 * @size : second input
 * Return : pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *z;

	if (size == 0 || nmemb == 0)
		return (NULL);
	z = malloc(sizeof(int) * nmemb);

	if (z == 0)
		return (NULL);

	_memset(z, 0, sizeof(int) * nmemb);

	return (z);
}

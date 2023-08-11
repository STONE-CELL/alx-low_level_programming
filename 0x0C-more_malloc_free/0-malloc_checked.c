#include "main.h"
/**
 * *malloc_checked - Entry point
 * @b: input
 * Return: pointer to array or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}

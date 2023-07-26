#include "main.h"
/**
 * print_array - a function that prints  elements of an array of integers
 * @a:first input
 * @b:second input
 * Return: always 0
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		if (i != (b - 1))
			printf("%d, ", a[i]);
		else
			printf("%d". a[i]);
	}
	printf("\n");
}

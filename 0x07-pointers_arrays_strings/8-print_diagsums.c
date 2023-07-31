#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a:first input
 * @size:second input
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int t, s1 = 0, s2 = 0;

	for (t = 0; t < size; t++)
	{
		s1 += a[t];
		s2 += a[size - t - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}

#include "main.h"
/**
 * print_square - print a square using the charcter #
 *
 * @size: is the size of square
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
			_putchar('#');
		_putchar('\n')
	}
}



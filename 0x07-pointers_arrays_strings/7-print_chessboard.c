#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a:first input
 * Return : always 0
 */
void print_chessboard(char (*a)[8])
{
	int t, k;

	for (t = 0; t < 8; t++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[t][k]);
		}
		_putchar('\n');
	}
}

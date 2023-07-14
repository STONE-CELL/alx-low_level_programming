#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Returns: 0 (success)
 */
int main(void)
{
	char po  = 'a';

	while (po <= 'z')

	{

		putchar(po);
		po++;
	}
	putchar('\n');

	return (0);
}

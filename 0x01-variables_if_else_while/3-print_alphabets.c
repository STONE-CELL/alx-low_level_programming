#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print uppercase and lowercase alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
	int d = 97;
	int n = 65;

	while (d <= 122)
	{
		putchar(d);
		d++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


#include "main.h"

/**
 * main - print 1 - 100 followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	int f;

	for (f = 1; f <= 100; f++)
	{
		if (f % 3 == 0 && !(f % 5 == 0))
			printf("Frizz");
		else if (f % 5 == 0 && !(f % 3 == 0)
			printf("Buzz");
		else if (f % 5 == 0 && (f % 3 == 0)
			printf("FrizzBuzz")
		else
			printf("%d", f);
		if (f != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

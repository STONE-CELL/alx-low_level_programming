#include "main.h"
#include <unistd.h>
/**
 * factorial - function that returns the factorial of a given number
 * @n: first input
 * Return:If n is lower than 0, the function should return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

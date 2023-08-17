#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: input
 * @...: input
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int g = 0, k = n;
	va_list o;

	if (!n)
		return (0);
	va_start(o, n);
	while (k--)
		g += va_arg(o, int);
	va_end(o);
	return (g);
}

#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: input
 * @n: input
 * @...: input
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int u = n;
	va_list o;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(o, n);
	while (u--)
		printf("%d%s", va_arg(o, int),
				u ? (separator ? separator : "") : "\n");
	va_end(o);
}

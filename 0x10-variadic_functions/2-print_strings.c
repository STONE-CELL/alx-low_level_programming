#include "variadic_functions.h"
/**
 * print_strings - Entry point
 * @separator: input
 * @n: input
 * @...: input
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int y = n;
	char *m;
	va_list o;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(o, n);
	while (y--)
		printf("%s%s", (m = va_arg(o, char *)) ? m : "(nil)",
				y ? (separator ? separator : "") : "\n");
	va_end(o);
}

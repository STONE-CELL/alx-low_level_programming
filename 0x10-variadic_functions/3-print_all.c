#include "variadic_functions.h"

/**
 * format_char - Entry point
 * @separator: input
 * @o: input
 */
void format_char(char *separator, va_list o)
{
	printf("%s%c", separator, va_arg(o, int));
}
/**
 * format_int - Entry point
 * @separator: input
 * @o: input
 */
void format_int(char *separator, va_list o)
{
	printf("%s%d", separator, va_arg(o, int));
}
/**
 * format_float - Entry point
 * @separator: input
 * @o: input
 */
void format_float(char *separator, va_list o)
{
	printf("%s%f", separator, va_arg(o, double));
}
/**
 * format_string - Entry point
 * @separator: input
 * @o: input
 */
void format_string(char *separator, va_list o)
{
	char *m = va_arg(o, char *);

	switch ((int)(!m))
	case 1:
		m = "(nil)";

	printf("%s%s", separator, m);
}
/**
 * print_all - Entry point
 * @format: input
 * @...: input
 */
void print_all(const char * const format, ...)
{
	int r = 0, b;
	char *separator = "";
	va_list o;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(o, format);
	while (format && format[r])
	{
		b = 0;
		while (tokens[b].token)
		{
			if (format[r] == tokens[b].token[0])
			{
				tokens[b].f(separator, o);
				separator = ", ";
			}
			b++;
		}
		r++;
	}
	printf("\n");
	va_end(o);
}


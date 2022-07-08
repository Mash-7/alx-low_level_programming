#include "2-print_strings.c"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sv;
	unsigned int i;
	char *str;

	va_start(sv, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(sv, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(sv);
}

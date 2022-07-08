#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);

/**
 * print_char - Prints a char.
 * @args: Arguments pointing to the char to be printed.
 */
void print_char(va_list args)
{
	char alph;

	alph = va_arg(args, int);
	printf("%c", alph);
}

/**
 * print_int - Prints an integer
 * @args: Arguments pointing to the integer to be printed.
 */
void print_int(va_list args)
{
	int val;

	val = va_arg(args, int);
	printf("%d", val);
}

/**
 * print_float - Prints a float.
 * @args: Arguments pointing to the float to be printed.
 */
void print_float(va_list args)
{
	float val;

	val = va_arg(args, double);
	printf("%f", val);
}

/**
 * print_string - Prints a string.
 * @args: Arguments pointing to the string to be printed.
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str != NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	int i = 0, k = 0;
	char *sep = "";

	func_t id[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string} };

	va_start(ar, format);

	while (format && format[i])
	{
		k = 0;

		while (k < 4 && format[i] != id[k].symb)
			k++;

		if (k < 4)
		{
			printf("%s", sep);
			id[k].func(ar);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}

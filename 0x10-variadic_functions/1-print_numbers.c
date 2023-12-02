#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints no.s
 * @separator: string to be printed btwn 2 no.s
 * @n: no. of integers passed to fn
 * @...: var no. of no.s to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int ind;

	va_start(nm, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(nm, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nm);
}

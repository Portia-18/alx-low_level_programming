#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print str
 * @separator: str to be printed btwn strings
 * @n: no. of str passed to fn
 * @...: var no.of str to be printed
 * if separator NULL not printed
 * if one of str is NULL, (NIL) PRINTED
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *st;
	unsigned int ind;

	va_start(str, n);
	for (ind = 0; ind < n; ind++)
	{
		st = va_arg(str, char *);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}

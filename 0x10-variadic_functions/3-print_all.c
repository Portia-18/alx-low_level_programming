#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: liststypes of args passed to fn
 */

void print_all(const char * const format, ...)
{
	va_list lst;
	unsigned int i = 0;
	char *st, *sp = "";

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
			printf("%s%c", sp, va_arg(lst, int));
			break;
			case 'i':
			printf("%s%d", sp, va_arg(lst, int));
			break;
			case 'f':
			printf("%s%f", sp, va_arg(lst, double));
			break;
			case 's':
			st = va_arg(lst, char*);
			if (!st)
				st = "(nil)";
			printf("%s%s", sp, st);
			break;
			default:
			i++;
			continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(lst);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum f all parameters
 * @n: no. of parameters passed to function
 * @...: var no. of parameters to calc sum 0
 * Return: if n == 0 - 0
 * sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x, sum = 0;

	va_start(p, n);

	for (x = 0; x < n; x++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}

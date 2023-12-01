#include "variadic_functions.h"
#include <stdarg.h>

/**
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x, sum =0;

	va_start(const unsigned int n, ...);

	for(x = 0; x < n; x++)
		sum += va_argc(p, int);

	va_end(p);

	return (sum);
}

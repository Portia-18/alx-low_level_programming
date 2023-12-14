#include "main.h"

/**
 * print_binary - Prts bin representation of a no.
 * @n: The no to be printed in bin.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

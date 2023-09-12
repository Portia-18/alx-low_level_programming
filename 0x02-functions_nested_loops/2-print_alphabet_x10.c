#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (a = 1; a <= 10; a++)
	{
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	}
	_putchar('\n');
}

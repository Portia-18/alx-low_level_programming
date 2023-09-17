#include "main.h"
/**
 * print_line - prints _
 * @n: input
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{/* */
		_putchar('\n');
	}
	else/* */
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

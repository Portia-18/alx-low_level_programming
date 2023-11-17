#include "main.h"
/**
 * _puts_recursion - fun prints string
 * @s: string parameter
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

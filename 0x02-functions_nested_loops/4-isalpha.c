#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *
 * @c: entry point
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	int a;
	a = 97;

	if (c >= 65 && c < 91)
	{
	if (a >= 97 && a < 123)
	return (1);
	}
	return (0);
	_putchar('n');
}

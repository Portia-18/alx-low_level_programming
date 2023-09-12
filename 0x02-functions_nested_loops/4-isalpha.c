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
	if (c >= 97 && c < 123 &&
	c >= 65 && c < 91)
	return (1);
	return (0);
	_putchar('\n');
}

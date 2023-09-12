#include "main.h"

/**
 * _islower - checks if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	return (1);
	return (0);
}

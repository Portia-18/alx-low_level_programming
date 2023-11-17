#include "main.h"

/**
 * _pow_recursion - gives the pow of x^y
 * @x: base
 * @y: exponent
 * Return: result of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

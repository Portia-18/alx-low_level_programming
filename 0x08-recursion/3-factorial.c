#include "main.h"

/**
 * factorial - gives factorial of a number
 * @n: no. to find factorial
 * Return: factorial of no.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

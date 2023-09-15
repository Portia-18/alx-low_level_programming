#include "main.h"

/**
 * largest_number - returns the largest of 3 no.s
 * @a: first integer
 * @b: second integer
 * @c: 3rd integer
 * Return: largest no.
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

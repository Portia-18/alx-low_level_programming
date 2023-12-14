#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *u;

	u = (char *)&x;
	if (*u)
		return (x);
	else
		return (0);
}


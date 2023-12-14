#include "main.h"

/**
 * get_endianness - Checks endianness.
 * Return: If big-endian - 0.
 */
int get_endianness(void)
{
	int nm = 1;
	char *endian = (char *)&nm;

	if (*endian == 1)
		return (1);

	return (0);
}

#include "main.h"

/**
 * get_bit - Gets val of bit at idx.
 * @n: The bit.
 * @index: idx to get value at - indices start at 0.
 * Return: val of idx error -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

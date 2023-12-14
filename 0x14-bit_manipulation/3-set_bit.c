#include "main.h"

/**
 * set_bit - Sets val of bit at a given idx to 1.
 * @n: A ptr to bit.
 * @index: idx set val at - indices start at 0.
 * Return: success 1 error -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

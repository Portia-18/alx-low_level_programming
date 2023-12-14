#include "main.h"

/**
 * clear_bit - Sets val of bit at a given idx to 0.
 * @n: A ptr to the bit.
 * @index: idx set value at - indices start at 0.
 * Return: 1 success error -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

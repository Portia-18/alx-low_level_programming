#include "main.h"

/**
 * flip_bits - Counts no of bits to be
 *             flipped to get from one no to another.
 * @n: The no.
 * @m: The no to flip n to.
 * Return: necessary no of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m, bits = 0;

	while (r > 0)
	{
		bits += (r & 1);
		r >>= 1;
	}

	return (bits);
}

#include "main.h"

/**
 * flip_bits - returns hamming distance of two bit words
 * @n: frst bit word
 * @m: secnd bit word
 * Return: hamming distance
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sh = (sizeof(n) * BYTE_LENGHT);
	int bit = 0;

	while (sh--)
		bit += (n >> bit & 1) != (m >> bit & 1);
	return (bit);
}

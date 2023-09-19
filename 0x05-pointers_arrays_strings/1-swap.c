#include "main.h"
/**
 * swap_int - swaps values
 * @a: 1st int
 * @b: 2md int
 */
void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}

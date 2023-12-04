#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prnts each array elem
 * @array: arr
 * @size: elem to prt
 * @action: ptr to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}

#include "function_pointers.h"

/**
 * int_index - return index place if comparison
 * @array: arr
 * @size: size of ele in arr
 * @cmp: pointer to fn of one of 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

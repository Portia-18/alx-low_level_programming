#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array of size size
 * and assign char
 * @size: array size
 * @c: assign char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
